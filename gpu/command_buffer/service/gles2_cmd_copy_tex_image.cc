// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "gpu/command_buffer/service/gles2_cmd_copy_tex_image.h"
#include "gpu/command_buffer/service/vendor_gl.h"

#include "gpu/command_buffer/service/texture_manager.h"
#include "ui/gl/gl_version_info.h"

namespace {

void CompileShader(GLuint shader, const char* shader_source) {
  vendorShaderSource(shader, 1, &shader_source, 0);
  vendorCompileShader(shader);
#ifndef NDEBUG
  GLint compile_status;
  vendorGetShaderiv(shader, GL_COMPILE_STATUS, &compile_status);
  if (GL_TRUE != compile_status)
    DLOG(ERROR) << "CopyTexImage: shader compilation failure.";
#endif
}

}  // anonymous namespace

namespace gpu {
namespace gles2 {

CopyTexImageResourceManager::CopyTexImageResourceManager(
    const gles2::FeatureInfo* feature_info)
    : feature_info_(feature_info) {
  DCHECK(feature_info->gl_version_info().is_desktop_core_profile);
}

CopyTexImageResourceManager::~CopyTexImageResourceManager() {}

void CopyTexImageResourceManager::Initialize(
    const gles2::GLES2Decoder* decoder) {
  if (initialized_) {
    return;
  }

  blit_program_ = vendorCreateProgram();

  // Compile the vertex shader
  const char* vs_source =
      "#version 150\n"
      "out vec2 v_texcoord;\n"
      "\n"
      "void main()\n"
      "{\n"
      "    const vec2 quad_positions[6] = vec2[6]\n"
      "    (\n"
      "        vec2(0.0f, 0.0f),\n"
      "        vec2(0.0f, 1.0f),\n"
      "        vec2(1.0f, 0.0f),\n"
      "\n"
      "        vec2(0.0f, 1.0f),\n"
      "        vec2(1.0f, 0.0f),\n"
      "        vec2(1.0f, 1.0f)\n"
      "    );\n"
      "\n"
      "    gl_Position = vec4((quad_positions[gl_VertexID] * 2.0) - 1.0, 0.0, "
      "1.0);\n"
      "    v_texcoord = quad_positions[gl_VertexID];\n"
      "}\n";

  GLuint vs = vendorCreateShader(GL_VERTEX_SHADER);
  CompileShader(vs, vs_source);
  vendorAttachShader(blit_program_, vs);
  vendorDeleteShader(vs);

  // Compile the fragment shader
  const char* fs_source =
      "#version 150\n"
      "uniform sampler2D u_source_texture;\n"
      "in vec2 v_texcoord;\n"
      "out vec4 output_color;\n"
      "\n"
      "void main()\n"
      "{\n"
      "    output_color = texture(u_source_texture, v_texcoord);\n"
      "}\n";

  GLuint fs = vendorCreateShader(GL_FRAGMENT_SHADER);
  CompileShader(fs, fs_source);
  vendorAttachShader(blit_program_, fs);
  vendorDeleteShader(fs);

  vendorLinkProgram(blit_program_);
#ifndef NDEBUG
  GLint linked = 0;
  vendorGetProgramiv(blit_program_, GL_LINK_STATUS, &linked);
  if (!linked) {
    DLOG(ERROR) << "CopyTexImage: program link failure.";
  }
#endif

  GLuint texture_uniform =
      vendorGetUniformLocation(blit_program_, "u_source_texture");
  vendorUseProgram(blit_program_);
  vendorUniform1i(texture_uniform, 0);

  vendorGenTextures(scratch_textures_.size(), scratch_textures_.data());
  vendorActiveTexture(GL_TEXTURE0);
  for (auto scratch_texture : scratch_textures_) {
    vendorBindTexture(GL_TEXTURE_2D, scratch_texture);

    // Use nearest, non-mipmapped sampling with the scratch texture
    vendorTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    vendorTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
  }

  vendorGenFramebuffersEXT(1, &scratch_fbo_);
  vendorGenVertexArraysOES(1, &vao_);

  decoder->RestoreTextureUnitBindings(0);
  decoder->RestoreActiveTexture();
  decoder->RestoreProgramBindings();

  initialized_ = true;
}

void CopyTexImageResourceManager::Destroy() {
  if (!initialized_) {
    return;
  }

  vendorDeleteProgram(blit_program_);
  blit_program_ = 0;

  vendorDeleteTextures(scratch_textures_.size(), scratch_textures_.data());
  scratch_textures_.fill(0);

  vendorDeleteFramebuffersEXT(1, &scratch_fbo_);
  scratch_fbo_ = 0;

  vendorDeleteVertexArraysOES(1, &vao_);
  vao_ = 0;

  initialized_ = false;
}

void CopyTexImageResourceManager::DoCopyTexImage2DToLUMACompatibilityTexture(
    const gles2::GLES2Decoder* decoder,
    GLuint dest_texture,
    GLenum dest_texture_target,
    GLenum dest_target,
    GLenum luma_format,
    GLenum luma_type,
    GLint level,
    GLenum internal_format,
    GLint x,
    GLint y,
    GLsizei width,
    GLsizei height,
    GLuint source_framebuffer,
    GLenum source_framebuffer_internal_format) {
  GLenum adjusted_internal_format =
      gles2::TextureManager::AdjustTexInternalFormat(feature_info_.get(),
                                                     internal_format);
  vendorBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0);
  GLenum adjusted_format = gles2::TextureManager::AdjustTexFormat(
      feature_info_.get(), internal_format);
  vendorTexImage2D(dest_target, level, adjusted_internal_format, width, height, 0,
               adjusted_format, luma_type, nullptr);
  DoCopyTexSubImageToLUMACompatibilityTexture(
      decoder, dest_texture, dest_texture_target, dest_target, luma_format,
      luma_type, level, 0, 0, 0, x, y, width, height, source_framebuffer,
      source_framebuffer_internal_format);
}

void CopyTexImageResourceManager::DoCopyTexSubImageToLUMACompatibilityTexture(
    const gles2::GLES2Decoder* decoder,
    GLuint dest_texture,
    GLenum dest_texture_target,
    GLenum dest_target,
    GLenum luma_format,
    GLenum luma_type,
    GLint level,
    GLint xoffset,
    GLint yoffset,
    GLint zoffset,
    GLint x,
    GLint y,
    GLsizei width,
    GLsizei height,
    GLuint source_framebuffer,
    GLenum source_framebuffer_internal_format) {
  DCHECK(initialized_);

  // Copy the framebuffer to the first scratch texture
  // TODO(geofflang): This could be optimized further by detecting if the source
  // framebuffer is copying from a texture and sample directly from that texture
  // instead of doing an extra copy

  vendorBindFramebufferEXT(GL_FRAMEBUFFER, source_framebuffer);
  vendorActiveTexture(GL_TEXTURE0);
  vendorBindTexture(GL_TEXTURE_2D, scratch_textures_[0]);
  vendorCopyTexImage2D(GL_TEXTURE_2D, 0, source_framebuffer_internal_format, x, y,
                   width, height, 0);

  // Set the swizzle of the scratch texture so that the channels sample into the
  // correct emulated LUMA channels.
  GLint swizzle[4] = {
      (luma_format == GL_ALPHA) ? GL_ALPHA : GL_RED,
      (luma_format == GL_LUMINANCE_ALPHA) ? GL_ALPHA : GL_ZERO, GL_ZERO,
      GL_ZERO,
  };
  vendorTexParameteriv(GL_TEXTURE_2D, GL_TEXTURE_SWIZZLE_RGBA, swizzle);

  // Make a temporary framebuffer using the second scratch texture to render the
  // swizzled result to.
  // TODO(geofflang): Could be optimized more by rendering directly to the
  // destination texture but this isn't always possible because the destination
  // may be an incomplete cube map
  vendorBindBuffer(GL_PIXEL_UNPACK_BUFFER, 0);
  GLenum compatability_format =
      gles2::TextureManager::AdjustTexFormat(feature_info_.get(), luma_format);
  vendorBindTexture(GL_TEXTURE_2D, scratch_textures_[1]);
  vendorTexImage2D(GL_TEXTURE_2D, 0, compatability_format, width, height, 0,
               compatability_format, luma_type, nullptr);

  vendorBindFramebufferEXT(GL_FRAMEBUFFER, scratch_fbo_);
  vendorFramebufferTexture2DEXT(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_TEXTURE_2D,
                            scratch_textures_[1], 0);

  // Render to the destination texture, sampling from the scratch texture
  vendorUseProgram(blit_program_);
  vendorViewport(0, 0, width, height);
  vendorDisable(GL_SCISSOR_TEST);
  vendorDisable(GL_DEPTH_TEST);
  vendorDisable(GL_STENCIL_TEST);
  vendorDisable(GL_CULL_FACE);
  vendorColorMask(GL_TRUE, GL_TRUE, GL_TRUE, GL_TRUE);
  vendorDepthMask(GL_FALSE);
  vendorDisable(GL_BLEND);
  vendorDisable(GL_DITHER);
  if (decoder->GetFeatureInfo()->feature_flags().ext_window_rectangles) {
    vendorWindowRectanglesEXT(GL_EXCLUSIVE_EXT, 0, nullptr);
  }

  vendorBindTexture(GL_TEXTURE_2D, scratch_textures_[0]);
  vendorBindVertexArrayOES(vao_);

  vendorDrawArrays(GL_TRIANGLES, 0, 6);

  // Finally, copy the swizzled texture to the destination texture
  vendorBindTexture(dest_texture_target, dest_texture);
  if (dest_target == GL_TEXTURE_3D || dest_target == GL_TEXTURE_2D_ARRAY) {
    vendorCopyTexSubImage3D(dest_target, level, xoffset, yoffset, zoffset,
                        0, 0, width, height);
  } else {
    vendorCopyTexSubImage2D(dest_target, level, xoffset, yoffset,
                        0, 0, width, height);
  }

  // Restore state
  decoder->RestoreAllAttributes();
  decoder->RestoreTextureUnitBindings(0);
  decoder->RestoreActiveTexture();
  decoder->RestoreProgramBindings();
  decoder->RestoreBufferBindings();
  decoder->RestoreFramebufferBindings();
  decoder->RestoreGlobalState();
}

// static
bool CopyTexImageResourceManager::CopyTexImageRequiresBlit(
    const gles2::FeatureInfo* feature_info,
    GLenum dest_texture_format) {
  if (feature_info->gl_version_info().is_desktop_core_profile) {
    switch (dest_texture_format) {
      case GL_LUMINANCE:
      case GL_ALPHA:
      case GL_LUMINANCE_ALPHA:
        return true;
    }
  }

  return false;
}

}  // namespace gles2
}  // namespace gpu
