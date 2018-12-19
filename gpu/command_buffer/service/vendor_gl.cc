// Copyright (c) 2018 University of California, Irvine. All rights reserved.
// Authors: Zhihao Yao, Ardalan Amiri Sani
// Based on gl_bindings_autogen_gl.cc by The Chromium Authors.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <string>

#include "gpu/command_buffer/service/milko_prints.h"
#include "gpu/command_buffer/service/vendor_gl.h"
#include "ui/gl/gl_enums.h"
#include "ui/gl/gl_implementation.h"
#include "ui/gl/gl_version_info.h"

namespace gl {

const base::FilePath::CharType vendor_gles_path[] = 
  FILE_PATH_LITERAL("/vendor/lib64/egl/libGLESv2_adreno.so");
const base::NativeLibrary vendor_gles_lib = 
  LoadLibraryAndPrintError(vendor_gles_path);

GLFunctionPointerType VendorGL::GetVendorGLProcAddress(const char* name) {

  GLFunctionPointerType proc = reinterpret_cast<GLFunctionPointerType>(
      base::GetFunctionPointerFromNativeLibrary(vendor_gles_lib, name));
  if (proc)
  {
    return proc;
  }

  return NULL;
}

void VendorGL::InitializeStaticBindings() {
  char* this_bytes = reinterpret_cast<char*>(this);
  DCHECK(this_bytes[0] == 0);
  DCHECK(memcmp(this_bytes, this_bytes + 1, sizeof(*this) - 1) == 0);

  fn.glActiveTextureFn = reinterpret_cast<glActiveTextureProc>(
      GetVendorGLProcAddress("glActiveTexture"));
  fn.glAttachShaderFn =
      reinterpret_cast<glAttachShaderProc>(GetVendorGLProcAddress("glAttachShader"));
  fn.glBindAttribLocationFn = reinterpret_cast<glBindAttribLocationProc>(
      GetVendorGLProcAddress("glBindAttribLocation"));
  fn.glBindBufferFn =
      reinterpret_cast<glBindBufferProc>(GetVendorGLProcAddress("glBindBuffer"));
  fn.glBindTextureFn =
      reinterpret_cast<glBindTextureProc>(GetVendorGLProcAddress("glBindTexture"));
  fn.glBlendColorFn =
      reinterpret_cast<glBlendColorProc>(GetVendorGLProcAddress("glBlendColor"));
  fn.glBlendEquationFn = reinterpret_cast<glBlendEquationProc>(
      GetVendorGLProcAddress("glBlendEquation"));
  fn.glBlendEquationSeparateFn = reinterpret_cast<glBlendEquationSeparateProc>(
      GetVendorGLProcAddress("glBlendEquationSeparate"));
  fn.glBlendFuncFn =
      reinterpret_cast<glBlendFuncProc>(GetVendorGLProcAddress("glBlendFunc"));
  fn.glBlendFuncSeparateFn = reinterpret_cast<glBlendFuncSeparateProc>(
      GetVendorGLProcAddress("glBlendFuncSeparate"));
  fn.glBufferDataFn =
      reinterpret_cast<glBufferDataProc>(GetVendorGLProcAddress("glBufferData"));
  fn.glBufferSubDataFn = reinterpret_cast<glBufferSubDataProc>(
      GetVendorGLProcAddress("glBufferSubData"));
  fn.glClearFn = reinterpret_cast<glClearProc>(GetVendorGLProcAddress("glClear"));
  fn.glClearColorFn =
      reinterpret_cast<glClearColorProc>(GetVendorGLProcAddress("glClearColor"));
  fn.glClearDepthFn =
      reinterpret_cast<glClearDepthProc>(GetVendorGLProcAddress("glClearDepth"));
  fn.glClearStencilFn =
      reinterpret_cast<glClearStencilProc>(GetVendorGLProcAddress("glClearStencil"));
  fn.glColorMaskFn =
      reinterpret_cast<glColorMaskProc>(GetVendorGLProcAddress("glColorMask"));
  fn.glCompileShaderFn = reinterpret_cast<glCompileShaderProc>(
      GetVendorGLProcAddress("glCompileShader"));
  fn.glCompressedTexImage2DFn = reinterpret_cast<glCompressedTexImage2DProc>(
      GetVendorGLProcAddress("glCompressedTexImage2D"));
  fn.glCompressedTexSubImage2DFn =
      reinterpret_cast<glCompressedTexSubImage2DProc>(
          GetVendorGLProcAddress("glCompressedTexSubImage2D"));
  fn.glCopyTexImage2DFn = reinterpret_cast<glCopyTexImage2DProc>(
      GetVendorGLProcAddress("glCopyTexImage2D"));
  fn.glCopyTexSubImage2DFn = reinterpret_cast<glCopyTexSubImage2DProc>(
      GetVendorGLProcAddress("glCopyTexSubImage2D"));
  fn.glCreateProgramFn = reinterpret_cast<glCreateProgramProc>(
      GetVendorGLProcAddress("glCreateProgram"));
  fn.glCreateShaderFn =
      reinterpret_cast<glCreateShaderProc>(GetVendorGLProcAddress("glCreateShader"));
  fn.glCullFaceFn =
      reinterpret_cast<glCullFaceProc>(GetVendorGLProcAddress("glCullFace"));
  fn.glDeleteBuffersARBFn = reinterpret_cast<glDeleteBuffersARBProc>(
      GetVendorGLProcAddress("glDeleteBuffers"));
  fn.glDeleteProgramFn = reinterpret_cast<glDeleteProgramProc>(
      GetVendorGLProcAddress("glDeleteProgram"));
  fn.glDeleteShaderFn =
      reinterpret_cast<glDeleteShaderProc>(GetVendorGLProcAddress("glDeleteShader"));
  fn.glDeleteTexturesFn = reinterpret_cast<glDeleteTexturesProc>(
      GetVendorGLProcAddress("glDeleteTextures"));
  fn.glDepthFuncFn =
      reinterpret_cast<glDepthFuncProc>(GetVendorGLProcAddress("glDepthFunc"));
  fn.glDepthMaskFn =
      reinterpret_cast<glDepthMaskProc>(GetVendorGLProcAddress("glDepthMask"));
  fn.glDepthRangeFn =
      reinterpret_cast<glDepthRangeProc>(GetVendorGLProcAddress("glDepthRange"));
  fn.glDetachShaderFn =
      reinterpret_cast<glDetachShaderProc>(GetVendorGLProcAddress("glDetachShader"));
  fn.glDisableFn =
      reinterpret_cast<glDisableProc>(GetVendorGLProcAddress("glDisable"));
  fn.glDisableVertexAttribArrayFn =
      reinterpret_cast<glDisableVertexAttribArrayProc>(
          GetVendorGLProcAddress("glDisableVertexAttribArray"));
  fn.glDrawArraysFn =
      reinterpret_cast<glDrawArraysProc>(GetVendorGLProcAddress("glDrawArrays"));
  fn.glDrawElementsFn =
      reinterpret_cast<glDrawElementsProc>(GetVendorGLProcAddress("glDrawElements"));
  fn.glEnableFn = reinterpret_cast<glEnableProc>(GetVendorGLProcAddress("glEnable"));
  fn.glEnableVertexAttribArrayFn =
      reinterpret_cast<glEnableVertexAttribArrayProc>(
          GetVendorGLProcAddress("glEnableVertexAttribArray"));
  fn.glFinishFn = reinterpret_cast<glFinishProc>(GetVendorGLProcAddress("glFinish"));
  fn.glFlushFn = reinterpret_cast<glFlushProc>(GetVendorGLProcAddress("glFlush"));
  fn.glFrontFaceFn =
      reinterpret_cast<glFrontFaceProc>(GetVendorGLProcAddress("glFrontFace"));
  fn.glGenBuffersARBFn =
      reinterpret_cast<glGenBuffersARBProc>(GetVendorGLProcAddress("glGenBuffers"));
  fn.glGenTexturesFn =
      reinterpret_cast<glGenTexturesProc>(GetVendorGLProcAddress("glGenTextures"));
  fn.glGetActiveAttribFn = reinterpret_cast<glGetActiveAttribProc>(
      GetVendorGLProcAddress("glGetActiveAttrib"));
  fn.glGetActiveUniformFn = reinterpret_cast<glGetActiveUniformProc>(
      GetVendorGLProcAddress("glGetActiveUniform"));
  fn.glGetAttachedShadersFn = reinterpret_cast<glGetAttachedShadersProc>(
      GetVendorGLProcAddress("glGetAttachedShaders"));
  fn.glGetAttribLocationFn = reinterpret_cast<glGetAttribLocationProc>(
      GetVendorGLProcAddress("glGetAttribLocation"));
  fn.glGetBooleanvFn =
      reinterpret_cast<glGetBooleanvProc>(GetVendorGLProcAddress("glGetBooleanv"));
  fn.glGetBufferParameterivFn = reinterpret_cast<glGetBufferParameterivProc>(
      GetVendorGLProcAddress("glGetBufferParameteriv"));
  fn.glGetErrorFn =
      reinterpret_cast<glGetErrorProc>(GetVendorGLProcAddress("glGetError"));
  fn.glGetFloatvFn =
      reinterpret_cast<glGetFloatvProc>(GetVendorGLProcAddress("glGetFloatv"));
  fn.glGetIntegervFn =
      reinterpret_cast<glGetIntegervProc>(GetVendorGLProcAddress("glGetIntegerv"));
  fn.glGetProgramInfoLogFn = reinterpret_cast<glGetProgramInfoLogProc>(
      GetVendorGLProcAddress("glGetProgramInfoLog"));
  fn.glGetProgramivFn =
      reinterpret_cast<glGetProgramivProc>(GetVendorGLProcAddress("glGetProgramiv"));
  fn.glGetShaderInfoLogFn = reinterpret_cast<glGetShaderInfoLogProc>(
      GetVendorGLProcAddress("glGetShaderInfoLog"));
  fn.glGetShaderivFn =
      reinterpret_cast<glGetShaderivProc>(GetVendorGLProcAddress("glGetShaderiv"));
  fn.glGetShaderSourceFn = reinterpret_cast<glGetShaderSourceProc>(
      GetVendorGLProcAddress("glGetShaderSource"));
  fn.glGetStringFn =
      reinterpret_cast<glGetStringProc>(GetVendorGLProcAddress("glGetString"));
  fn.glGetStringiFn =
      reinterpret_cast<glGetStringiProc>(GetVendorGLProcAddress("glGetStringi"));
  fn.glGetTexParameterfvFn = reinterpret_cast<glGetTexParameterfvProc>(
      GetVendorGLProcAddress("glGetTexParameterfv"));
  fn.glGetTexParameterivFn = reinterpret_cast<glGetTexParameterivProc>(
      GetVendorGLProcAddress("glGetTexParameteriv"));
  fn.glGetUniformfvFn =
      reinterpret_cast<glGetUniformfvProc>(GetVendorGLProcAddress("glGetUniformfv"));
  fn.glGetUniformivFn =
      reinterpret_cast<glGetUniformivProc>(GetVendorGLProcAddress("glGetUniformiv"));
  fn.glGetUniformLocationFn = reinterpret_cast<glGetUniformLocationProc>(
      GetVendorGLProcAddress("glGetUniformLocation"));
  fn.glGetVertexAttribfvFn = reinterpret_cast<glGetVertexAttribfvProc>(
      GetVendorGLProcAddress("glGetVertexAttribfv"));
  fn.glGetVertexAttribivFn = reinterpret_cast<glGetVertexAttribivProc>(
      GetVendorGLProcAddress("glGetVertexAttribiv"));
  fn.glGetVertexAttribPointervFn =
      reinterpret_cast<glGetVertexAttribPointervProc>(
          GetVendorGLProcAddress("glGetVertexAttribPointerv"));
  fn.glHintFn = reinterpret_cast<glHintProc>(GetVendorGLProcAddress("glHint"));
  fn.glIsBufferFn =
      reinterpret_cast<glIsBufferProc>(GetVendorGLProcAddress("glIsBuffer"));
  fn.glIsEnabledFn =
      reinterpret_cast<glIsEnabledProc>(GetVendorGLProcAddress("glIsEnabled"));
  fn.glIsProgramFn =
      reinterpret_cast<glIsProgramProc>(GetVendorGLProcAddress("glIsProgram"));
  fn.glIsShaderFn =
      reinterpret_cast<glIsShaderProc>(GetVendorGLProcAddress("glIsShader"));
  fn.glIsTextureFn =
      reinterpret_cast<glIsTextureProc>(GetVendorGLProcAddress("glIsTexture"));
  fn.glLineWidthFn =
      reinterpret_cast<glLineWidthProc>(GetVendorGLProcAddress("glLineWidth"));
  fn.glLinkProgramFn =
      reinterpret_cast<glLinkProgramProc>(GetVendorGLProcAddress("glLinkProgram"));
  fn.glPixelStoreiFn =
      reinterpret_cast<glPixelStoreiProc>(GetVendorGLProcAddress("glPixelStorei"));
  fn.glPolygonOffsetFn = reinterpret_cast<glPolygonOffsetProc>(
      GetVendorGLProcAddress("glPolygonOffset"));
  fn.glReadPixelsFn =
      reinterpret_cast<glReadPixelsProc>(GetVendorGLProcAddress("glReadPixels"));
  fn.glSampleCoverageFn = reinterpret_cast<glSampleCoverageProc>(
      GetVendorGLProcAddress("glSampleCoverage"));
  fn.glScissorFn =
      reinterpret_cast<glScissorProc>(GetVendorGLProcAddress("glScissor"));
  fn.glShaderSourceFn =
      reinterpret_cast<glShaderSourceProc>(GetVendorGLProcAddress("glShaderSource"));
  fn.glStencilFuncFn =
      reinterpret_cast<glStencilFuncProc>(GetVendorGLProcAddress("glStencilFunc"));
  fn.glStencilFuncSeparateFn = reinterpret_cast<glStencilFuncSeparateProc>(
      GetVendorGLProcAddress("glStencilFuncSeparate"));
  fn.glStencilMaskFn =
      reinterpret_cast<glStencilMaskProc>(GetVendorGLProcAddress("glStencilMask"));
  fn.glStencilMaskSeparateFn = reinterpret_cast<glStencilMaskSeparateProc>(
      GetVendorGLProcAddress("glStencilMaskSeparate"));
  fn.glStencilOpFn =
      reinterpret_cast<glStencilOpProc>(GetVendorGLProcAddress("glStencilOp"));
  fn.glStencilOpSeparateFn = reinterpret_cast<glStencilOpSeparateProc>(
      GetVendorGLProcAddress("glStencilOpSeparate"));
  fn.glTexImage2DFn =
      reinterpret_cast<glTexImage2DProc>(GetVendorGLProcAddress("glTexImage2D"));
  fn.glTexParameterfFn = reinterpret_cast<glTexParameterfProc>(
      GetVendorGLProcAddress("glTexParameterf"));
  fn.glTexParameterfvFn = reinterpret_cast<glTexParameterfvProc>(
      GetVendorGLProcAddress("glTexParameterfv"));
  fn.glTexParameteriFn = reinterpret_cast<glTexParameteriProc>(
      GetVendorGLProcAddress("glTexParameteri"));
  fn.glTexParameterivFn = reinterpret_cast<glTexParameterivProc>(
      GetVendorGLProcAddress("glTexParameteriv"));
  fn.glTexSubImage2DFn = reinterpret_cast<glTexSubImage2DProc>(
      GetVendorGLProcAddress("glTexSubImage2D"));
  fn.glUniform1fFn =
      reinterpret_cast<glUniform1fProc>(GetVendorGLProcAddress("glUniform1f"));
  fn.glUniform1fvFn =
      reinterpret_cast<glUniform1fvProc>(GetVendorGLProcAddress("glUniform1fv"));
  fn.glUniform1iFn =
      reinterpret_cast<glUniform1iProc>(GetVendorGLProcAddress("glUniform1i"));
  fn.glUniform1ivFn =
      reinterpret_cast<glUniform1ivProc>(GetVendorGLProcAddress("glUniform1iv"));
  fn.glUniform2fFn =
      reinterpret_cast<glUniform2fProc>(GetVendorGLProcAddress("glUniform2f"));
  fn.glUniform2fvFn =
      reinterpret_cast<glUniform2fvProc>(GetVendorGLProcAddress("glUniform2fv"));
  fn.glUniform2iFn =
      reinterpret_cast<glUniform2iProc>(GetVendorGLProcAddress("glUniform2i"));
  fn.glUniform2ivFn =
      reinterpret_cast<glUniform2ivProc>(GetVendorGLProcAddress("glUniform2iv"));
  fn.glUniform3fFn =
      reinterpret_cast<glUniform3fProc>(GetVendorGLProcAddress("glUniform3f"));
  fn.glUniform3fvFn =
      reinterpret_cast<glUniform3fvProc>(GetVendorGLProcAddress("glUniform3fv"));
  fn.glUniform3iFn =
      reinterpret_cast<glUniform3iProc>(GetVendorGLProcAddress("glUniform3i"));
  fn.glUniform3ivFn =
      reinterpret_cast<glUniform3ivProc>(GetVendorGLProcAddress("glUniform3iv"));
  fn.glUniform4fFn =
      reinterpret_cast<glUniform4fProc>(GetVendorGLProcAddress("glUniform4f"));
  fn.glUniform4fvFn =
      reinterpret_cast<glUniform4fvProc>(GetVendorGLProcAddress("glUniform4fv"));
  fn.glUniform4iFn =
      reinterpret_cast<glUniform4iProc>(GetVendorGLProcAddress("glUniform4i"));
  fn.glUniform4ivFn =
      reinterpret_cast<glUniform4ivProc>(GetVendorGLProcAddress("glUniform4iv"));
  fn.glUniformMatrix2fvFn = reinterpret_cast<glUniformMatrix2fvProc>(
      GetVendorGLProcAddress("glUniformMatrix2fv"));
  fn.glUniformMatrix3fvFn = reinterpret_cast<glUniformMatrix3fvProc>(
      GetVendorGLProcAddress("glUniformMatrix3fv"));
  fn.glUniformMatrix4fvFn = reinterpret_cast<glUniformMatrix4fvProc>(
      GetVendorGLProcAddress("glUniformMatrix4fv"));
  fn.glUseProgramFn =
      reinterpret_cast<glUseProgramProc>(GetVendorGLProcAddress("glUseProgram"));
  fn.glValidateProgramFn = reinterpret_cast<glValidateProgramProc>(
      GetVendorGLProcAddress("glValidateProgram"));
  fn.glVertexAttrib1fFn = reinterpret_cast<glVertexAttrib1fProc>(
      GetVendorGLProcAddress("glVertexAttrib1f"));
  fn.glVertexAttrib1fvFn = reinterpret_cast<glVertexAttrib1fvProc>(
      GetVendorGLProcAddress("glVertexAttrib1fv"));
  fn.glVertexAttrib2fFn = reinterpret_cast<glVertexAttrib2fProc>(
      GetVendorGLProcAddress("glVertexAttrib2f"));
  fn.glVertexAttrib2fvFn = reinterpret_cast<glVertexAttrib2fvProc>(
      GetVendorGLProcAddress("glVertexAttrib2fv"));
  fn.glVertexAttrib3fFn = reinterpret_cast<glVertexAttrib3fProc>(
      GetVendorGLProcAddress("glVertexAttrib3f"));
  fn.glVertexAttrib3fvFn = reinterpret_cast<glVertexAttrib3fvProc>(
      GetVendorGLProcAddress("glVertexAttrib3fv"));
  fn.glVertexAttrib4fFn = reinterpret_cast<glVertexAttrib4fProc>(
      GetVendorGLProcAddress("glVertexAttrib4f"));
  fn.glVertexAttrib4fvFn = reinterpret_cast<glVertexAttrib4fvProc>(
      GetVendorGLProcAddress("glVertexAttrib4fv"));
  fn.glVertexAttribPointerFn = reinterpret_cast<glVertexAttribPointerProc>(
      GetVendorGLProcAddress("glVertexAttribPointer"));
  fn.glViewportFn =
      reinterpret_cast<glViewportProc>(GetVendorGLProcAddress("glViewport"));
}

void VendorGL::InitializeDynamicBindings(const GLVersionInfo* ver,
                                         const ExtensionSet& extensions) {
  ext.b_GL_ANGLE_framebuffer_blit =
      HasExtension(extensions, "GL_ANGLE_framebuffer_blit");
  ext.b_GL_ANGLE_framebuffer_multisample =
      HasExtension(extensions, "GL_ANGLE_framebuffer_multisample");
  ext.b_GL_ANGLE_instanced_arrays =
      HasExtension(extensions, "GL_ANGLE_instanced_arrays");
  ext.b_GL_ANGLE_request_extension =
      HasExtension(extensions, "GL_ANGLE_request_extension");
  ext.b_GL_ANGLE_robust_client_memory =
      HasExtension(extensions, "GL_ANGLE_robust_client_memory");
  ext.b_GL_ANGLE_translated_shader_source =
      HasExtension(extensions, "GL_ANGLE_translated_shader_source");
  ext.b_GL_APPLE_fence = HasExtension(extensions, "GL_APPLE_fence");
  ext.b_GL_APPLE_vertex_array_object =
      HasExtension(extensions, "GL_APPLE_vertex_array_object");
  ext.b_GL_ARB_blend_func_extended =
      HasExtension(extensions, "GL_ARB_blend_func_extended");
  ext.b_GL_ARB_draw_buffers = HasExtension(extensions, "GL_ARB_draw_buffers");
  ext.b_GL_ARB_draw_instanced =
      HasExtension(extensions, "GL_ARB_draw_instanced");
  ext.b_GL_ARB_framebuffer_object =
      HasExtension(extensions, "GL_ARB_framebuffer_object");
  ext.b_GL_ARB_get_program_binary =
      HasExtension(extensions, "GL_ARB_get_program_binary");
  ext.b_GL_ARB_instanced_arrays =
      HasExtension(extensions, "GL_ARB_instanced_arrays");
  ext.b_GL_ARB_internalformat_query =
      HasExtension(extensions, "GL_ARB_internalformat_query");
  ext.b_GL_ARB_map_buffer_range =
      HasExtension(extensions, "GL_ARB_map_buffer_range");
  ext.b_GL_ARB_occlusion_query =
      HasExtension(extensions, "GL_ARB_occlusion_query");
  ext.b_GL_ARB_program_interface_query =
      HasExtension(extensions, "GL_ARB_program_interface_query");
  ext.b_GL_ARB_robustness = HasExtension(extensions, "GL_ARB_robustness");
  ext.b_GL_ARB_sampler_objects =
      HasExtension(extensions, "GL_ARB_sampler_objects");
  ext.b_GL_ARB_shader_image_load_store =
      HasExtension(extensions, "GL_ARB_shader_image_load_store");
  ext.b_GL_ARB_sync = HasExtension(extensions, "GL_ARB_sync");
  ext.b_GL_ARB_texture_multisample =
      HasExtension(extensions, "GL_ARB_texture_multisample");
  ext.b_GL_ARB_texture_storage =
      HasExtension(extensions, "GL_ARB_texture_storage");
  ext.b_GL_ARB_timer_query = HasExtension(extensions, "GL_ARB_timer_query");
  ext.b_GL_ARB_transform_feedback2 =
      HasExtension(extensions, "GL_ARB_transform_feedback2");
  ext.b_GL_ARB_vertex_array_object =
      HasExtension(extensions, "GL_ARB_vertex_array_object");
  ext.b_GL_CHROMIUM_bind_uniform_location =
      HasExtension(extensions, "GL_CHROMIUM_bind_uniform_location");
  ext.b_GL_CHROMIUM_compressed_copy_texture =
      HasExtension(extensions, "GL_CHROMIUM_compressed_copy_texture");
  ext.b_GL_CHROMIUM_copy_compressed_texture =
      HasExtension(extensions, "GL_CHROMIUM_copy_compressed_texture");
  ext.b_GL_CHROMIUM_copy_texture =
      HasExtension(extensions, "GL_CHROMIUM_copy_texture");
  ext.b_GL_CHROMIUM_gles_depth_binding_hack =
      HasExtension(extensions, "GL_CHROMIUM_gles_depth_binding_hack");
  ext.b_GL_CHROMIUM_glgetstringi_hack =
      HasExtension(extensions, "GL_CHROMIUM_glgetstringi_hack");
  ext.b_GL_EXT_blend_func_extended =
      HasExtension(extensions, "GL_EXT_blend_func_extended");
  ext.b_GL_EXT_debug_marker = HasExtension(extensions, "GL_EXT_debug_marker");
  ext.b_GL_EXT_direct_state_access =
      HasExtension(extensions, "GL_EXT_direct_state_access");
  ext.b_GL_EXT_discard_framebuffer =
      HasExtension(extensions, "GL_EXT_discard_framebuffer");
  ext.b_GL_EXT_disjoint_timer_query =
      HasExtension(extensions, "GL_EXT_disjoint_timer_query");
  ext.b_GL_EXT_draw_buffers = HasExtension(extensions, "GL_EXT_draw_buffers");
  ext.b_GL_EXT_framebuffer_blit =
      HasExtension(extensions, "GL_EXT_framebuffer_blit");
  ext.b_GL_EXT_framebuffer_multisample =
      HasExtension(extensions, "GL_EXT_framebuffer_multisample");
  ext.b_GL_EXT_framebuffer_object =
      HasExtension(extensions, "GL_EXT_framebuffer_object");
  ext.b_GL_EXT_gpu_shader4 = HasExtension(extensions, "GL_EXT_gpu_shader4");
  ext.b_GL_EXT_instanced_arrays =
      HasExtension(extensions, "GL_EXT_instanced_arrays");
  ext.b_GL_EXT_map_buffer_range =
      HasExtension(extensions, "GL_EXT_map_buffer_range");
  ext.b_GL_EXT_multisampled_render_to_texture =
      HasExtension(extensions, "GL_EXT_multisampled_render_to_texture");
  ext.b_GL_EXT_occlusion_query_boolean =
      HasExtension(extensions, "GL_EXT_occlusion_query_boolean");
  ext.b_GL_EXT_robustness = HasExtension(extensions, "GL_EXT_robustness");
  ext.b_GL_EXT_shader_image_load_store =
      HasExtension(extensions, "GL_EXT_shader_image_load_store");
  ext.b_GL_EXT_texture_buffer =
      HasExtension(extensions, "GL_EXT_texture_buffer");
  ext.b_GL_EXT_texture_buffer_object =
      HasExtension(extensions, "GL_EXT_texture_buffer_object");
  ext.b_GL_EXT_texture_storage =
      HasExtension(extensions, "GL_EXT_texture_storage");
  ext.b_GL_EXT_timer_query = HasExtension(extensions, "GL_EXT_timer_query");
  ext.b_GL_EXT_transform_feedback =
      HasExtension(extensions, "GL_EXT_transform_feedback");
  ext.b_GL_EXT_unpack_subimage =
      HasExtension(extensions, "GL_EXT_unpack_subimage");
  ext.b_GL_EXT_window_rectangles =
      HasExtension(extensions, "GL_EXT_window_rectangles");
  ext.b_GL_IMG_multisampled_render_to_texture =
      HasExtension(extensions, "GL_IMG_multisampled_render_to_texture");
  ext.b_GL_INTEL_framebuffer_CMAA =
      HasExtension(extensions, "GL_INTEL_framebuffer_CMAA");
  ext.b_GL_KHR_blend_equation_advanced =
      HasExtension(extensions, "GL_KHR_blend_equation_advanced");
  ext.b_GL_KHR_debug = HasExtension(extensions, "GL_KHR_debug");
  ext.b_GL_KHR_robustness = HasExtension(extensions, "GL_KHR_robustness");
  ext.b_GL_NV_blend_equation_advanced =
      HasExtension(extensions, "GL_NV_blend_equation_advanced");
  ext.b_GL_NV_fence = HasExtension(extensions, "GL_NV_fence");
  ext.b_GL_NV_framebuffer_mixed_samples =
      HasExtension(extensions, "GL_NV_framebuffer_mixed_samples");
  ext.b_GL_NV_path_rendering = HasExtension(extensions, "GL_NV_path_rendering");
  ext.b_GL_OES_EGL_image = HasExtension(extensions, "GL_OES_EGL_image");
  ext.b_GL_OES_get_program_binary =
      HasExtension(extensions, "GL_OES_get_program_binary");
  ext.b_GL_OES_mapbuffer = HasExtension(extensions, "GL_OES_mapbuffer");
  ext.b_GL_OES_texture_buffer =
      HasExtension(extensions, "GL_OES_texture_buffer");
  ext.b_GL_OES_vertex_array_object =
      HasExtension(extensions, "GL_OES_vertex_array_object");

  if (ext.b_GL_INTEL_framebuffer_CMAA) {
    fn.glApplyFramebufferAttachmentCMAAINTELFn =
        reinterpret_cast<glApplyFramebufferAttachmentCMAAINTELProc>(
            GetVendorGLProcAddress("glApplyFramebufferAttachmentCMAAINTEL"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glBeginQueryFn =
        reinterpret_cast<glBeginQueryProc>(GetVendorGLProcAddress("glBeginQuery"));
  } else if (ext.b_GL_ARB_occlusion_query) {
    fn.glBeginQueryFn =
        reinterpret_cast<glBeginQueryProc>(GetVendorGLProcAddress("glBeginQueryARB"));
  } else if (ext.b_GL_EXT_disjoint_timer_query ||
             ext.b_GL_EXT_occlusion_query_boolean) {
    fn.glBeginQueryFn =
        reinterpret_cast<glBeginQueryProc>(GetVendorGLProcAddress("glBeginQueryEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glBeginTransformFeedbackFn =
        reinterpret_cast<glBeginTransformFeedbackProc>(
            GetVendorGLProcAddress("glBeginTransformFeedback"));
  } else if (ext.b_GL_EXT_transform_feedback) {
    fn.glBeginTransformFeedbackFn =
        reinterpret_cast<glBeginTransformFeedbackProc>(
            GetVendorGLProcAddress("glBeginTransformFeedbackEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glBindBufferBaseFn = reinterpret_cast<glBindBufferBaseProc>(
        GetVendorGLProcAddress("glBindBufferBase"));
  } else if (ext.b_GL_EXT_transform_feedback) {
    fn.glBindBufferBaseFn = reinterpret_cast<glBindBufferBaseProc>(
        GetVendorGLProcAddress("glBindBufferBaseEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glBindBufferRangeFn = reinterpret_cast<glBindBufferRangeProc>(
        GetVendorGLProcAddress("glBindBufferRange"));
  } else if (ext.b_GL_EXT_transform_feedback) {
    fn.glBindBufferRangeFn = reinterpret_cast<glBindBufferRangeProc>(
        GetVendorGLProcAddress("glBindBufferRangeEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ext.b_GL_ARB_blend_func_extended) {
    fn.glBindFragDataLocationFn = reinterpret_cast<glBindFragDataLocationProc>(
        GetVendorGLProcAddress("glBindFragDataLocation"));
  } else if (ext.b_GL_EXT_gpu_shader4 || ext.b_GL_EXT_blend_func_extended) {
    fn.glBindFragDataLocationFn = reinterpret_cast<glBindFragDataLocationProc>(
        GetVendorGLProcAddress("glBindFragDataLocationEXT"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ext.b_GL_ARB_blend_func_extended) {
    fn.glBindFragDataLocationIndexedFn =
        reinterpret_cast<glBindFragDataLocationIndexedProc>(
            GetVendorGLProcAddress("glBindFragDataLocationIndexed"));
  } else if (ext.b_GL_EXT_blend_func_extended) {
    fn.glBindFragDataLocationIndexedFn =
        reinterpret_cast<glBindFragDataLocationIndexedProc>(
            GetVendorGLProcAddress("glBindFragDataLocationIndexedEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glBindFramebufferEXTFn = reinterpret_cast<glBindFramebufferEXTProc>(
        GetVendorGLProcAddress("glBindFramebuffer"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glBindFramebufferEXTFn = reinterpret_cast<glBindFramebufferEXTProc>(
        GetVendorGLProcAddress("glBindFramebufferEXT"));
  }

  if (ver->IsAtLeastGL(4u, 2u) || ver->IsAtLeastGLES(3u, 1u) ||
      ext.b_GL_ARB_shader_image_load_store) {
    fn.glBindImageTextureEXTFn = reinterpret_cast<glBindImageTextureEXTProc>(
        GetVendorGLProcAddress("glBindImageTexture"));
  } else if (ext.b_GL_EXT_shader_image_load_store) {
    fn.glBindImageTextureEXTFn = reinterpret_cast<glBindImageTextureEXTProc>(
        GetVendorGLProcAddress("glBindImageTextureEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glBindRenderbufferEXTFn = reinterpret_cast<glBindRenderbufferEXTProc>(
        GetVendorGLProcAddress("glBindRenderbuffer"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glBindRenderbufferEXTFn = reinterpret_cast<glBindRenderbufferEXTProc>(
        GetVendorGLProcAddress("glBindRenderbufferEXT"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glBindSamplerFn =
        reinterpret_cast<glBindSamplerProc>(GetVendorGLProcAddress("glBindSampler"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(4u, 0u) ||
      ext.b_GL_ARB_transform_feedback2) {
    fn.glBindTransformFeedbackFn =
        reinterpret_cast<glBindTransformFeedbackProc>(
            GetVendorGLProcAddress("glBindTransformFeedback"));
  }

  if (ext.b_GL_CHROMIUM_bind_uniform_location) {
    fn.glBindUniformLocationCHROMIUMFn =
        reinterpret_cast<glBindUniformLocationCHROMIUMProc>(
            GetVendorGLProcAddress("glBindUniformLocationCHROMIUM"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_vertex_array_object) {
    fn.glBindVertexArrayOESFn = reinterpret_cast<glBindVertexArrayOESProc>(
        GetVendorGLProcAddress("glBindVertexArray"));
  } else if (ext.b_GL_OES_vertex_array_object) {
    fn.glBindVertexArrayOESFn = reinterpret_cast<glBindVertexArrayOESProc>(
        GetVendorGLProcAddress("glBindVertexArrayOES"));
  } else if (ext.b_GL_APPLE_vertex_array_object) {
    fn.glBindVertexArrayOESFn = reinterpret_cast<glBindVertexArrayOESProc>(
        GetVendorGLProcAddress("glBindVertexArrayAPPLE"));
  }

  if (ext.b_GL_NV_blend_equation_advanced) {
    fn.glBlendBarrierKHRFn = reinterpret_cast<glBlendBarrierKHRProc>(
        GetVendorGLProcAddress("glBlendBarrierNV"));
  } else if (ext.b_GL_KHR_blend_equation_advanced) {
    fn.glBlendBarrierKHRFn = reinterpret_cast<glBlendBarrierKHRProc>(
        GetVendorGLProcAddress("glBlendBarrierKHR"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_framebuffer_object) {
    fn.glBlitFramebufferFn = reinterpret_cast<glBlitFramebufferProc>(
        GetVendorGLProcAddress("glBlitFramebuffer"));
  } else if (ext.b_GL_ANGLE_framebuffer_blit) {
    fn.glBlitFramebufferFn = reinterpret_cast<glBlitFramebufferProc>(
        GetVendorGLProcAddress("glBlitFramebufferANGLE"));
  } else if (ext.b_GL_EXT_framebuffer_blit) {
    fn.glBlitFramebufferFn = reinterpret_cast<glBlitFramebufferProc>(
        GetVendorGLProcAddress("glBlitFramebufferEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glCheckFramebufferStatusEXTFn =
        reinterpret_cast<glCheckFramebufferStatusEXTProc>(
            GetVendorGLProcAddress("glCheckFramebufferStatus"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glCheckFramebufferStatusEXTFn =
        reinterpret_cast<glCheckFramebufferStatusEXTProc>(
            GetVendorGLProcAddress("glCheckFramebufferStatusEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glClearBufferfiFn = reinterpret_cast<glClearBufferfiProc>(
        GetVendorGLProcAddress("glClearBufferfi"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glClearBufferfvFn = reinterpret_cast<glClearBufferfvProc>(
        GetVendorGLProcAddress("glClearBufferfv"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glClearBufferivFn = reinterpret_cast<glClearBufferivProc>(
        GetVendorGLProcAddress("glClearBufferiv"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glClearBufferuivFn = reinterpret_cast<glClearBufferuivProc>(
        GetVendorGLProcAddress("glClearBufferuiv"));
  }

  if (ver->IsAtLeastGL(4u, 1u) || ver->is_es) {
    fn.glClearDepthfFn =
        reinterpret_cast<glClearDepthfProc>(GetVendorGLProcAddress("glClearDepthf"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sync) {
    fn.glClientWaitSyncFn = reinterpret_cast<glClientWaitSyncProc>(
        GetVendorGLProcAddress("glClientWaitSync"));
  }

  if (ext.b_GL_CHROMIUM_copy_compressed_texture ||
      ext.b_GL_CHROMIUM_compressed_copy_texture) {
    fn.glCompressedCopyTextureCHROMIUMFn =
        reinterpret_cast<glCompressedCopyTextureCHROMIUMProc>(
            GetVendorGLProcAddress("glCompressedCopyTextureCHROMIUM"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glCompressedTexImage2DRobustANGLEFn =
        reinterpret_cast<glCompressedTexImage2DRobustANGLEProc>(
            GetVendorGLProcAddress("glCompressedTexImage2DRobustANGLE"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glCompressedTexImage3DFn = reinterpret_cast<glCompressedTexImage3DProc>(
        GetVendorGLProcAddress("glCompressedTexImage3D"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glCompressedTexImage3DRobustANGLEFn =
        reinterpret_cast<glCompressedTexImage3DRobustANGLEProc>(
            GetVendorGLProcAddress("glCompressedTexImage3DRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glCompressedTexSubImage2DRobustANGLEFn =
        reinterpret_cast<glCompressedTexSubImage2DRobustANGLEProc>(
            GetVendorGLProcAddress("glCompressedTexSubImage2DRobustANGLE"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glCompressedTexSubImage3DFn =
        reinterpret_cast<glCompressedTexSubImage3DProc>(
            GetVendorGLProcAddress("glCompressedTexSubImage3D"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glCompressedTexSubImage3DRobustANGLEFn =
        reinterpret_cast<glCompressedTexSubImage3DRobustANGLEProc>(
            GetVendorGLProcAddress("glCompressedTexSubImage3DRobustANGLE"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glCopyBufferSubDataFn = reinterpret_cast<glCopyBufferSubDataProc>(
        GetVendorGLProcAddress("glCopyBufferSubData"));
  }

  if (ext.b_GL_CHROMIUM_copy_texture) {
    fn.glCopySubTextureCHROMIUMFn =
        reinterpret_cast<glCopySubTextureCHROMIUMProc>(
            GetVendorGLProcAddress("glCopySubTextureCHROMIUM"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glCopyTexSubImage3DFn = reinterpret_cast<glCopyTexSubImage3DProc>(
        GetVendorGLProcAddress("glCopyTexSubImage3D"));
  }

  if (ext.b_GL_CHROMIUM_copy_texture) {
    fn.glCopyTextureCHROMIUMFn = reinterpret_cast<glCopyTextureCHROMIUMProc>(
        GetVendorGLProcAddress("glCopyTextureCHROMIUM"));
  }

  if (ext.b_GL_NV_framebuffer_mixed_samples) {
    fn.glCoverageModulationNVFn = reinterpret_cast<glCoverageModulationNVProc>(
        GetVendorGLProcAddress("glCoverageModulationNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glCoverFillPathInstancedNVFn =
        reinterpret_cast<glCoverFillPathInstancedNVProc>(
            GetVendorGLProcAddress("glCoverFillPathInstancedNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glCoverFillPathNVFn = reinterpret_cast<glCoverFillPathNVProc>(
        GetVendorGLProcAddress("glCoverFillPathNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glCoverStrokePathInstancedNVFn =
        reinterpret_cast<glCoverStrokePathInstancedNVProc>(
            GetVendorGLProcAddress("glCoverStrokePathInstancedNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glCoverStrokePathNVFn = reinterpret_cast<glCoverStrokePathNVProc>(
        GetVendorGLProcAddress("glCoverStrokePathNV"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glDebugMessageCallbackFn = reinterpret_cast<glDebugMessageCallbackProc>(
        GetVendorGLProcAddress("glDebugMessageCallback"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glDebugMessageCallbackFn = reinterpret_cast<glDebugMessageCallbackProc>(
        GetVendorGLProcAddress("glDebugMessageCallbackKHR"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glDebugMessageControlFn = reinterpret_cast<glDebugMessageControlProc>(
        GetVendorGLProcAddress("glDebugMessageControl"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glDebugMessageControlFn = reinterpret_cast<glDebugMessageControlProc>(
        GetVendorGLProcAddress("glDebugMessageControlKHR"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glDebugMessageInsertFn = reinterpret_cast<glDebugMessageInsertProc>(
        GetVendorGLProcAddress("glDebugMessageInsert"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glDebugMessageInsertFn = reinterpret_cast<glDebugMessageInsertProc>(
        GetVendorGLProcAddress("glDebugMessageInsertKHR"));
  }

  if (ext.b_GL_APPLE_fence) {
    fn.glDeleteFencesAPPLEFn = reinterpret_cast<glDeleteFencesAPPLEProc>(
        GetVendorGLProcAddress("glDeleteFencesAPPLE"));
  }

  if (ext.b_GL_NV_fence) {
    fn.glDeleteFencesNVFn = reinterpret_cast<glDeleteFencesNVProc>(
        GetVendorGLProcAddress("glDeleteFencesNV"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glDeleteFramebuffersEXTFn =
        reinterpret_cast<glDeleteFramebuffersEXTProc>(
            GetVendorGLProcAddress("glDeleteFramebuffers"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glDeleteFramebuffersEXTFn =
        reinterpret_cast<glDeleteFramebuffersEXTProc>(
            GetVendorGLProcAddress("glDeleteFramebuffersEXT"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glDeletePathsNVFn = reinterpret_cast<glDeletePathsNVProc>(
        GetVendorGLProcAddress("glDeletePathsNV"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glDeleteQueriesFn = reinterpret_cast<glDeleteQueriesProc>(
        GetVendorGLProcAddress("glDeleteQueries"));
  } else if (ext.b_GL_ARB_occlusion_query) {
    fn.glDeleteQueriesFn = reinterpret_cast<glDeleteQueriesProc>(
        GetVendorGLProcAddress("glDeleteQueriesARB"));
  } else if (ext.b_GL_EXT_disjoint_timer_query ||
             ext.b_GL_EXT_occlusion_query_boolean) {
    fn.glDeleteQueriesFn = reinterpret_cast<glDeleteQueriesProc>(
        GetVendorGLProcAddress("glDeleteQueriesEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glDeleteRenderbuffersEXTFn =
        reinterpret_cast<glDeleteRenderbuffersEXTProc>(
            GetVendorGLProcAddress("glDeleteRenderbuffers"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glDeleteRenderbuffersEXTFn =
        reinterpret_cast<glDeleteRenderbuffersEXTProc>(
            GetVendorGLProcAddress("glDeleteRenderbuffersEXT"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glDeleteSamplersFn = reinterpret_cast<glDeleteSamplersProc>(
        GetVendorGLProcAddress("glDeleteSamplers"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sync) {
    fn.glDeleteSyncFn =
        reinterpret_cast<glDeleteSyncProc>(GetVendorGLProcAddress("glDeleteSync"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(4u, 0u) ||
      ext.b_GL_ARB_transform_feedback2) {
    fn.glDeleteTransformFeedbacksFn =
        reinterpret_cast<glDeleteTransformFeedbacksProc>(
            GetVendorGLProcAddress("glDeleteTransformFeedbacks"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_vertex_array_object) {
    fn.glDeleteVertexArraysOESFn =
        reinterpret_cast<glDeleteVertexArraysOESProc>(
            GetVendorGLProcAddress("glDeleteVertexArrays"));
  } else if (ext.b_GL_OES_vertex_array_object) {
    fn.glDeleteVertexArraysOESFn =
        reinterpret_cast<glDeleteVertexArraysOESProc>(
            GetVendorGLProcAddress("glDeleteVertexArraysOES"));
  } else if (ext.b_GL_APPLE_vertex_array_object) {
    fn.glDeleteVertexArraysOESFn =
        reinterpret_cast<glDeleteVertexArraysOESProc>(
            GetVendorGLProcAddress("glDeleteVertexArraysAPPLE"));
  }

  if (ver->IsAtLeastGL(4u, 1u) || ver->is_es) {
    fn.glDepthRangefFn =
        reinterpret_cast<glDepthRangefProc>(GetVendorGLProcAddress("glDepthRangef"));
  }

  if (ext.b_GL_EXT_discard_framebuffer) {
    fn.glDiscardFramebufferEXTFn =
        reinterpret_cast<glDiscardFramebufferEXTProc>(
            GetVendorGLProcAddress("glDiscardFramebufferEXT"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glDrawArraysInstancedANGLEFn =
        reinterpret_cast<glDrawArraysInstancedANGLEProc>(
            GetVendorGLProcAddress("glDrawArraysInstanced"));
  } else if (ext.b_GL_ARB_draw_instanced) {
    fn.glDrawArraysInstancedANGLEFn =
        reinterpret_cast<glDrawArraysInstancedANGLEProc>(
            GetVendorGLProcAddress("glDrawArraysInstancedARB"));
  } else if (ext.b_GL_ANGLE_instanced_arrays) {
    fn.glDrawArraysInstancedANGLEFn =
        reinterpret_cast<glDrawArraysInstancedANGLEProc>(
            GetVendorGLProcAddress("glDrawArraysInstancedANGLE"));
  }

  if (!ver->is_es) {
    fn.glDrawBufferFn =
        reinterpret_cast<glDrawBufferProc>(GetVendorGLProcAddress("glDrawBuffer"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glDrawBuffersARBFn = reinterpret_cast<glDrawBuffersARBProc>(
        GetVendorGLProcAddress("glDrawBuffers"));
  } else if (ext.b_GL_ARB_draw_buffers) {
    fn.glDrawBuffersARBFn = reinterpret_cast<glDrawBuffersARBProc>(
        GetVendorGLProcAddress("glDrawBuffersARB"));
  } else if (ext.b_GL_EXT_draw_buffers) {
    fn.glDrawBuffersARBFn = reinterpret_cast<glDrawBuffersARBProc>(
        GetVendorGLProcAddress("glDrawBuffersEXT"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glDrawElementsInstancedANGLEFn =
        reinterpret_cast<glDrawElementsInstancedANGLEProc>(
            GetVendorGLProcAddress("glDrawElementsInstanced"));
  } else if (ext.b_GL_ARB_draw_instanced) {
    fn.glDrawElementsInstancedANGLEFn =
        reinterpret_cast<glDrawElementsInstancedANGLEProc>(
            GetVendorGLProcAddress("glDrawElementsInstancedARB"));
  } else if (ext.b_GL_ANGLE_instanced_arrays) {
    fn.glDrawElementsInstancedANGLEFn =
        reinterpret_cast<glDrawElementsInstancedANGLEProc>(
            GetVendorGLProcAddress("glDrawElementsInstancedANGLE"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glDrawRangeElementsFn = reinterpret_cast<glDrawRangeElementsProc>(
        GetVendorGLProcAddress("glDrawRangeElements"));
  }

  if (ext.b_GL_OES_EGL_image) {
    fn.glEGLImageTargetRenderbufferStorageOESFn =
        reinterpret_cast<glEGLImageTargetRenderbufferStorageOESProc>(
            GetVendorGLProcAddress("glEGLImageTargetRenderbufferStorageOES"));
  }

  if (ext.b_GL_OES_EGL_image) {
    fn.glEGLImageTargetTexture2DOESFn =
        reinterpret_cast<glEGLImageTargetTexture2DOESProc>(
            GetVendorGLProcAddress("glEGLImageTargetTexture2DOES"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glEndQueryFn =
        reinterpret_cast<glEndQueryProc>(GetVendorGLProcAddress("glEndQuery"));
  } else if (ext.b_GL_ARB_occlusion_query) {
    fn.glEndQueryFn =
        reinterpret_cast<glEndQueryProc>(GetVendorGLProcAddress("glEndQueryARB"));
  } else if (ext.b_GL_EXT_disjoint_timer_query ||
             ext.b_GL_EXT_occlusion_query_boolean) {
    fn.glEndQueryFn =
        reinterpret_cast<glEndQueryProc>(GetVendorGLProcAddress("glEndQueryEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glEndTransformFeedbackFn = reinterpret_cast<glEndTransformFeedbackProc>(
        GetVendorGLProcAddress("glEndTransformFeedback"));
  } else if (ext.b_GL_EXT_transform_feedback) {
    fn.glEndTransformFeedbackFn = reinterpret_cast<glEndTransformFeedbackProc>(
        GetVendorGLProcAddress("glEndTransformFeedbackEXT"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sync) {
    fn.glFenceSyncFn =
        reinterpret_cast<glFenceSyncProc>(GetVendorGLProcAddress("glFenceSync"));
  }

  if (ext.b_GL_APPLE_fence) {
    fn.glFinishFenceAPPLEFn = reinterpret_cast<glFinishFenceAPPLEProc>(
        GetVendorGLProcAddress("glFinishFenceAPPLE"));
  }

  if (ext.b_GL_NV_fence) {
    fn.glFinishFenceNVFn = reinterpret_cast<glFinishFenceNVProc>(
        GetVendorGLProcAddress("glFinishFenceNV"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_map_buffer_range) {
    fn.glFlushMappedBufferRangeFn =
        reinterpret_cast<glFlushMappedBufferRangeProc>(
            GetVendorGLProcAddress("glFlushMappedBufferRange"));
  } else if (ext.b_GL_EXT_map_buffer_range) {
    fn.glFlushMappedBufferRangeFn =
        reinterpret_cast<glFlushMappedBufferRangeProc>(
            GetVendorGLProcAddress("glFlushMappedBufferRangeEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glFramebufferRenderbufferEXTFn =
        reinterpret_cast<glFramebufferRenderbufferEXTProc>(
            GetVendorGLProcAddress("glFramebufferRenderbuffer"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glFramebufferRenderbufferEXTFn =
        reinterpret_cast<glFramebufferRenderbufferEXTProc>(
            GetVendorGLProcAddress("glFramebufferRenderbufferEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glFramebufferTexture2DEXTFn =
        reinterpret_cast<glFramebufferTexture2DEXTProc>(
            GetVendorGLProcAddress("glFramebufferTexture2D"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glFramebufferTexture2DEXTFn =
        reinterpret_cast<glFramebufferTexture2DEXTProc>(
            GetVendorGLProcAddress("glFramebufferTexture2DEXT"));
  }

  if (ext.b_GL_EXT_multisampled_render_to_texture) {
    fn.glFramebufferTexture2DMultisampleEXTFn =
        reinterpret_cast<glFramebufferTexture2DMultisampleEXTProc>(
            GetVendorGLProcAddress("glFramebufferTexture2DMultisampleEXT"));
  } else if (ext.b_GL_IMG_multisampled_render_to_texture) {
    fn.glFramebufferTexture2DMultisampleEXTFn =
        reinterpret_cast<glFramebufferTexture2DMultisampleEXTProc>(
            GetVendorGLProcAddress("glFramebufferTexture2DMultisampleIMG"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glFramebufferTextureLayerFn =
        reinterpret_cast<glFramebufferTextureLayerProc>(
            GetVendorGLProcAddress("glFramebufferTextureLayer"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glGenerateMipmapEXTFn = reinterpret_cast<glGenerateMipmapEXTProc>(
        GetVendorGLProcAddress("glGenerateMipmap"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glGenerateMipmapEXTFn = reinterpret_cast<glGenerateMipmapEXTProc>(
        GetVendorGLProcAddress("glGenerateMipmapEXT"));
  }

  if (ext.b_GL_APPLE_fence) {
    fn.glGenFencesAPPLEFn = reinterpret_cast<glGenFencesAPPLEProc>(
        GetVendorGLProcAddress("glGenFencesAPPLE"));
  }

  if (ext.b_GL_NV_fence) {
    fn.glGenFencesNVFn =
        reinterpret_cast<glGenFencesNVProc>(GetVendorGLProcAddress("glGenFencesNV"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glGenFramebuffersEXTFn = reinterpret_cast<glGenFramebuffersEXTProc>(
        GetVendorGLProcAddress("glGenFramebuffers"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glGenFramebuffersEXTFn = reinterpret_cast<glGenFramebuffersEXTProc>(
        GetVendorGLProcAddress("glGenFramebuffersEXT"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glGenPathsNVFn =
        reinterpret_cast<glGenPathsNVProc>(GetVendorGLProcAddress("glGenPathsNV"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGenQueriesFn =
        reinterpret_cast<glGenQueriesProc>(GetVendorGLProcAddress("glGenQueries"));
  } else if (ext.b_GL_ARB_occlusion_query) {
    fn.glGenQueriesFn =
        reinterpret_cast<glGenQueriesProc>(GetVendorGLProcAddress("glGenQueriesARB"));
  } else if (ext.b_GL_EXT_disjoint_timer_query ||
             ext.b_GL_EXT_occlusion_query_boolean) {
    fn.glGenQueriesFn =
        reinterpret_cast<glGenQueriesProc>(GetVendorGLProcAddress("glGenQueriesEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glGenRenderbuffersEXTFn = reinterpret_cast<glGenRenderbuffersEXTProc>(
        GetVendorGLProcAddress("glGenRenderbuffers"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glGenRenderbuffersEXTFn = reinterpret_cast<glGenRenderbuffersEXTProc>(
        GetVendorGLProcAddress("glGenRenderbuffersEXT"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glGenSamplersFn =
        reinterpret_cast<glGenSamplersProc>(GetVendorGLProcAddress("glGenSamplers"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(4u, 0u) ||
      ext.b_GL_ARB_transform_feedback2) {
    fn.glGenTransformFeedbacksFn =
        reinterpret_cast<glGenTransformFeedbacksProc>(
            GetVendorGLProcAddress("glGenTransformFeedbacks"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_vertex_array_object) {
    fn.glGenVertexArraysOESFn = reinterpret_cast<glGenVertexArraysOESProc>(
        GetVendorGLProcAddress("glGenVertexArrays"));
  } else if (ext.b_GL_OES_vertex_array_object) {
    fn.glGenVertexArraysOESFn = reinterpret_cast<glGenVertexArraysOESProc>(
        GetVendorGLProcAddress("glGenVertexArraysOES"));
  } else if (ext.b_GL_APPLE_vertex_array_object) {
    fn.glGenVertexArraysOESFn = reinterpret_cast<glGenVertexArraysOESProc>(
        GetVendorGLProcAddress("glGenVertexArraysAPPLE"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glGetActiveUniformBlockivFn =
        reinterpret_cast<glGetActiveUniformBlockivProc>(
            GetVendorGLProcAddress("glGetActiveUniformBlockiv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetActiveUniformBlockivRobustANGLEFn =
        reinterpret_cast<glGetActiveUniformBlockivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetActiveUniformBlockivRobustANGLE"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glGetActiveUniformBlockNameFn =
        reinterpret_cast<glGetActiveUniformBlockNameProc>(
            GetVendorGLProcAddress("glGetActiveUniformBlockName"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glGetActiveUniformsivFn = reinterpret_cast<glGetActiveUniformsivProc>(
        GetVendorGLProcAddress("glGetActiveUniformsiv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetBooleani_vRobustANGLEFn =
        reinterpret_cast<glGetBooleani_vRobustANGLEProc>(
            GetVendorGLProcAddress("glGetBooleani_vRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetBooleanvRobustANGLEFn =
        reinterpret_cast<glGetBooleanvRobustANGLEProc>(
            GetVendorGLProcAddress("glGetBooleanvRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetBufferParameteri64vRobustANGLEFn =
        reinterpret_cast<glGetBufferParameteri64vRobustANGLEProc>(
            GetVendorGLProcAddress("glGetBufferParameteri64vRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetBufferParameterivRobustANGLEFn =
        reinterpret_cast<glGetBufferParameterivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetBufferParameterivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetBufferPointervRobustANGLEFn =
        reinterpret_cast<glGetBufferPointervRobustANGLEProc>(
            GetVendorGLProcAddress("glGetBufferPointervRobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glGetDebugMessageLogFn = reinterpret_cast<glGetDebugMessageLogProc>(
        GetVendorGLProcAddress("glGetDebugMessageLog"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glGetDebugMessageLogFn = reinterpret_cast<glGetDebugMessageLogProc>(
        GetVendorGLProcAddress("glGetDebugMessageLogKHR"));
  }

  if (ext.b_GL_NV_fence) {
    fn.glGetFenceivNVFn = reinterpret_cast<glGetFenceivNVProc>(
        GetVendorGLProcAddress("glGetFenceivNV"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetFloatvRobustANGLEFn = reinterpret_cast<glGetFloatvRobustANGLEProc>(
        GetVendorGLProcAddress("glGetFloatvRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ext.b_GL_ARB_blend_func_extended) {
    fn.glGetFragDataIndexFn = reinterpret_cast<glGetFragDataIndexProc>(
        GetVendorGLProcAddress("glGetFragDataIndex"));
  } else if (ext.b_GL_EXT_blend_func_extended) {
    fn.glGetFragDataIndexFn = reinterpret_cast<glGetFragDataIndexProc>(
        GetVendorGLProcAddress("glGetFragDataIndexEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGetFragDataLocationFn = reinterpret_cast<glGetFragDataLocationProc>(
        GetVendorGLProcAddress("glGetFragDataLocation"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glGetFramebufferAttachmentParameterivEXTFn =
        reinterpret_cast<glGetFramebufferAttachmentParameterivEXTProc>(
            GetVendorGLProcAddress("glGetFramebufferAttachmentParameteriv"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glGetFramebufferAttachmentParameterivEXTFn =
        reinterpret_cast<glGetFramebufferAttachmentParameterivEXTProc>(
            GetVendorGLProcAddress("glGetFramebufferAttachmentParameterivEXT"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetFramebufferAttachmentParameterivRobustANGLEFn =
        reinterpret_cast<glGetFramebufferAttachmentParameterivRobustANGLEProc>(
            GetVendorGLProcAddress(
                "glGetFramebufferAttachmentParameterivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetFramebufferParameterivRobustANGLEFn =
        reinterpret_cast<glGetFramebufferParameterivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetFramebufferParameterivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 5u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glGetGraphicsResetStatusARBFn =
        reinterpret_cast<glGetGraphicsResetStatusARBProc>(
            GetVendorGLProcAddress("glGetGraphicsResetStatus"));
  } else if (ext.b_GL_ARB_robustness) {
    fn.glGetGraphicsResetStatusARBFn =
        reinterpret_cast<glGetGraphicsResetStatusARBProc>(
            GetVendorGLProcAddress("glGetGraphicsResetStatusARB"));
  } else if (ext.b_GL_KHR_robustness) {
    fn.glGetGraphicsResetStatusARBFn =
        reinterpret_cast<glGetGraphicsResetStatusARBProc>(
            GetVendorGLProcAddress("glGetGraphicsResetStatusKHR"));
  } else if (ext.b_GL_EXT_robustness) {
    fn.glGetGraphicsResetStatusARBFn =
        reinterpret_cast<glGetGraphicsResetStatusARBProc>(
            GetVendorGLProcAddress("glGetGraphicsResetStatusEXT"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGetInteger64i_vFn = reinterpret_cast<glGetInteger64i_vProc>(
        GetVendorGLProcAddress("glGetInteger64i_v"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetInteger64i_vRobustANGLEFn =
        reinterpret_cast<glGetInteger64i_vRobustANGLEProc>(
            GetVendorGLProcAddress("glGetInteger64i_vRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGetInteger64vFn = reinterpret_cast<glGetInteger64vProc>(
        GetVendorGLProcAddress("glGetInteger64v"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetInteger64vRobustANGLEFn =
        reinterpret_cast<glGetInteger64vRobustANGLEProc>(
            GetVendorGLProcAddress("glGetInteger64vRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGetIntegeri_vFn = reinterpret_cast<glGetIntegeri_vProc>(
        GetVendorGLProcAddress("glGetIntegeri_v"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetIntegeri_vRobustANGLEFn =
        reinterpret_cast<glGetIntegeri_vRobustANGLEProc>(
            GetVendorGLProcAddress("glGetIntegeri_vRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetIntegervRobustANGLEFn =
        reinterpret_cast<glGetIntegervRobustANGLEProc>(
            GetVendorGLProcAddress("glGetIntegervRobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_internalformat_query) {
    fn.glGetInternalformativFn = reinterpret_cast<glGetInternalformativProc>(
        GetVendorGLProcAddress("glGetInternalformativ"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetInternalformativRobustANGLEFn =
        reinterpret_cast<glGetInternalformativRobustANGLEProc>(
            GetVendorGLProcAddress("glGetInternalformativRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 1u) ||
      ext.b_GL_ARB_texture_multisample) {
    fn.glGetMultisamplefvFn = reinterpret_cast<glGetMultisamplefvProc>(
        GetVendorGLProcAddress("glGetMultisamplefv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetMultisamplefvRobustANGLEFn =
        reinterpret_cast<glGetMultisamplefvRobustANGLEProc>(
            GetVendorGLProcAddress("glGetMultisamplefvRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetnUniformfvRobustANGLEFn =
        reinterpret_cast<glGetnUniformfvRobustANGLEProc>(
            GetVendorGLProcAddress("glGetnUniformfvRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetnUniformivRobustANGLEFn =
        reinterpret_cast<glGetnUniformivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetnUniformivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetnUniformuivRobustANGLEFn =
        reinterpret_cast<glGetnUniformuivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetnUniformuivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glGetObjectLabelFn = reinterpret_cast<glGetObjectLabelProc>(
        GetVendorGLProcAddress("glGetObjectLabel"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glGetObjectLabelFn = reinterpret_cast<glGetObjectLabelProc>(
        GetVendorGLProcAddress("glGetObjectLabelKHR"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glGetObjectPtrLabelFn = reinterpret_cast<glGetObjectPtrLabelProc>(
        GetVendorGLProcAddress("glGetObjectPtrLabel"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glGetObjectPtrLabelFn = reinterpret_cast<glGetObjectPtrLabelProc>(
        GetVendorGLProcAddress("glGetObjectPtrLabelKHR"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glGetPointervFn =
        reinterpret_cast<glGetPointervProc>(GetVendorGLProcAddress("glGetPointerv"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glGetPointervFn = reinterpret_cast<glGetPointervProc>(
        GetVendorGLProcAddress("glGetPointervKHR"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetPointervRobustANGLERobustANGLEFn =
        reinterpret_cast<glGetPointervRobustANGLERobustANGLEProc>(
            GetVendorGLProcAddress("glGetPointervRobustANGLERobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 1u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_get_program_binary) {
    fn.glGetProgramBinaryFn = reinterpret_cast<glGetProgramBinaryProc>(
        GetVendorGLProcAddress("glGetProgramBinary"));
  } else if (ext.b_GL_OES_get_program_binary) {
    fn.glGetProgramBinaryFn = reinterpret_cast<glGetProgramBinaryProc>(
        GetVendorGLProcAddress("glGetProgramBinaryOES"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 1u) ||
      ext.b_GL_ARB_program_interface_query) {
    fn.glGetProgramInterfaceivFn =
        reinterpret_cast<glGetProgramInterfaceivProc>(
            GetVendorGLProcAddress("glGetProgramInterfaceiv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetProgramInterfaceivRobustANGLEFn =
        reinterpret_cast<glGetProgramInterfaceivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetProgramInterfaceivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetProgramivRobustANGLEFn =
        reinterpret_cast<glGetProgramivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetProgramivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 1u) ||
      ext.b_GL_ARB_program_interface_query) {
    fn.glGetProgramResourceivFn = reinterpret_cast<glGetProgramResourceivProc>(
        GetVendorGLProcAddress("glGetProgramResourceiv"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 1u)) {
    fn.glGetProgramResourceLocationFn =
        reinterpret_cast<glGetProgramResourceLocationProc>(
            GetVendorGLProcAddress("glGetProgramResourceLocation"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 1u) ||
      ext.b_GL_ARB_program_interface_query) {
    fn.glGetProgramResourceNameFn =
        reinterpret_cast<glGetProgramResourceNameProc>(
            GetVendorGLProcAddress("glGetProgramResourceName"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGetQueryivFn =
        reinterpret_cast<glGetQueryivProc>(GetVendorGLProcAddress("glGetQueryiv"));
  } else if (ext.b_GL_ARB_occlusion_query) {
    fn.glGetQueryivFn =
        reinterpret_cast<glGetQueryivProc>(GetVendorGLProcAddress("glGetQueryivARB"));
  } else if (ext.b_GL_EXT_disjoint_timer_query ||
             ext.b_GL_EXT_occlusion_query_boolean) {
    fn.glGetQueryivFn =
        reinterpret_cast<glGetQueryivProc>(GetVendorGLProcAddress("glGetQueryivEXT"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetQueryivRobustANGLEFn =
        reinterpret_cast<glGetQueryivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetQueryivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ext.b_GL_ARB_timer_query) {
    fn.glGetQueryObjecti64vFn = reinterpret_cast<glGetQueryObjecti64vProc>(
        GetVendorGLProcAddress("glGetQueryObjecti64v"));
  } else if (ext.b_GL_EXT_timer_query || ext.b_GL_EXT_disjoint_timer_query) {
    fn.glGetQueryObjecti64vFn = reinterpret_cast<glGetQueryObjecti64vProc>(
        GetVendorGLProcAddress("glGetQueryObjecti64vEXT"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetQueryObjecti64vRobustANGLEFn =
        reinterpret_cast<glGetQueryObjecti64vRobustANGLEProc>(
            GetVendorGLProcAddress("glGetQueryObjecti64vRobustANGLE"));
  }

  if (!ver->is_es) {
    fn.glGetQueryObjectivFn = reinterpret_cast<glGetQueryObjectivProc>(
        GetVendorGLProcAddress("glGetQueryObjectiv"));
  } else if (ext.b_GL_ARB_occlusion_query) {
    fn.glGetQueryObjectivFn = reinterpret_cast<glGetQueryObjectivProc>(
        GetVendorGLProcAddress("glGetQueryObjectivARB"));
  } else if (ext.b_GL_EXT_disjoint_timer_query) {
    fn.glGetQueryObjectivFn = reinterpret_cast<glGetQueryObjectivProc>(
        GetVendorGLProcAddress("glGetQueryObjectivEXT"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetQueryObjectivRobustANGLEFn =
        reinterpret_cast<glGetQueryObjectivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetQueryObjectivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ext.b_GL_ARB_timer_query) {
    fn.glGetQueryObjectui64vFn = reinterpret_cast<glGetQueryObjectui64vProc>(
        GetVendorGLProcAddress("glGetQueryObjectui64v"));
  } else if (ext.b_GL_EXT_timer_query || ext.b_GL_EXT_disjoint_timer_query) {
    fn.glGetQueryObjectui64vFn = reinterpret_cast<glGetQueryObjectui64vProc>(
        GetVendorGLProcAddress("glGetQueryObjectui64vEXT"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetQueryObjectui64vRobustANGLEFn =
        reinterpret_cast<glGetQueryObjectui64vRobustANGLEProc>(
            GetVendorGLProcAddress("glGetQueryObjectui64vRobustANGLE"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGetQueryObjectuivFn = reinterpret_cast<glGetQueryObjectuivProc>(
        GetVendorGLProcAddress("glGetQueryObjectuiv"));
  } else if (ext.b_GL_ARB_occlusion_query) {
    fn.glGetQueryObjectuivFn = reinterpret_cast<glGetQueryObjectuivProc>(
        GetVendorGLProcAddress("glGetQueryObjectuivARB"));
  } else if (ext.b_GL_EXT_disjoint_timer_query ||
             ext.b_GL_EXT_occlusion_query_boolean) {
    fn.glGetQueryObjectuivFn = reinterpret_cast<glGetQueryObjectuivProc>(
        GetVendorGLProcAddress("glGetQueryObjectuivEXT"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetQueryObjectuivRobustANGLEFn =
        reinterpret_cast<glGetQueryObjectuivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetQueryObjectuivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glGetRenderbufferParameterivEXTFn =
        reinterpret_cast<glGetRenderbufferParameterivEXTProc>(
            GetVendorGLProcAddress("glGetRenderbufferParameteriv"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glGetRenderbufferParameterivEXTFn =
        reinterpret_cast<glGetRenderbufferParameterivEXTProc>(
            GetVendorGLProcAddress("glGetRenderbufferParameterivEXT"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetRenderbufferParameterivRobustANGLEFn =
        reinterpret_cast<glGetRenderbufferParameterivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetRenderbufferParameterivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glGetSamplerParameterfvFn =
        reinterpret_cast<glGetSamplerParameterfvProc>(
            GetVendorGLProcAddress("glGetSamplerParameterfv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetSamplerParameterfvRobustANGLEFn =
        reinterpret_cast<glGetSamplerParameterfvRobustANGLEProc>(
            GetVendorGLProcAddress("glGetSamplerParameterfvRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetSamplerParameterIivRobustANGLEFn =
        reinterpret_cast<glGetSamplerParameterIivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetSamplerParameterIivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetSamplerParameterIuivRobustANGLEFn =
        reinterpret_cast<glGetSamplerParameterIuivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetSamplerParameterIuivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glGetSamplerParameterivFn =
        reinterpret_cast<glGetSamplerParameterivProc>(
            GetVendorGLProcAddress("glGetSamplerParameteriv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetSamplerParameterivRobustANGLEFn =
        reinterpret_cast<glGetSamplerParameterivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetSamplerParameterivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetShaderivRobustANGLEFn =
        reinterpret_cast<glGetShaderivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetShaderivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 1u) || ver->is_es) {
    fn.glGetShaderPrecisionFormatFn =
        reinterpret_cast<glGetShaderPrecisionFormatProc>(
            GetVendorGLProcAddress("glGetShaderPrecisionFormat"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sync) {
    fn.glGetSyncivFn =
        reinterpret_cast<glGetSyncivProc>(GetVendorGLProcAddress("glGetSynciv"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 1u)) {
    fn.glGetTexLevelParameterfvFn =
        reinterpret_cast<glGetTexLevelParameterfvProc>(
            GetVendorGLProcAddress("glGetTexLevelParameterfv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetTexLevelParameterfvRobustANGLEFn =
        reinterpret_cast<glGetTexLevelParameterfvRobustANGLEProc>(
            GetVendorGLProcAddress("glGetTexLevelParameterfvRobustANGLE"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 1u)) {
    fn.glGetTexLevelParameterivFn =
        reinterpret_cast<glGetTexLevelParameterivProc>(
            GetVendorGLProcAddress("glGetTexLevelParameteriv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetTexLevelParameterivRobustANGLEFn =
        reinterpret_cast<glGetTexLevelParameterivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetTexLevelParameterivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetTexParameterfvRobustANGLEFn =
        reinterpret_cast<glGetTexParameterfvRobustANGLEProc>(
            GetVendorGLProcAddress("glGetTexParameterfvRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetTexParameterIivRobustANGLEFn =
        reinterpret_cast<glGetTexParameterIivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetTexParameterIivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetTexParameterIuivRobustANGLEFn =
        reinterpret_cast<glGetTexParameterIuivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetTexParameterIuivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetTexParameterivRobustANGLEFn =
        reinterpret_cast<glGetTexParameterivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetTexParameterivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGetTransformFeedbackVaryingFn =
        reinterpret_cast<glGetTransformFeedbackVaryingProc>(
            GetVendorGLProcAddress("glGetTransformFeedbackVarying"));
  } else if (ext.b_GL_EXT_transform_feedback) {
    fn.glGetTransformFeedbackVaryingFn =
        reinterpret_cast<glGetTransformFeedbackVaryingProc>(
            GetVendorGLProcAddress("glGetTransformFeedbackVaryingEXT"));
  }

  if (ext.b_GL_ANGLE_translated_shader_source) {
    fn.glGetTranslatedShaderSourceANGLEFn =
        reinterpret_cast<glGetTranslatedShaderSourceANGLEProc>(
            GetVendorGLProcAddress("glGetTranslatedShaderSourceANGLE"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glGetUniformBlockIndexFn = reinterpret_cast<glGetUniformBlockIndexProc>(
        GetVendorGLProcAddress("glGetUniformBlockIndex"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetUniformfvRobustANGLEFn =
        reinterpret_cast<glGetUniformfvRobustANGLEProc>(
            GetVendorGLProcAddress("glGetUniformfvRobustANGLE"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glGetUniformIndicesFn = reinterpret_cast<glGetUniformIndicesProc>(
        GetVendorGLProcAddress("glGetUniformIndices"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetUniformivRobustANGLEFn =
        reinterpret_cast<glGetUniformivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetUniformivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glGetUniformuivFn = reinterpret_cast<glGetUniformuivProc>(
        GetVendorGLProcAddress("glGetUniformuiv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetUniformuivRobustANGLEFn =
        reinterpret_cast<glGetUniformuivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetUniformuivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetVertexAttribfvRobustANGLEFn =
        reinterpret_cast<glGetVertexAttribfvRobustANGLEProc>(
            GetVendorGLProcAddress("glGetVertexAttribfvRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetVertexAttribIivRobustANGLEFn =
        reinterpret_cast<glGetVertexAttribIivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetVertexAttribIivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetVertexAttribIuivRobustANGLEFn =
        reinterpret_cast<glGetVertexAttribIuivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetVertexAttribIuivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetVertexAttribivRobustANGLEFn =
        reinterpret_cast<glGetVertexAttribivRobustANGLEProc>(
            GetVendorGLProcAddress("glGetVertexAttribivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glGetVertexAttribPointervRobustANGLEFn =
        reinterpret_cast<glGetVertexAttribPointervRobustANGLEProc>(
            GetVendorGLProcAddress("glGetVertexAttribPointervRobustANGLE"));
  }

  if (ext.b_GL_EXT_debug_marker) {
    fn.glInsertEventMarkerEXTFn = reinterpret_cast<glInsertEventMarkerEXTProc>(
        GetVendorGLProcAddress("glInsertEventMarkerEXT"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glInvalidateFramebufferFn =
        reinterpret_cast<glInvalidateFramebufferProc>(
            GetVendorGLProcAddress("glInvalidateFramebuffer"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glInvalidateSubFramebufferFn =
        reinterpret_cast<glInvalidateSubFramebufferProc>(
            GetVendorGLProcAddress("glInvalidateSubFramebuffer"));
  }

  if (ext.b_GL_APPLE_fence) {
    fn.glIsFenceAPPLEFn = reinterpret_cast<glIsFenceAPPLEProc>(
        GetVendorGLProcAddress("glIsFenceAPPLE"));
  }

  if (ext.b_GL_NV_fence) {
    fn.glIsFenceNVFn =
        reinterpret_cast<glIsFenceNVProc>(GetVendorGLProcAddress("glIsFenceNV"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glIsFramebufferEXTFn = reinterpret_cast<glIsFramebufferEXTProc>(
        GetVendorGLProcAddress("glIsFramebuffer"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glIsFramebufferEXTFn = reinterpret_cast<glIsFramebufferEXTProc>(
        GetVendorGLProcAddress("glIsFramebufferEXT"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glIsPathNVFn =
        reinterpret_cast<glIsPathNVProc>(GetVendorGLProcAddress("glIsPathNV"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glIsQueryFn =
        reinterpret_cast<glIsQueryProc>(GetVendorGLProcAddress("glIsQuery"));
  } else if (ext.b_GL_ARB_occlusion_query) {
    fn.glIsQueryFn =
        reinterpret_cast<glIsQueryProc>(GetVendorGLProcAddress("glIsQueryARB"));
  } else if (ext.b_GL_EXT_disjoint_timer_query ||
             ext.b_GL_EXT_occlusion_query_boolean) {
    fn.glIsQueryFn =
        reinterpret_cast<glIsQueryProc>(GetVendorGLProcAddress("glIsQueryEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glIsRenderbufferEXTFn = reinterpret_cast<glIsRenderbufferEXTProc>(
        GetVendorGLProcAddress("glIsRenderbuffer"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glIsRenderbufferEXTFn = reinterpret_cast<glIsRenderbufferEXTProc>(
        GetVendorGLProcAddress("glIsRenderbufferEXT"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glIsSamplerFn =
        reinterpret_cast<glIsSamplerProc>(GetVendorGLProcAddress("glIsSampler"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sync) {
    fn.glIsSyncFn =
        reinterpret_cast<glIsSyncProc>(GetVendorGLProcAddress("glIsSync"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(4u, 0u) ||
      ext.b_GL_ARB_transform_feedback2) {
    fn.glIsTransformFeedbackFn = reinterpret_cast<glIsTransformFeedbackProc>(
        GetVendorGLProcAddress("glIsTransformFeedback"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_vertex_array_object) {
    fn.glIsVertexArrayOESFn = reinterpret_cast<glIsVertexArrayOESProc>(
        GetVendorGLProcAddress("glIsVertexArray"));
  } else if (ext.b_GL_OES_vertex_array_object) {
    fn.glIsVertexArrayOESFn = reinterpret_cast<glIsVertexArrayOESProc>(
        GetVendorGLProcAddress("glIsVertexArrayOES"));
  } else if (ext.b_GL_APPLE_vertex_array_object) {
    fn.glIsVertexArrayOESFn = reinterpret_cast<glIsVertexArrayOESProc>(
        GetVendorGLProcAddress("glIsVertexArrayAPPLE"));
  }

  if (!ver->is_es) {
    fn.glMapBufferFn =
        reinterpret_cast<glMapBufferProc>(GetVendorGLProcAddress("glMapBuffer"));
  } else if (ext.b_GL_OES_mapbuffer) {
    fn.glMapBufferFn =
        reinterpret_cast<glMapBufferProc>(GetVendorGLProcAddress("glMapBufferOES"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_map_buffer_range) {
    fn.glMapBufferRangeFn = reinterpret_cast<glMapBufferRangeProc>(
        GetVendorGLProcAddress("glMapBufferRange"));
  } else if (ext.b_GL_EXT_map_buffer_range) {
    fn.glMapBufferRangeFn = reinterpret_cast<glMapBufferRangeProc>(
        GetVendorGLProcAddress("glMapBufferRangeEXT"));
  }

  if (ext.b_GL_EXT_direct_state_access || ext.b_GL_NV_path_rendering) {
    fn.glMatrixLoadfEXTFn = reinterpret_cast<glMatrixLoadfEXTProc>(
        GetVendorGLProcAddress("glMatrixLoadfEXT"));
  }

  if (ext.b_GL_EXT_direct_state_access || ext.b_GL_NV_path_rendering) {
    fn.glMatrixLoadIdentityEXTFn =
        reinterpret_cast<glMatrixLoadIdentityEXTProc>(
            GetVendorGLProcAddress("glMatrixLoadIdentityEXT"));
  }

  if (ver->IsAtLeastGL(4u, 2u) || ver->IsAtLeastGLES(3u, 1u) ||
      ext.b_GL_ARB_shader_image_load_store) {
    fn.glMemoryBarrierEXTFn = reinterpret_cast<glMemoryBarrierEXTProc>(
        GetVendorGLProcAddress("glMemoryBarrier"));
  } else if (ext.b_GL_EXT_shader_image_load_store) {
    fn.glMemoryBarrierEXTFn = reinterpret_cast<glMemoryBarrierEXTProc>(
        GetVendorGLProcAddress("glMemoryBarrierEXT"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glObjectLabelFn =
        reinterpret_cast<glObjectLabelProc>(GetVendorGLProcAddress("glObjectLabel"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glObjectLabelFn = reinterpret_cast<glObjectLabelProc>(
        GetVendorGLProcAddress("glObjectLabelKHR"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glObjectPtrLabelFn = reinterpret_cast<glObjectPtrLabelProc>(
        GetVendorGLProcAddress("glObjectPtrLabel"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glObjectPtrLabelFn = reinterpret_cast<glObjectPtrLabelProc>(
        GetVendorGLProcAddress("glObjectPtrLabelKHR"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glPathCommandsNVFn = reinterpret_cast<glPathCommandsNVProc>(
        GetVendorGLProcAddress("glPathCommandsNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glPathParameterfNVFn = reinterpret_cast<glPathParameterfNVProc>(
        GetVendorGLProcAddress("glPathParameterfNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glPathParameteriNVFn = reinterpret_cast<glPathParameteriNVProc>(
        GetVendorGLProcAddress("glPathParameteriNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glPathStencilFuncNVFn = reinterpret_cast<glPathStencilFuncNVProc>(
        GetVendorGLProcAddress("glPathStencilFuncNV"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(4u, 0u) ||
      ext.b_GL_ARB_transform_feedback2) {
    fn.glPauseTransformFeedbackFn =
        reinterpret_cast<glPauseTransformFeedbackProc>(
            GetVendorGLProcAddress("glPauseTransformFeedback"));
  }

  if (!ver->is_es) {
    fn.glPointParameteriFn = reinterpret_cast<glPointParameteriProc>(
        GetVendorGLProcAddress("glPointParameteri"));
  }

  if (!ver->is_es) {
    fn.glPolygonModeFn =
        reinterpret_cast<glPolygonModeProc>(GetVendorGLProcAddress("glPolygonMode"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glPopDebugGroupFn = reinterpret_cast<glPopDebugGroupProc>(
        GetVendorGLProcAddress("glPopDebugGroup"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glPopDebugGroupFn = reinterpret_cast<glPopDebugGroupProc>(
        GetVendorGLProcAddress("glPopDebugGroupKHR"));
  }

  if (ext.b_GL_EXT_debug_marker) {
    fn.glPopGroupMarkerEXTFn = reinterpret_cast<glPopGroupMarkerEXTProc>(
        GetVendorGLProcAddress("glPopGroupMarkerEXT"));
  }

  if (ver->IsAtLeastGL(3u, 1u)) {
    fn.glPrimitiveRestartIndexFn =
        reinterpret_cast<glPrimitiveRestartIndexProc>(
            GetVendorGLProcAddress("glPrimitiveRestartIndex"));
  }

  if (ver->IsAtLeastGL(4u, 1u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_get_program_binary) {
    fn.glProgramBinaryFn = reinterpret_cast<glProgramBinaryProc>(
        GetVendorGLProcAddress("glProgramBinary"));
  } else if (ext.b_GL_OES_get_program_binary) {
    fn.glProgramBinaryFn = reinterpret_cast<glProgramBinaryProc>(
        GetVendorGLProcAddress("glProgramBinaryOES"));
  }

  if (ver->IsAtLeastGL(4u, 1u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_get_program_binary) {
    fn.glProgramParameteriFn = reinterpret_cast<glProgramParameteriProc>(
        GetVendorGLProcAddress("glProgramParameteri"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glProgramPathFragmentInputGenNVFn =
        reinterpret_cast<glProgramPathFragmentInputGenNVProc>(
            GetVendorGLProcAddress("glProgramPathFragmentInputGenNV"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glPushDebugGroupFn = reinterpret_cast<glPushDebugGroupProc>(
        GetVendorGLProcAddress("glPushDebugGroup"));
  } else if (ext.b_GL_KHR_debug) {
    fn.glPushDebugGroupFn = reinterpret_cast<glPushDebugGroupProc>(
        GetVendorGLProcAddress("glPushDebugGroupKHR"));
  }

  if (ext.b_GL_EXT_debug_marker) {
    fn.glPushGroupMarkerEXTFn = reinterpret_cast<glPushGroupMarkerEXTProc>(
        GetVendorGLProcAddress("glPushGroupMarkerEXT"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ext.b_GL_ARB_timer_query) {
    fn.glQueryCounterFn = reinterpret_cast<glQueryCounterProc>(
        GetVendorGLProcAddress("glQueryCounter"));
  } else if (ext.b_GL_EXT_disjoint_timer_query) {
    fn.glQueryCounterFn = reinterpret_cast<glQueryCounterProc>(
        GetVendorGLProcAddress("glQueryCounterEXT"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glReadBufferFn =
        reinterpret_cast<glReadBufferProc>(GetVendorGLProcAddress("glReadBuffer"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glReadnPixelsRobustANGLEFn =
        reinterpret_cast<glReadnPixelsRobustANGLEProc>(
            GetVendorGLProcAddress("glReadnPixelsRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glReadPixelsRobustANGLEFn =
        reinterpret_cast<glReadPixelsRobustANGLEProc>(
            GetVendorGLProcAddress("glReadPixelsRobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 1u) || ver->is_es) {
    fn.glReleaseShaderCompilerFn =
        reinterpret_cast<glReleaseShaderCompilerProc>(
            GetVendorGLProcAddress("glReleaseShaderCompiler"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->is_es) {
    fn.glRenderbufferStorageEXTFn =
        reinterpret_cast<glRenderbufferStorageEXTProc>(
            GetVendorGLProcAddress("glRenderbufferStorage"));
  } else if (ext.b_GL_EXT_framebuffer_object) {
    fn.glRenderbufferStorageEXTFn =
        reinterpret_cast<glRenderbufferStorageEXTProc>(
            GetVendorGLProcAddress("glRenderbufferStorageEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_framebuffer_object) {
    fn.glRenderbufferStorageMultisampleFn =
        reinterpret_cast<glRenderbufferStorageMultisampleProc>(
            GetVendorGLProcAddress("glRenderbufferStorageMultisample"));
  } else if (ext.b_GL_ANGLE_framebuffer_multisample) {
    fn.glRenderbufferStorageMultisampleFn =
        reinterpret_cast<glRenderbufferStorageMultisampleProc>(
            GetVendorGLProcAddress("glRenderbufferStorageMultisampleANGLE"));
  } else if (ext.b_GL_EXT_framebuffer_multisample) {
    fn.glRenderbufferStorageMultisampleFn =
        reinterpret_cast<glRenderbufferStorageMultisampleProc>(
            GetVendorGLProcAddress("glRenderbufferStorageMultisampleEXT"));
  }

  if (ext.b_GL_EXT_multisampled_render_to_texture) {
    fn.glRenderbufferStorageMultisampleEXTFn =
        reinterpret_cast<glRenderbufferStorageMultisampleEXTProc>(
            GetVendorGLProcAddress("glRenderbufferStorageMultisampleEXT"));
  } else if (ext.b_GL_IMG_multisampled_render_to_texture) {
    fn.glRenderbufferStorageMultisampleEXTFn =
        reinterpret_cast<glRenderbufferStorageMultisampleEXTProc>(
            GetVendorGLProcAddress("glRenderbufferStorageMultisampleIMG"));
  }

  if (ext.b_GL_ANGLE_request_extension) {
    fn.glRequestExtensionANGLEFn =
        reinterpret_cast<glRequestExtensionANGLEProc>(
            GetVendorGLProcAddress("glRequestExtensionANGLE"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(4u, 0u) ||
      ext.b_GL_ARB_transform_feedback2) {
    fn.glResumeTransformFeedbackFn =
        reinterpret_cast<glResumeTransformFeedbackProc>(
            GetVendorGLProcAddress("glResumeTransformFeedback"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glSamplerParameterfFn = reinterpret_cast<glSamplerParameterfProc>(
        GetVendorGLProcAddress("glSamplerParameterf"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glSamplerParameterfvFn = reinterpret_cast<glSamplerParameterfvProc>(
        GetVendorGLProcAddress("glSamplerParameterfv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glSamplerParameterfvRobustANGLEFn =
        reinterpret_cast<glSamplerParameterfvRobustANGLEProc>(
            GetVendorGLProcAddress("glSamplerParameterfvRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glSamplerParameteriFn = reinterpret_cast<glSamplerParameteriProc>(
        GetVendorGLProcAddress("glSamplerParameteri"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glSamplerParameterIivRobustANGLEFn =
        reinterpret_cast<glSamplerParameterIivRobustANGLEProc>(
            GetVendorGLProcAddress("glSamplerParameterIivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glSamplerParameterIuivRobustANGLEFn =
        reinterpret_cast<glSamplerParameterIuivRobustANGLEProc>(
            GetVendorGLProcAddress("glSamplerParameterIuivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sampler_objects) {
    fn.glSamplerParameterivFn = reinterpret_cast<glSamplerParameterivProc>(
        GetVendorGLProcAddress("glSamplerParameteriv"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glSamplerParameterivRobustANGLEFn =
        reinterpret_cast<glSamplerParameterivRobustANGLEProc>(
            GetVendorGLProcAddress("glSamplerParameterivRobustANGLE"));
  }

  if (ext.b_GL_APPLE_fence) {
    fn.glSetFenceAPPLEFn = reinterpret_cast<glSetFenceAPPLEProc>(
        GetVendorGLProcAddress("glSetFenceAPPLE"));
  }

  if (ext.b_GL_NV_fence) {
    fn.glSetFenceNVFn =
        reinterpret_cast<glSetFenceNVProc>(GetVendorGLProcAddress("glSetFenceNV"));
  }

  if (ver->IsAtLeastGL(4u, 1u) || ver->is_es) {
    fn.glShaderBinaryFn = reinterpret_cast<glShaderBinaryProc>(
        GetVendorGLProcAddress("glShaderBinary"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glStencilFillPathInstancedNVFn =
        reinterpret_cast<glStencilFillPathInstancedNVProc>(
            GetVendorGLProcAddress("glStencilFillPathInstancedNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glStencilFillPathNVFn = reinterpret_cast<glStencilFillPathNVProc>(
        GetVendorGLProcAddress("glStencilFillPathNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glStencilStrokePathInstancedNVFn =
        reinterpret_cast<glStencilStrokePathInstancedNVProc>(
            GetVendorGLProcAddress("glStencilStrokePathInstancedNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glStencilStrokePathNVFn = reinterpret_cast<glStencilStrokePathNVProc>(
        GetVendorGLProcAddress("glStencilStrokePathNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glStencilThenCoverFillPathInstancedNVFn =
        reinterpret_cast<glStencilThenCoverFillPathInstancedNVProc>(
            GetVendorGLProcAddress("glStencilThenCoverFillPathInstancedNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glStencilThenCoverFillPathNVFn =
        reinterpret_cast<glStencilThenCoverFillPathNVProc>(
            GetVendorGLProcAddress("glStencilThenCoverFillPathNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glStencilThenCoverStrokePathInstancedNVFn =
        reinterpret_cast<glStencilThenCoverStrokePathInstancedNVProc>(
            GetVendorGLProcAddress("glStencilThenCoverStrokePathInstancedNV"));
  }

  if (ext.b_GL_NV_path_rendering) {
    fn.glStencilThenCoverStrokePathNVFn =
        reinterpret_cast<glStencilThenCoverStrokePathNVProc>(
            GetVendorGLProcAddress("glStencilThenCoverStrokePathNV"));
  }

  if (ext.b_GL_APPLE_fence) {
    fn.glTestFenceAPPLEFn = reinterpret_cast<glTestFenceAPPLEProc>(
        GetVendorGLProcAddress("glTestFenceAPPLE"));
  }

  if (ext.b_GL_NV_fence) {
    fn.glTestFenceNVFn =
        reinterpret_cast<glTestFenceNVProc>(GetVendorGLProcAddress("glTestFenceNV"));
  }

  if (ver->IsAtLeastGLES(3u, 2u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glTexBufferFn =
        reinterpret_cast<glTexBufferProc>(GetVendorGLProcAddress("glTexBuffer"));
  } else if (ext.b_GL_OES_texture_buffer) {
    fn.glTexBufferFn =
        reinterpret_cast<glTexBufferProc>(GetVendorGLProcAddress("glTexBufferOES"));
  } else if (ext.b_GL_EXT_texture_buffer_object ||
             ext.b_GL_EXT_texture_buffer) {
    fn.glTexBufferFn =
        reinterpret_cast<glTexBufferProc>(GetVendorGLProcAddress("glTexBufferEXT"));
  }

  if (ver->IsAtLeastGL(4u, 3u) || ver->IsAtLeastGLES(3u, 2u)) {
    fn.glTexBufferRangeFn = reinterpret_cast<glTexBufferRangeProc>(
        GetVendorGLProcAddress("glTexBufferRange"));
  } else if (ext.b_GL_OES_texture_buffer) {
    fn.glTexBufferRangeFn = reinterpret_cast<glTexBufferRangeProc>(
        GetVendorGLProcAddress("glTexBufferRangeOES"));
  } else if (ext.b_GL_EXT_texture_buffer) {
    fn.glTexBufferRangeFn = reinterpret_cast<glTexBufferRangeProc>(
        GetVendorGLProcAddress("glTexBufferRangeEXT"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glTexImage2DRobustANGLEFn =
        reinterpret_cast<glTexImage2DRobustANGLEProc>(
            GetVendorGLProcAddress("glTexImage2DRobustANGLE"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glTexImage3DFn =
        reinterpret_cast<glTexImage3DProc>(GetVendorGLProcAddress("glTexImage3D"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glTexImage3DRobustANGLEFn =
        reinterpret_cast<glTexImage3DRobustANGLEProc>(
            GetVendorGLProcAddress("glTexImage3DRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glTexParameterfvRobustANGLEFn =
        reinterpret_cast<glTexParameterfvRobustANGLEProc>(
            GetVendorGLProcAddress("glTexParameterfvRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glTexParameterIivRobustANGLEFn =
        reinterpret_cast<glTexParameterIivRobustANGLEProc>(
            GetVendorGLProcAddress("glTexParameterIivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glTexParameterIuivRobustANGLEFn =
        reinterpret_cast<glTexParameterIuivRobustANGLEProc>(
            GetVendorGLProcAddress("glTexParameterIuivRobustANGLE"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glTexParameterivRobustANGLEFn =
        reinterpret_cast<glTexParameterivRobustANGLEProc>(
            GetVendorGLProcAddress("glTexParameterivRobustANGLE"));
  }

  if (ver->IsAtLeastGL(4u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_texture_storage) {
    fn.glTexStorage2DEXTFn = reinterpret_cast<glTexStorage2DEXTProc>(
        GetVendorGLProcAddress("glTexStorage2D"));
  } else if (ext.b_GL_EXT_texture_storage) {
    fn.glTexStorage2DEXTFn = reinterpret_cast<glTexStorage2DEXTProc>(
        GetVendorGLProcAddress("glTexStorage2DEXT"));
  }

  if (ver->IsAtLeastGL(4u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_texture_storage) {
    fn.glTexStorage3DFn = reinterpret_cast<glTexStorage3DProc>(
        GetVendorGLProcAddress("glTexStorage3D"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glTexSubImage2DRobustANGLEFn =
        reinterpret_cast<glTexSubImage2DRobustANGLEProc>(
            GetVendorGLProcAddress("glTexSubImage2DRobustANGLE"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glTexSubImage3DFn = reinterpret_cast<glTexSubImage3DProc>(
        GetVendorGLProcAddress("glTexSubImage3D"));
  }

  if (ext.b_GL_ANGLE_robust_client_memory) {
    fn.glTexSubImage3DRobustANGLEFn =
        reinterpret_cast<glTexSubImage3DRobustANGLEProc>(
            GetVendorGLProcAddress("glTexSubImage3DRobustANGLE"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glTransformFeedbackVaryingsFn =
        reinterpret_cast<glTransformFeedbackVaryingsProc>(
            GetVendorGLProcAddress("glTransformFeedbackVaryings"));
  } else if (ext.b_GL_EXT_transform_feedback) {
    fn.glTransformFeedbackVaryingsFn =
        reinterpret_cast<glTransformFeedbackVaryingsProc>(
            GetVendorGLProcAddress("glTransformFeedbackVaryingsEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniform1uiFn =
        reinterpret_cast<glUniform1uiProc>(GetVendorGLProcAddress("glUniform1ui"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniform1uivFn =
        reinterpret_cast<glUniform1uivProc>(GetVendorGLProcAddress("glUniform1uiv"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniform2uiFn =
        reinterpret_cast<glUniform2uiProc>(GetVendorGLProcAddress("glUniform2ui"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniform2uivFn =
        reinterpret_cast<glUniform2uivProc>(GetVendorGLProcAddress("glUniform2uiv"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniform3uiFn =
        reinterpret_cast<glUniform3uiProc>(GetVendorGLProcAddress("glUniform3ui"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniform3uivFn =
        reinterpret_cast<glUniform3uivProc>(GetVendorGLProcAddress("glUniform3uiv"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniform4uiFn =
        reinterpret_cast<glUniform4uiProc>(GetVendorGLProcAddress("glUniform4ui"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniform4uivFn =
        reinterpret_cast<glUniform4uivProc>(GetVendorGLProcAddress("glUniform4uiv"));
  }

  if (ver->IsAtLeastGLES(3u, 0u) || ver->IsAtLeastGL(3u, 1u)) {
    fn.glUniformBlockBindingFn = reinterpret_cast<glUniformBlockBindingProc>(
        GetVendorGLProcAddress("glUniformBlockBinding"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniformMatrix2x3fvFn = reinterpret_cast<glUniformMatrix2x3fvProc>(
        GetVendorGLProcAddress("glUniformMatrix2x3fv"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniformMatrix2x4fvFn = reinterpret_cast<glUniformMatrix2x4fvProc>(
        GetVendorGLProcAddress("glUniformMatrix2x4fv"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniformMatrix3x2fvFn = reinterpret_cast<glUniformMatrix3x2fvProc>(
        GetVendorGLProcAddress("glUniformMatrix3x2fv"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniformMatrix3x4fvFn = reinterpret_cast<glUniformMatrix3x4fvProc>(
        GetVendorGLProcAddress("glUniformMatrix3x4fv"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniformMatrix4x2fvFn = reinterpret_cast<glUniformMatrix4x2fvProc>(
        GetVendorGLProcAddress("glUniformMatrix4x2fv"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUniformMatrix4x3fvFn = reinterpret_cast<glUniformMatrix4x3fvProc>(
        GetVendorGLProcAddress("glUniformMatrix4x3fv"));
  }

  if (!ver->is_es || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glUnmapBufferFn =
        reinterpret_cast<glUnmapBufferProc>(GetVendorGLProcAddress("glUnmapBuffer"));
  } else if (ext.b_GL_OES_mapbuffer) {
    fn.glUnmapBufferFn = reinterpret_cast<glUnmapBufferProc>(
        GetVendorGLProcAddress("glUnmapBufferOES"));
  }

  if (ver->IsAtLeastGL(3u, 3u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glVertexAttribDivisorANGLEFn =
        reinterpret_cast<glVertexAttribDivisorANGLEProc>(
            GetVendorGLProcAddress("glVertexAttribDivisor"));
  } else if (ext.b_GL_ARB_instanced_arrays) {
    fn.glVertexAttribDivisorANGLEFn =
        reinterpret_cast<glVertexAttribDivisorANGLEProc>(
            GetVendorGLProcAddress("glVertexAttribDivisorARB"));
  } else if (ext.b_GL_ANGLE_instanced_arrays) {
    fn.glVertexAttribDivisorANGLEFn =
        reinterpret_cast<glVertexAttribDivisorANGLEProc>(
            GetVendorGLProcAddress("glVertexAttribDivisorANGLE"));
  } else if (ext.b_GL_EXT_instanced_arrays) {
    fn.glVertexAttribDivisorANGLEFn =
        reinterpret_cast<glVertexAttribDivisorANGLEProc>(
            GetVendorGLProcAddress("glVertexAttribDivisorEXT"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glVertexAttribI4iFn = reinterpret_cast<glVertexAttribI4iProc>(
        GetVendorGLProcAddress("glVertexAttribI4i"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glVertexAttribI4ivFn = reinterpret_cast<glVertexAttribI4ivProc>(
        GetVendorGLProcAddress("glVertexAttribI4iv"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glVertexAttribI4uiFn = reinterpret_cast<glVertexAttribI4uiProc>(
        GetVendorGLProcAddress("glVertexAttribI4ui"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glVertexAttribI4uivFn = reinterpret_cast<glVertexAttribI4uivProc>(
        GetVendorGLProcAddress("glVertexAttribI4uiv"));
  }

  if (ver->IsAtLeastGL(3u, 0u) || ver->IsAtLeastGLES(3u, 0u)) {
    fn.glVertexAttribIPointerFn = reinterpret_cast<glVertexAttribIPointerProc>(
        GetVendorGLProcAddress("glVertexAttribIPointer"));
  }

  if (ver->IsAtLeastGL(3u, 2u) || ver->IsAtLeastGLES(3u, 0u) ||
      ext.b_GL_ARB_sync) {
    fn.glWaitSyncFn =
        reinterpret_cast<glWaitSyncProc>(GetVendorGLProcAddress("glWaitSync"));
  }

  if (ext.b_GL_EXT_window_rectangles) {
    fn.glWindowRectanglesEXTFn = reinterpret_cast<glWindowRectanglesEXTProc>(
        GetVendorGLProcAddress("glWindowRectanglesEXT"));
  }
}

void VendorGL::ClearBindings() {
  memset(this, 0, sizeof(*this));
}

VendorGLAPI::VendorGLAPI() {
}

VendorGLAPI::~VendorGLAPI() {
}

void VendorGLAPI::Initialize(VendorGL* driver) {
  driver_ = driver;
}

#include "gpu/command_buffer/service/vendor_gl_autogen.h"

}  
