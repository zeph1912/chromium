// Copyright (c) 2018 University of California, Irvine. All rights reserved.
// Authors: Zhihao Yao, Ardalan Amiri Sani
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "gpu/command_buffer/service/milko_prints.h"

void VendorGLAPI::glActiveTextureFn(GLenum texture) {
  driver_->fn.glActiveTextureFn(texture);
}

void VendorGLAPI::glApplyFramebufferAttachmentCMAAINTELFn(void) {
  driver_->fn.glApplyFramebufferAttachmentCMAAINTELFn();
}

void VendorGLAPI::glAttachShaderFn(GLuint program, GLuint shader) {
  driver_->fn.glAttachShaderFn(program, shader);
}

void VendorGLAPI::glBeginQueryFn(GLenum target, GLuint id) {
  driver_->fn.glBeginQueryFn(target, id);
}

void VendorGLAPI::glBeginTransformFeedbackFn(GLenum primitiveMode) {
  driver_->fn.glBeginTransformFeedbackFn(primitiveMode);
}

void VendorGLAPI::glBindAttribLocationFn(GLuint program,
                                       GLuint index,
                                       const char* name) {
  driver_->fn.glBindAttribLocationFn(program, index, name);
}

void VendorGLAPI::glBindBufferFn(GLenum target, GLuint buffer) {
  driver_->fn.glBindBufferFn(target, buffer);
}

void VendorGLAPI::glBindBufferBaseFn(GLenum target, GLuint index, GLuint buffer) {
  driver_->fn.glBindBufferBaseFn(target, index, buffer);
}

void VendorGLAPI::glBindBufferRangeFn(GLenum target,
                                    GLuint index,
                                    GLuint buffer,
                                    GLintptr offset,
                                    GLsizeiptr size) {
  driver_->fn.glBindBufferRangeFn(target, index, buffer, offset, size);
}

void VendorGLAPI::glBindFragDataLocationFn(GLuint program,
                                         GLuint colorNumber,
                                         const char* name) {
  driver_->fn.glBindFragDataLocationFn(program, colorNumber, name);
}

void VendorGLAPI::glBindFragDataLocationIndexedFn(GLuint program,
                                                GLuint colorNumber,
                                                GLuint index,
                                                const char* name) {
  driver_->fn.glBindFragDataLocationIndexedFn(program, colorNumber, index,
                                              name);
}

void VendorGLAPI::glBindFramebufferEXTFn(GLenum target, GLuint framebuffer) {
  driver_->fn.glBindFramebufferEXTFn(target, framebuffer);
}

void VendorGLAPI::glBindImageTextureEXTFn(GLuint index,
                                        GLuint texture,
                                        GLint level,
                                        GLboolean layered,
                                        GLint layer,
                                        GLenum access,
                                        GLint format) {
  driver_->fn.glBindImageTextureEXTFn(index, texture, level, layered, layer,
                                      access, format);
}

void VendorGLAPI::glBindRenderbufferEXTFn(GLenum target, GLuint renderbuffer) {
  driver_->fn.glBindRenderbufferEXTFn(target, renderbuffer);
}

void VendorGLAPI::glBindSamplerFn(GLuint unit, GLuint sampler) {
  driver_->fn.glBindSamplerFn(unit, sampler);
}

void VendorGLAPI::glBindTextureFn(GLenum target, GLuint texture) {
  driver_->fn.glBindTextureFn(target, texture);
}

void VendorGLAPI::glBindTransformFeedbackFn(GLenum target, GLuint id) {
  driver_->fn.glBindTransformFeedbackFn(target, id);
}

void VendorGLAPI::glBindUniformLocationCHROMIUMFn(GLuint program,
                                                GLint location,
                                                const char* name) {
  driver_->fn.glBindUniformLocationCHROMIUMFn(program, location, name);
}

void VendorGLAPI::glBindVertexArrayOESFn(GLuint array) {
  driver_->fn.glBindVertexArrayOESFn(array);
}

void VendorGLAPI::glBlendBarrierKHRFn(void) {
  driver_->fn.glBlendBarrierKHRFn();
}

void VendorGLAPI::glBlendColorFn(GLclampf red,
                               GLclampf green,
                               GLclampf blue,
                               GLclampf alpha) {
  driver_->fn.glBlendColorFn(red, green, blue, alpha);
}

void VendorGLAPI::glBlendEquationFn(GLenum mode) {
  driver_->fn.glBlendEquationFn(mode);
}

void VendorGLAPI::glBlendEquationSeparateFn(GLenum modeRGB, GLenum modeAlpha) {
  driver_->fn.glBlendEquationSeparateFn(modeRGB, modeAlpha);
}

void VendorGLAPI::glBlendFuncFn(GLenum sfactor, GLenum dfactor) {
  driver_->fn.glBlendFuncFn(sfactor, dfactor);
}

void VendorGLAPI::glBlendFuncSeparateFn(GLenum srcRGB,
                                      GLenum dstRGB,
                                      GLenum srcAlpha,
                                      GLenum dstAlpha) {
  driver_->fn.glBlendFuncSeparateFn(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

void VendorGLAPI::glBlitFramebufferFn(GLint srcX0,
                                    GLint srcY0,
                                    GLint srcX1,
                                    GLint srcY1,
                                    GLint dstX0,
                                    GLint dstY0,
                                    GLint dstX1,
                                    GLint dstY1,
                                    GLbitfield mask,
                                    GLenum filter) {
  driver_->fn.glBlitFramebufferFn(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0,
                                  dstX1, dstY1, mask, filter);
}

void VendorGLAPI::glBufferDataFn(GLenum target,
                               GLsizeiptr size,
                               const void* data,
                               GLenum usage) {
  driver_->fn.glBufferDataFn(target, size, data, usage);
}

void VendorGLAPI::glBufferSubDataFn(GLenum target,
                                  GLintptr offset,
                                  GLsizeiptr size,
                                  const void* data) {
  driver_->fn.glBufferSubDataFn(target, offset, size, data);
}

GLenum VendorGLAPI::glCheckFramebufferStatusEXTFn(GLenum target) {
  return driver_->fn.glCheckFramebufferStatusEXTFn(target);
}

void VendorGLAPI::glClearFn(GLbitfield mask) {
  driver_->fn.glClearFn(mask);
}

void VendorGLAPI::glClearBufferfiFn(GLenum buffer,
                                  GLint drawbuffer,
                                  const GLfloat depth,
                                  GLint stencil) {
  driver_->fn.glClearBufferfiFn(buffer, drawbuffer, depth, stencil);
}

void VendorGLAPI::glClearBufferfvFn(GLenum buffer,
                                  GLint drawbuffer,
                                  const GLfloat* value) {
  driver_->fn.glClearBufferfvFn(buffer, drawbuffer, value);
}

void VendorGLAPI::glClearBufferivFn(GLenum buffer,
                                  GLint drawbuffer,
                                  const GLint* value) {
  driver_->fn.glClearBufferivFn(buffer, drawbuffer, value);
}

void VendorGLAPI::glClearBufferuivFn(GLenum buffer,
                                   GLint drawbuffer,
                                   const GLuint* value) {
  driver_->fn.glClearBufferuivFn(buffer, drawbuffer, value);
}

void VendorGLAPI::glClearColorFn(GLclampf red,
                               GLclampf green,
                               GLclampf blue,
                               GLclampf alpha) {
  driver_->fn.glClearColorFn(red, green, blue, alpha);
}

void VendorGLAPI::glClearDepthFn(GLclampd depth) {
  driver_->fn.glClearDepthFn(depth);
}

void VendorGLAPI::glClearDepthfFn(GLclampf depth) {
  driver_->fn.glClearDepthfFn(depth);
}

void VendorGLAPI::glClearStencilFn(GLint s) {
  driver_->fn.glClearStencilFn(s);
}

GLenum VendorGLAPI::glClientWaitSyncFn(GLsync sync,
                                     GLbitfield flags,
                                     GLuint64 timeout) {
  return driver_->fn.glClientWaitSyncFn(sync, flags, timeout);
}

void VendorGLAPI::glColorMaskFn(GLboolean red,
                              GLboolean green,
                              GLboolean blue,
                              GLboolean alpha) {
  driver_->fn.glColorMaskFn(red, green, blue, alpha);
}

void VendorGLAPI::glCompileShaderFn(GLuint shader) {
  driver_->fn.glCompileShaderFn(shader);
}

void VendorGLAPI::glCompressedCopyTextureCHROMIUMFn(GLuint sourceId,
                                                  GLuint destId) {
  driver_->fn.glCompressedCopyTextureCHROMIUMFn(sourceId, destId);
}

void VendorGLAPI::glCompressedTexImage2DFn(GLenum target,
                                         GLint level,
                                         GLenum internalformat,
                                         GLsizei width,
                                         GLsizei height,
                                         GLint border,
                                         GLsizei imageSize,
                                         const void* data) {
  driver_->fn.glCompressedTexImage2DFn(target, level, internalformat, width,
                                       height, border, imageSize, data);
}

void VendorGLAPI::glCompressedTexImage2DRobustANGLEFn(GLenum target,
                                                    GLint level,
                                                    GLenum internalformat,
                                                    GLsizei width,
                                                    GLsizei height,
                                                    GLint border,
                                                    GLsizei imageSize,
                                                    GLsizei dataSize,
                                                    const void* data) {
  driver_->fn.glCompressedTexImage2DRobustANGLEFn(target, level, internalformat,
                                                  width, height, border,
                                                  imageSize, dataSize, data);
}

void VendorGLAPI::glCompressedTexImage3DFn(GLenum target,
                                         GLint level,
                                         GLenum internalformat,
                                         GLsizei width,
                                         GLsizei height,
                                         GLsizei depth,
                                         GLint border,
                                         GLsizei imageSize,
                                         const void* data) {
  driver_->fn.glCompressedTexImage3DFn(target, level, internalformat, width,
                                       height, depth, border, imageSize, data);
}

void VendorGLAPI::glCompressedTexImage3DRobustANGLEFn(GLenum target,
                                                    GLint level,
                                                    GLenum internalformat,
                                                    GLsizei width,
                                                    GLsizei height,
                                                    GLsizei depth,
                                                    GLint border,
                                                    GLsizei imageSize,
                                                    GLsizei dataSize,
                                                    const void* data) {
  driver_->fn.glCompressedTexImage3DRobustANGLEFn(target, level, internalformat,
                                                  width, height, depth, border,
                                                  imageSize, dataSize, data);
}

void VendorGLAPI::glCompressedTexSubImage2DFn(GLenum target,
                                            GLint level,
                                            GLint xoffset,
                                            GLint yoffset,
                                            GLsizei width,
                                            GLsizei height,
                                            GLenum format,
                                            GLsizei imageSize,
                                            const void* data) {
  driver_->fn.glCompressedTexSubImage2DFn(
      target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

void VendorGLAPI::glCompressedTexSubImage2DRobustANGLEFn(GLenum target,
                                                       GLint level,
                                                       GLint xoffset,
                                                       GLint yoffset,
                                                       GLsizei width,
                                                       GLsizei height,
                                                       GLenum format,
                                                       GLsizei imageSize,
                                                       GLsizei dataSize,
                                                       const void* data) {
  driver_->fn.glCompressedTexSubImage2DRobustANGLEFn(
      target, level, xoffset, yoffset, width, height, format, imageSize,
      dataSize, data);
}

void VendorGLAPI::glCompressedTexSubImage3DFn(GLenum target,
                                            GLint level,
                                            GLint xoffset,
                                            GLint yoffset,
                                            GLint zoffset,
                                            GLsizei width,
                                            GLsizei height,
                                            GLsizei depth,
                                            GLenum format,
                                            GLsizei imageSize,
                                            const void* data) {
  driver_->fn.glCompressedTexSubImage3DFn(target, level, xoffset, yoffset,
                                          zoffset, width, height, depth, format,
                                          imageSize, data);
}

void VendorGLAPI::glCompressedTexSubImage3DRobustANGLEFn(GLenum target,
                                                       GLint level,
                                                       GLint xoffset,
                                                       GLint yoffset,
                                                       GLint zoffset,
                                                       GLsizei width,
                                                       GLsizei height,
                                                       GLsizei depth,
                                                       GLenum format,
                                                       GLsizei imageSize,
                                                       GLsizei dataSize,
                                                       const void* data) {
  driver_->fn.glCompressedTexSubImage3DRobustANGLEFn(
      target, level, xoffset, yoffset, zoffset, width, height, depth, format,
      imageSize, dataSize, data);
}

void VendorGLAPI::glCopyBufferSubDataFn(GLenum readTarget,
                                      GLenum writeTarget,
                                      GLintptr readOffset,
                                      GLintptr writeOffset,
                                      GLsizeiptr size) {
  driver_->fn.glCopyBufferSubDataFn(readTarget, writeTarget, readOffset,
                                    writeOffset, size);
}

void VendorGLAPI::glCopySubTextureCHROMIUMFn(GLuint sourceId,
                                           GLint sourceLevel,
                                           GLenum destTarget,
                                           GLuint destId,
                                           GLint destLevel,
                                           GLint xoffset,
                                           GLint yoffset,
                                           GLint x,
                                           GLint y,
                                           GLsizei width,
                                           GLsizei height,
                                           GLboolean unpackFlipY,
                                           GLboolean unpackPremultiplyAlpha,
                                           GLboolean unpackUnmultiplyAlpha) {
  driver_->fn.glCopySubTextureCHROMIUMFn(
      sourceId, sourceLevel, destTarget, destId, destLevel, xoffset, yoffset, x,
      y, width, height, unpackFlipY, unpackPremultiplyAlpha,
      unpackUnmultiplyAlpha);
}

void VendorGLAPI::glCopyTexImage2DFn(GLenum target,
                                   GLint level,
                                   GLenum internalformat,
                                   GLint x,
                                   GLint y,
                                   GLsizei width,
                                   GLsizei height,
                                   GLint border) {
  driver_->fn.glCopyTexImage2DFn(target, level, internalformat, x, y, width,
                                 height, border);
}

void VendorGLAPI::glCopyTexSubImage2DFn(GLenum target,
                                      GLint level,
                                      GLint xoffset,
                                      GLint yoffset,
                                      GLint x,
                                      GLint y,
                                      GLsizei width,
                                      GLsizei height) {
  driver_->fn.glCopyTexSubImage2DFn(target, level, xoffset, yoffset, x, y,
                                    width, height);
}

void VendorGLAPI::glCopyTexSubImage3DFn(GLenum target,
                                      GLint level,
                                      GLint xoffset,
                                      GLint yoffset,
                                      GLint zoffset,
                                      GLint x,
                                      GLint y,
                                      GLsizei width,
                                      GLsizei height) {
  driver_->fn.glCopyTexSubImage3DFn(target, level, xoffset, yoffset, zoffset, x,
                                    y, width, height);
}

void VendorGLAPI::glCopyTextureCHROMIUMFn(GLuint sourceId,
                                        GLint sourceLevel,
                                        GLenum destTarget,
                                        GLuint destId,
                                        GLint destLevel,
                                        GLint internalFormat,
                                        GLenum destType,
                                        GLboolean unpackFlipY,
                                        GLboolean unpackPremultiplyAlpha,
                                        GLboolean unpackUnmultiplyAlpha) {
  driver_->fn.glCopyTextureCHROMIUMFn(
      sourceId, sourceLevel, destTarget, destId, destLevel, internalFormat,
      destType, unpackFlipY, unpackPremultiplyAlpha, unpackUnmultiplyAlpha);
}

void VendorGLAPI::glCoverageModulationNVFn(GLenum components) {
  driver_->fn.glCoverageModulationNVFn(components);
}

void VendorGLAPI::glCoverFillPathInstancedNVFn(GLsizei numPaths,
                                             GLenum pathNameType,
                                             const void* paths,
                                             GLuint pathBase,
                                             GLenum coverMode,
                                             GLenum transformType,
                                             const GLfloat* transformValues) {
  driver_->fn.glCoverFillPathInstancedNVFn(numPaths, pathNameType, paths,
                                           pathBase, coverMode, transformType,
                                           transformValues);
}

void VendorGLAPI::glCoverFillPathNVFn(GLuint path, GLenum coverMode) {
  driver_->fn.glCoverFillPathNVFn(path, coverMode);
}

void VendorGLAPI::glCoverStrokePathInstancedNVFn(GLsizei numPaths,
                                               GLenum pathNameType,
                                               const void* paths,
                                               GLuint pathBase,
                                               GLenum coverMode,
                                               GLenum transformType,
                                               const GLfloat* transformValues) {
  driver_->fn.glCoverStrokePathInstancedNVFn(numPaths, pathNameType, paths,
                                             pathBase, coverMode, transformType,
                                             transformValues);
}

void VendorGLAPI::glCoverStrokePathNVFn(GLuint name, GLenum coverMode) {
  driver_->fn.glCoverStrokePathNVFn(name, coverMode);
}

GLuint VendorGLAPI::glCreateProgramFn(void) {
  return driver_->fn.glCreateProgramFn();
}

GLuint VendorGLAPI::glCreateShaderFn(GLenum type) {
  return driver_->fn.glCreateShaderFn(type);
}

void VendorGLAPI::glCullFaceFn(GLenum mode) {
  driver_->fn.glCullFaceFn(mode);
}

void VendorGLAPI::glDebugMessageCallbackFn(GLDEBUGPROC callback,
                                         const void* userParam) {
  driver_->fn.glDebugMessageCallbackFn(callback, userParam);
}

void VendorGLAPI::glDebugMessageControlFn(GLenum source,
                                        GLenum type,
                                        GLenum severity,
                                        GLsizei count,
                                        const GLuint* ids,
                                        GLboolean enabled) {
  driver_->fn.glDebugMessageControlFn(source, type, severity, count, ids,
                                      enabled);
}

void VendorGLAPI::glDebugMessageInsertFn(GLenum source,
                                       GLenum type,
                                       GLuint id,
                                       GLenum severity,
                                       GLsizei length,
                                       const char* buf) {
  driver_->fn.glDebugMessageInsertFn(source, type, id, severity, length, buf);
}

void VendorGLAPI::glDeleteBuffersARBFn(GLsizei n, const GLuint* buffers) {
  driver_->fn.glDeleteBuffersARBFn(n, buffers);
}

void VendorGLAPI::glDeleteFencesAPPLEFn(GLsizei n, const GLuint* fences) {
  driver_->fn.glDeleteFencesAPPLEFn(n, fences);
}

void VendorGLAPI::glDeleteFencesNVFn(GLsizei n, const GLuint* fences) {
  driver_->fn.glDeleteFencesNVFn(n, fences);
}

void VendorGLAPI::glDeleteFramebuffersEXTFn(GLsizei n,
                                          const GLuint* framebuffers) {
  driver_->fn.glDeleteFramebuffersEXTFn(n, framebuffers);
}

void VendorGLAPI::glDeletePathsNVFn(GLuint path, GLsizei range) {
  driver_->fn.glDeletePathsNVFn(path, range);
}

void VendorGLAPI::glDeleteProgramFn(GLuint program) {
  driver_->fn.glDeleteProgramFn(program);
}

void VendorGLAPI::glDeleteQueriesFn(GLsizei n, const GLuint* ids) {
  driver_->fn.glDeleteQueriesFn(n, ids);
}

void VendorGLAPI::glDeleteRenderbuffersEXTFn(GLsizei n,
                                           const GLuint* renderbuffers) {
  driver_->fn.glDeleteRenderbuffersEXTFn(n, renderbuffers);
}

void VendorGLAPI::glDeleteSamplersFn(GLsizei n, const GLuint* samplers) {
  driver_->fn.glDeleteSamplersFn(n, samplers);
}

void VendorGLAPI::glDeleteShaderFn(GLuint shader) {
  driver_->fn.glDeleteShaderFn(shader);
}

void VendorGLAPI::glDeleteSyncFn(GLsync sync) {
  driver_->fn.glDeleteSyncFn(sync);
}

void VendorGLAPI::glDeleteTexturesFn(GLsizei n, const GLuint* textures) {
  driver_->fn.glDeleteTexturesFn(n, textures);
}

void VendorGLAPI::glDeleteTransformFeedbacksFn(GLsizei n, const GLuint* ids) {
  driver_->fn.glDeleteTransformFeedbacksFn(n, ids);
}

void VendorGLAPI::glDeleteVertexArraysOESFn(GLsizei n, const GLuint* arrays) {
  driver_->fn.glDeleteVertexArraysOESFn(n, arrays);
}

void VendorGLAPI::glDepthFuncFn(GLenum func) {
  driver_->fn.glDepthFuncFn(func);
}

void VendorGLAPI::glDepthMaskFn(GLboolean flag) {
  driver_->fn.glDepthMaskFn(flag);
}

void VendorGLAPI::glDepthRangeFn(GLclampd zNear, GLclampd zFar) {
  driver_->fn.glDepthRangeFn(zNear, zFar);
}

void VendorGLAPI::glDepthRangefFn(GLclampf zNear, GLclampf zFar) {
  driver_->fn.glDepthRangefFn(zNear, zFar);
}

void VendorGLAPI::glDetachShaderFn(GLuint program, GLuint shader) {
  driver_->fn.glDetachShaderFn(program, shader);
}

void VendorGLAPI::glDisableFn(GLenum cap) {
  driver_->fn.glDisableFn(cap);
}

void VendorGLAPI::glDisableVertexAttribArrayFn(GLuint index) {
  driver_->fn.glDisableVertexAttribArrayFn(index);
}

void VendorGLAPI::glDiscardFramebufferEXTFn(GLenum target,
                                          GLsizei numAttachments,
                                          const GLenum* attachments) {
  driver_->fn.glDiscardFramebufferEXTFn(target, numAttachments, attachments);
}

void VendorGLAPI::glDrawArraysFn(GLenum mode, GLint first, GLsizei count) {
  driver_->fn.glDrawArraysFn(mode, first, count);
}

void VendorGLAPI::glDrawArraysInstancedANGLEFn(GLenum mode,
                                             GLint first,
                                             GLsizei count,
                                             GLsizei primcount) {
  driver_->fn.glDrawArraysInstancedANGLEFn(mode, first, count, primcount);
}

void VendorGLAPI::glDrawBufferFn(GLenum mode) {
  driver_->fn.glDrawBufferFn(mode);
}

void VendorGLAPI::glDrawBuffersARBFn(GLsizei n, const GLenum* bufs) {
  driver_->fn.glDrawBuffersARBFn(n, bufs);
}

void VendorGLAPI::glDrawElementsFn(GLenum mode,
                                 GLsizei count,
                                 GLenum type,
                                 const void* indices) {
  driver_->fn.glDrawElementsFn(mode, count, type, indices);
}

void VendorGLAPI::glDrawElementsInstancedANGLEFn(GLenum mode,
                                               GLsizei count,
                                               GLenum type,
                                               const void* indices,
                                               GLsizei primcount) {
  driver_->fn.glDrawElementsInstancedANGLEFn(mode, count, type, indices,
                                             primcount);
}

void VendorGLAPI::glDrawRangeElementsFn(GLenum mode,
                                      GLuint start,
                                      GLuint end,
                                      GLsizei count,
                                      GLenum type,
                                      const void* indices) {
  driver_->fn.glDrawRangeElementsFn(mode, start, end, count, type, indices);
}

void VendorGLAPI::glEGLImageTargetRenderbufferStorageOESFn(GLenum target,
                                                         GLeglImageOES image) {
  driver_->fn.glEGLImageTargetRenderbufferStorageOESFn(target, image);
}

void VendorGLAPI::glEGLImageTargetTexture2DOESFn(GLenum target,
                                               GLeglImageOES image) {
  driver_->fn.glEGLImageTargetTexture2DOESFn(target, image);
}

void VendorGLAPI::glEnableFn(GLenum cap) {
  driver_->fn.glEnableFn(cap);
}

void VendorGLAPI::glEnableVertexAttribArrayFn(GLuint index) {
  driver_->fn.glEnableVertexAttribArrayFn(index);
}

void VendorGLAPI::glEndQueryFn(GLenum target) {
  driver_->fn.glEndQueryFn(target);
}

void VendorGLAPI::glEndTransformFeedbackFn(void) {
  driver_->fn.glEndTransformFeedbackFn();
}

GLsync VendorGLAPI::glFenceSyncFn(GLenum condition, GLbitfield flags) {
  return driver_->fn.glFenceSyncFn(condition, flags);
}

void VendorGLAPI::glFinishFn(void) {
  driver_->fn.glFinishFn();
}

void VendorGLAPI::glFinishFenceAPPLEFn(GLuint fence) {
  driver_->fn.glFinishFenceAPPLEFn(fence);
}

void VendorGLAPI::glFinishFenceNVFn(GLuint fence) {
  driver_->fn.glFinishFenceNVFn(fence);
}

void VendorGLAPI::glFlushFn(void) {
  driver_->fn.glFlushFn();
}

void VendorGLAPI::glFlushMappedBufferRangeFn(GLenum target,
                                           GLintptr offset,
                                           GLsizeiptr length) {
  driver_->fn.glFlushMappedBufferRangeFn(target, offset, length);
}

void VendorGLAPI::glFramebufferRenderbufferEXTFn(GLenum target,
                                               GLenum attachment,
                                               GLenum renderbuffertarget,
                                               GLuint renderbuffer) {
  driver_->fn.glFramebufferRenderbufferEXTFn(target, attachment,
                                             renderbuffertarget, renderbuffer);
}

void VendorGLAPI::glFramebufferTexture2DEXTFn(GLenum target,
                                            GLenum attachment,
                                            GLenum textarget,
                                            GLuint texture,
                                            GLint level) {
  driver_->fn.glFramebufferTexture2DEXTFn(target, attachment, textarget,
                                          texture, level);
}

void VendorGLAPI::glFramebufferTexture2DMultisampleEXTFn(GLenum target,
                                                       GLenum attachment,
                                                       GLenum textarget,
                                                       GLuint texture,
                                                       GLint level,
                                                       GLsizei samples) {
  driver_->fn.glFramebufferTexture2DMultisampleEXTFn(
      target, attachment, textarget, texture, level, samples);
}

void VendorGLAPI::glFramebufferTextureLayerFn(GLenum target,
                                            GLenum attachment,
                                            GLuint texture,
                                            GLint level,
                                            GLint layer) {
  driver_->fn.glFramebufferTextureLayerFn(target, attachment, texture, level,
                                          layer);
}

void VendorGLAPI::glFrontFaceFn(GLenum mode) {
  driver_->fn.glFrontFaceFn(mode);
}

void VendorGLAPI::glGenBuffersARBFn(GLsizei n, GLuint* buffers) {
  driver_->fn.glGenBuffersARBFn(n, buffers);
}

void VendorGLAPI::glGenerateMipmapEXTFn(GLenum target) {
  driver_->fn.glGenerateMipmapEXTFn(target);
}

void VendorGLAPI::glGenFencesAPPLEFn(GLsizei n, GLuint* fences) {
  driver_->fn.glGenFencesAPPLEFn(n, fences);
}

void VendorGLAPI::glGenFencesNVFn(GLsizei n, GLuint* fences) {
  driver_->fn.glGenFencesNVFn(n, fences);
}

void VendorGLAPI::glGenFramebuffersEXTFn(GLsizei n, GLuint* framebuffers) {
  driver_->fn.glGenFramebuffersEXTFn(n, framebuffers);
}

GLuint VendorGLAPI::glGenPathsNVFn(GLsizei range) {
  return driver_->fn.glGenPathsNVFn(range);
}

void VendorGLAPI::glGenQueriesFn(GLsizei n, GLuint* ids) {
  driver_->fn.glGenQueriesFn(n, ids);
}

void VendorGLAPI::glGenRenderbuffersEXTFn(GLsizei n, GLuint* renderbuffers) {
  driver_->fn.glGenRenderbuffersEXTFn(n, renderbuffers);
}

void VendorGLAPI::glGenSamplersFn(GLsizei n, GLuint* samplers) {
  driver_->fn.glGenSamplersFn(n, samplers);
}

void VendorGLAPI::glGenTexturesFn(GLsizei n, GLuint* textures) {
  driver_->fn.glGenTexturesFn(n, textures);
}

void VendorGLAPI::glGenTransformFeedbacksFn(GLsizei n, GLuint* ids) {
  driver_->fn.glGenTransformFeedbacksFn(n, ids);
}

void VendorGLAPI::glGenVertexArraysOESFn(GLsizei n, GLuint* arrays) {
  driver_->fn.glGenVertexArraysOESFn(n, arrays);
}

void VendorGLAPI::glGetActiveAttribFn(GLuint program,
                                    GLuint index,
                                    GLsizei bufsize,
                                    GLsizei* length,
                                    GLint* size,
                                    GLenum* type,
                                    char* name) {
  driver_->fn.glGetActiveAttribFn(program, index, bufsize, length, size, type,
                                  name);
}

void VendorGLAPI::glGetActiveUniformFn(GLuint program,
                                     GLuint index,
                                     GLsizei bufsize,
                                     GLsizei* length,
                                     GLint* size,
                                     GLenum* type,
                                     char* name) {
  driver_->fn.glGetActiveUniformFn(program, index, bufsize, length, size, type,
                                   name);
}

void VendorGLAPI::glGetActiveUniformBlockivFn(GLuint program,
                                            GLuint uniformBlockIndex,
                                            GLenum pname,
                                            GLint* params) {
  driver_->fn.glGetActiveUniformBlockivFn(program, uniformBlockIndex, pname,
                                          params);
}

void VendorGLAPI::glGetActiveUniformBlockivRobustANGLEFn(GLuint program,
                                                       GLuint uniformBlockIndex,
                                                       GLenum pname,
                                                       GLsizei bufSize,
                                                       GLsizei* length,
                                                       GLint* params) {
  driver_->fn.glGetActiveUniformBlockivRobustANGLEFn(
      program, uniformBlockIndex, pname, bufSize, length, params);
}

void VendorGLAPI::glGetActiveUniformBlockNameFn(GLuint program,
                                              GLuint uniformBlockIndex,
                                              GLsizei bufSize,
                                              GLsizei* length,
                                              char* uniformBlockName) {
  driver_->fn.glGetActiveUniformBlockNameFn(program, uniformBlockIndex, bufSize,
                                            length, uniformBlockName);
}

void VendorGLAPI::glGetActiveUniformsivFn(GLuint program,
                                        GLsizei uniformCount,
                                        const GLuint* uniformIndices,
                                        GLenum pname,
                                        GLint* params) {
  driver_->fn.glGetActiveUniformsivFn(program, uniformCount, uniformIndices,
                                      pname, params);
}

void VendorGLAPI::glGetAttachedShadersFn(GLuint program,
                                       GLsizei maxcount,
                                       GLsizei* count,
                                       GLuint* shaders) {
  driver_->fn.glGetAttachedShadersFn(program, maxcount, count, shaders);
}

GLint VendorGLAPI::glGetAttribLocationFn(GLuint program, const char* name) {
  return driver_->fn.glGetAttribLocationFn(program, name);
}

void VendorGLAPI::glGetBooleani_vRobustANGLEFn(GLenum target,
                                             GLuint index,
                                             GLsizei bufSize,
                                             GLsizei* length,
                                             GLboolean* data) {
  driver_->fn.glGetBooleani_vRobustANGLEFn(target, index, bufSize, length,
                                           data);
}

void VendorGLAPI::glGetBooleanvFn(GLenum pname, GLboolean* params) {
  driver_->fn.glGetBooleanvFn(pname, params);
}

void VendorGLAPI::glGetBooleanvRobustANGLEFn(GLenum pname,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLboolean* data) {
  driver_->fn.glGetBooleanvRobustANGLEFn(pname, bufSize, length, data);
}

void VendorGLAPI::glGetBufferParameteri64vRobustANGLEFn(GLenum target,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei* length,
                                                      GLint64* params) {
  driver_->fn.glGetBufferParameteri64vRobustANGLEFn(target, pname, bufSize,
                                                    length, params);
}

void VendorGLAPI::glGetBufferParameterivFn(GLenum target,
                                         GLenum pname,
                                         GLint* params) {
  driver_->fn.glGetBufferParameterivFn(target, pname, params);
}

void VendorGLAPI::glGetBufferParameterivRobustANGLEFn(GLenum target,
                                                    GLenum pname,
                                                    GLsizei bufSize,
                                                    GLsizei* length,
                                                    GLint* params) {
  driver_->fn.glGetBufferParameterivRobustANGLEFn(target, pname, bufSize,
                                                  length, params);
}

void VendorGLAPI::glGetBufferPointervRobustANGLEFn(GLenum target,
                                                 GLenum pname,
                                                 GLsizei bufSize,
                                                 GLsizei* length,
                                                 void** params) {
  driver_->fn.glGetBufferPointervRobustANGLEFn(target, pname, bufSize, length,
                                               params);
}

void VendorGLAPI::glGetDebugMessageLogFn(GLuint count,
                                       GLsizei bufSize,
                                       GLenum* sources,
                                       GLenum* types,
                                       GLuint* ids,
                                       GLenum* severities,
                                       GLsizei* lengths,
                                       char* messageLog) {
  driver_->fn.glGetDebugMessageLogFn(count, bufSize, sources, types, ids,
                                     severities, lengths, messageLog);
}

GLenum VendorGLAPI::glGetErrorFn(void) {
  return driver_->fn.glGetErrorFn();
}

void VendorGLAPI::glGetFenceivNVFn(GLuint fence, GLenum pname, GLint* params) {
  driver_->fn.glGetFenceivNVFn(fence, pname, params);
}

void VendorGLAPI::glGetFloatvFn(GLenum pname, GLfloat* params) {
  driver_->fn.glGetFloatvFn(pname, params);
}

void VendorGLAPI::glGetFloatvRobustANGLEFn(GLenum pname,
                                         GLsizei bufSize,
                                         GLsizei* length,
                                         GLfloat* data) {
  driver_->fn.glGetFloatvRobustANGLEFn(pname, bufSize, length, data);
}

GLint VendorGLAPI::glGetFragDataIndexFn(GLuint program, const char* name) {
  return driver_->fn.glGetFragDataIndexFn(program, name);
}

GLint VendorGLAPI::glGetFragDataLocationFn(GLuint program, const char* name) {
  return driver_->fn.glGetFragDataLocationFn(program, name);
}

void VendorGLAPI::glGetFramebufferAttachmentParameterivEXTFn(GLenum target,
                                                           GLenum attachment,
                                                           GLenum pname,
                                                           GLint* params) {
  driver_->fn.glGetFramebufferAttachmentParameterivEXTFn(target, attachment,
                                                         pname, params);
}

void VendorGLAPI::glGetFramebufferAttachmentParameterivRobustANGLEFn(
    GLenum target,
    GLenum attachment,
    GLenum pname,
    GLsizei bufSize,
    GLsizei* length,
    GLint* params) {
  driver_->fn.glGetFramebufferAttachmentParameterivRobustANGLEFn(
      target, attachment, pname, bufSize, length, params);
}

void VendorGLAPI::glGetFramebufferParameterivRobustANGLEFn(GLenum target,
                                                         GLenum pname,
                                                         GLsizei bufSize,
                                                         GLsizei* length,
                                                         GLint* params) {
  driver_->fn.glGetFramebufferParameterivRobustANGLEFn(target, pname, bufSize,
                                                       length, params);
}

GLenum VendorGLAPI::glGetGraphicsResetStatusARBFn(void) {
  return driver_->fn.glGetGraphicsResetStatusARBFn();
}

void VendorGLAPI::glGetInteger64i_vFn(GLenum target,
                                    GLuint index,
                                    GLint64* data) {
  driver_->fn.glGetInteger64i_vFn(target, index, data);
}

void VendorGLAPI::glGetInteger64i_vRobustANGLEFn(GLenum target,
                                               GLuint index,
                                               GLsizei bufSize,
                                               GLsizei* length,
                                               GLint64* data) {
  driver_->fn.glGetInteger64i_vRobustANGLEFn(target, index, bufSize, length,
                                             data);
}

void VendorGLAPI::glGetInteger64vFn(GLenum pname, GLint64* params) {
  driver_->fn.glGetInteger64vFn(pname, params);
}

void VendorGLAPI::glGetInteger64vRobustANGLEFn(GLenum pname,
                                             GLsizei bufSize,
                                             GLsizei* length,
                                             GLint64* data) {
  driver_->fn.glGetInteger64vRobustANGLEFn(pname, bufSize, length, data);
}

void VendorGLAPI::glGetIntegeri_vFn(GLenum target, GLuint index, GLint* data) {
  driver_->fn.glGetIntegeri_vFn(target, index, data);
}

void VendorGLAPI::glGetIntegeri_vRobustANGLEFn(GLenum target,
                                             GLuint index,
                                             GLsizei bufSize,
                                             GLsizei* length,
                                             GLint* data) {
  driver_->fn.glGetIntegeri_vRobustANGLEFn(target, index, bufSize, length,
                                           data);
}

void VendorGLAPI::glGetIntegervFn(GLenum pname, GLint* params) {
  driver_->fn.glGetIntegervFn(pname, params);
}

void VendorGLAPI::glGetIntegervRobustANGLEFn(GLenum pname,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLint* data) {
  driver_->fn.glGetIntegervRobustANGLEFn(pname, bufSize, length, data);
}

void VendorGLAPI::glGetInternalformativFn(GLenum target,
                                        GLenum internalformat,
                                        GLenum pname,
                                        GLsizei bufSize,
                                        GLint* params) {
  driver_->fn.glGetInternalformativFn(target, internalformat, pname, bufSize,
                                      params);
}

void VendorGLAPI::glGetInternalformativRobustANGLEFn(GLenum target,
                                                   GLenum internalformat,
                                                   GLenum pname,
                                                   GLsizei bufSize,
                                                   GLsizei* length,
                                                   GLint* params) {
  driver_->fn.glGetInternalformativRobustANGLEFn(target, internalformat, pname,
                                                 bufSize, length, params);
}

void VendorGLAPI::glGetMultisamplefvFn(GLenum pname, GLuint index, GLfloat* val) {
  driver_->fn.glGetMultisamplefvFn(pname, index, val);
}

void VendorGLAPI::glGetMultisamplefvRobustANGLEFn(GLenum pname,
                                                GLuint index,
                                                GLsizei bufSize,
                                                GLsizei* length,
                                                GLfloat* val) {
  driver_->fn.glGetMultisamplefvRobustANGLEFn(pname, index, bufSize, length,
                                              val);
}

void VendorGLAPI::glGetnUniformfvRobustANGLEFn(GLuint program,
                                             GLint location,
                                             GLsizei bufSize,
                                             GLsizei* length,
                                             GLfloat* params) {
  driver_->fn.glGetnUniformfvRobustANGLEFn(program, location, bufSize, length,
                                           params);
}

void VendorGLAPI::glGetnUniformivRobustANGLEFn(GLuint program,
                                             GLint location,
                                             GLsizei bufSize,
                                             GLsizei* length,
                                             GLint* params) {
  driver_->fn.glGetnUniformivRobustANGLEFn(program, location, bufSize, length,
                                           params);
}

void VendorGLAPI::glGetnUniformuivRobustANGLEFn(GLuint program,
                                              GLint location,
                                              GLsizei bufSize,
                                              GLsizei* length,
                                              GLuint* params) {
  driver_->fn.glGetnUniformuivRobustANGLEFn(program, location, bufSize, length,
                                            params);
}

void VendorGLAPI::glGetObjectLabelFn(GLenum identifier,
                                   GLuint name,
                                   GLsizei bufSize,
                                   GLsizei* length,
                                   char* label) {
  driver_->fn.glGetObjectLabelFn(identifier, name, bufSize, length, label);
}

void VendorGLAPI::glGetObjectPtrLabelFn(void* ptr,
                                      GLsizei bufSize,
                                      GLsizei* length,
                                      char* label) {
  driver_->fn.glGetObjectPtrLabelFn(ptr, bufSize, length, label);
}

void VendorGLAPI::glGetPointervFn(GLenum pname, void** params) {
  driver_->fn.glGetPointervFn(pname, params);
}

void VendorGLAPI::glGetPointervRobustANGLERobustANGLEFn(GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei* length,
                                                      void** params) {
  driver_->fn.glGetPointervRobustANGLERobustANGLEFn(pname, bufSize, length,
                                                    params);
}

void VendorGLAPI::glGetProgramBinaryFn(GLuint program,
                                     GLsizei bufSize,
                                     GLsizei* length,
                                     GLenum* binaryFormat,
                                     GLvoid* binary) {
  driver_->fn.glGetProgramBinaryFn(program, bufSize, length, binaryFormat,
                                   binary);
}

void VendorGLAPI::glGetProgramInfoLogFn(GLuint program,
                                      GLsizei bufsize,
                                      GLsizei* length,
                                      char* infolog) {
  driver_->fn.glGetProgramInfoLogFn(program, bufsize, length, infolog);
}

void VendorGLAPI::glGetProgramInterfaceivFn(GLuint program,
                                          GLenum programInterface,
                                          GLenum pname,
                                          GLint* params) {
  driver_->fn.glGetProgramInterfaceivFn(program, programInterface, pname,
                                        params);
}

void VendorGLAPI::glGetProgramInterfaceivRobustANGLEFn(GLuint program,
                                                     GLenum programInterface,
                                                     GLenum pname,
                                                     GLsizei bufSize,
                                                     GLsizei* length,
                                                     GLint* params) {
  driver_->fn.glGetProgramInterfaceivRobustANGLEFn(
      program, programInterface, pname, bufSize, length, params);
}

void VendorGLAPI::glGetProgramivFn(GLuint program, GLenum pname, GLint* params) {
  driver_->fn.glGetProgramivFn(program, pname, params);
}

void VendorGLAPI::glGetProgramivRobustANGLEFn(GLuint program,
                                            GLenum pname,
                                            GLsizei bufSize,
                                            GLsizei* length,
                                            GLint* params) {
  driver_->fn.glGetProgramivRobustANGLEFn(program, pname, bufSize, length,
                                          params);
}

void VendorGLAPI::glGetProgramResourceivFn(GLuint program,
                                         GLenum programInterface,
                                         GLuint index,
                                         GLsizei propCount,
                                         const GLenum* props,
                                         GLsizei bufSize,
                                         GLsizei* length,
                                         GLint* params) {
  driver_->fn.glGetProgramResourceivFn(program, programInterface, index,
                                       propCount, props, bufSize, length,
                                       params);
}

GLint VendorGLAPI::glGetProgramResourceLocationFn(GLuint program,
                                                GLenum programInterface,
                                                const char* name) {
  return driver_->fn.glGetProgramResourceLocationFn(program, programInterface,
                                                    name);
}

void VendorGLAPI::glGetProgramResourceNameFn(GLuint program,
                                           GLenum programInterface,
                                           GLuint index,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLchar* name) {
  driver_->fn.glGetProgramResourceNameFn(program, programInterface, index,
                                         bufSize, length, name);
}

void VendorGLAPI::glGetQueryivFn(GLenum target, GLenum pname, GLint* params) {
  driver_->fn.glGetQueryivFn(target, pname, params);
}

void VendorGLAPI::glGetQueryivRobustANGLEFn(GLenum target,
                                          GLenum pname,
                                          GLsizei bufSize,
                                          GLsizei* length,
                                          GLint* params) {
  driver_->fn.glGetQueryivRobustANGLEFn(target, pname, bufSize, length, params);
}

void VendorGLAPI::glGetQueryObjecti64vFn(GLuint id,
                                       GLenum pname,
                                       GLint64* params) {
  driver_->fn.glGetQueryObjecti64vFn(id, pname, params);
}

void VendorGLAPI::glGetQueryObjecti64vRobustANGLEFn(GLuint id,
                                                  GLenum pname,
                                                  GLsizei bufSize,
                                                  GLsizei* length,
                                                  GLint64* params) {
  driver_->fn.glGetQueryObjecti64vRobustANGLEFn(id, pname, bufSize, length,
                                                params);
}

void VendorGLAPI::glGetQueryObjectivFn(GLuint id, GLenum pname, GLint* params) {
  driver_->fn.glGetQueryObjectivFn(id, pname, params);
}

void VendorGLAPI::glGetQueryObjectivRobustANGLEFn(GLuint id,
                                                GLenum pname,
                                                GLsizei bufSize,
                                                GLsizei* length,
                                                GLint* params) {
  driver_->fn.glGetQueryObjectivRobustANGLEFn(id, pname, bufSize, length,
                                              params);
}

void VendorGLAPI::glGetQueryObjectui64vFn(GLuint id,
                                        GLenum pname,
                                        GLuint64* params) {
  driver_->fn.glGetQueryObjectui64vFn(id, pname, params);
}

void VendorGLAPI::glGetQueryObjectui64vRobustANGLEFn(GLuint id,
                                                   GLenum pname,
                                                   GLsizei bufSize,
                                                   GLsizei* length,
                                                   GLuint64* params) {
  driver_->fn.glGetQueryObjectui64vRobustANGLEFn(id, pname, bufSize, length,
                                                 params);
}

void VendorGLAPI::glGetQueryObjectuivFn(GLuint id, GLenum pname, GLuint* params) {
  driver_->fn.glGetQueryObjectuivFn(id, pname, params);
}

void VendorGLAPI::glGetQueryObjectuivRobustANGLEFn(GLuint id,
                                                 GLenum pname,
                                                 GLsizei bufSize,
                                                 GLsizei* length,
                                                 GLuint* params) {
  driver_->fn.glGetQueryObjectuivRobustANGLEFn(id, pname, bufSize, length,
                                               params);
}

void VendorGLAPI::glGetRenderbufferParameterivEXTFn(GLenum target,
                                                  GLenum pname,
                                                  GLint* params) {
  driver_->fn.glGetRenderbufferParameterivEXTFn(target, pname, params);
}

void VendorGLAPI::glGetRenderbufferParameterivRobustANGLEFn(GLenum target,
                                                          GLenum pname,
                                                          GLsizei bufSize,
                                                          GLsizei* length,
                                                          GLint* params) {
  driver_->fn.glGetRenderbufferParameterivRobustANGLEFn(target, pname, bufSize,
                                                        length, params);
}

void VendorGLAPI::glGetSamplerParameterfvFn(GLuint sampler,
                                          GLenum pname,
                                          GLfloat* params) {
  driver_->fn.glGetSamplerParameterfvFn(sampler, pname, params);
}

void VendorGLAPI::glGetSamplerParameterfvRobustANGLEFn(GLuint sampler,
                                                     GLenum pname,
                                                     GLsizei bufSize,
                                                     GLsizei* length,
                                                     GLfloat* params) {
  driver_->fn.glGetSamplerParameterfvRobustANGLEFn(sampler, pname, bufSize,
                                                   length, params);
}

void VendorGLAPI::glGetSamplerParameterIivRobustANGLEFn(GLuint sampler,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei* length,
                                                      GLint* params) {
  driver_->fn.glGetSamplerParameterIivRobustANGLEFn(sampler, pname, bufSize,
                                                    length, params);
}

void VendorGLAPI::glGetSamplerParameterIuivRobustANGLEFn(GLuint sampler,
                                                       GLenum pname,
                                                       GLsizei bufSize,
                                                       GLsizei* length,
                                                       GLuint* params) {
  driver_->fn.glGetSamplerParameterIuivRobustANGLEFn(sampler, pname, bufSize,
                                                     length, params);
}

void VendorGLAPI::glGetSamplerParameterivFn(GLuint sampler,
                                          GLenum pname,
                                          GLint* params) {
  driver_->fn.glGetSamplerParameterivFn(sampler, pname, params);
}

void VendorGLAPI::glGetSamplerParameterivRobustANGLEFn(GLuint sampler,
                                                     GLenum pname,
                                                     GLsizei bufSize,
                                                     GLsizei* length,
                                                     GLint* params) {
  driver_->fn.glGetSamplerParameterivRobustANGLEFn(sampler, pname, bufSize,
                                                   length, params);
}

void VendorGLAPI::glGetShaderInfoLogFn(GLuint shader,
                                     GLsizei bufsize,
                                     GLsizei* length,
                                     char* infolog) {
  driver_->fn.glGetShaderInfoLogFn(shader, bufsize, length, infolog);
}

void VendorGLAPI::glGetShaderivFn(GLuint shader, GLenum pname, GLint* params) {
  driver_->fn.glGetShaderivFn(shader, pname, params);
}

void VendorGLAPI::glGetShaderivRobustANGLEFn(GLuint shader,
                                           GLenum pname,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLint* params) {
  driver_->fn.glGetShaderivRobustANGLEFn(shader, pname, bufSize, length,
                                         params);
}

void VendorGLAPI::glGetShaderPrecisionFormatFn(GLenum shadertype,
                                             GLenum precisiontype,
                                             GLint* range,
                                             GLint* precision) {
  driver_->fn.glGetShaderPrecisionFormatFn(shadertype, precisiontype, range,
                                           precision);
}

void VendorGLAPI::glGetShaderSourceFn(GLuint shader,
                                    GLsizei bufsize,
                                    GLsizei* length,
                                    char* source) {
  driver_->fn.glGetShaderSourceFn(shader, bufsize, length, source);
}

const GLubyte* VendorGLAPI::glGetStringFn(GLenum name) {
  return driver_->fn.glGetStringFn(name);
}

const GLubyte* VendorGLAPI::glGetStringiFn(GLenum name, GLuint index) {
  return driver_->fn.glGetStringiFn(name, index);
}

void VendorGLAPI::glGetSyncivFn(GLsync sync,
                              GLenum pname,
                              GLsizei bufSize,
                              GLsizei* length,
                              GLint* values) {
  driver_->fn.glGetSyncivFn(sync, pname, bufSize, length, values);
}

void VendorGLAPI::glGetTexLevelParameterfvFn(GLenum target,
                                           GLint level,
                                           GLenum pname,
                                           GLfloat* params) {
  driver_->fn.glGetTexLevelParameterfvFn(target, level, pname, params);
}

void VendorGLAPI::glGetTexLevelParameterfvRobustANGLEFn(GLenum target,
                                                      GLint level,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei* length,
                                                      GLfloat* params) {
  driver_->fn.glGetTexLevelParameterfvRobustANGLEFn(target, level, pname,
                                                    bufSize, length, params);
}

void VendorGLAPI::glGetTexLevelParameterivFn(GLenum target,
                                           GLint level,
                                           GLenum pname,
                                           GLint* params) {
  driver_->fn.glGetTexLevelParameterivFn(target, level, pname, params);
}

void VendorGLAPI::glGetTexLevelParameterivRobustANGLEFn(GLenum target,
                                                      GLint level,
                                                      GLenum pname,
                                                      GLsizei bufSize,
                                                      GLsizei* length,
                                                      GLint* params) {
  driver_->fn.glGetTexLevelParameterivRobustANGLEFn(target, level, pname,
                                                    bufSize, length, params);
}

void VendorGLAPI::glGetTexParameterfvFn(GLenum target,
                                      GLenum pname,
                                      GLfloat* params) {
  driver_->fn.glGetTexParameterfvFn(target, pname, params);
}

void VendorGLAPI::glGetTexParameterfvRobustANGLEFn(GLenum target,
                                                 GLenum pname,
                                                 GLsizei bufSize,
                                                 GLsizei* length,
                                                 GLfloat* params) {
  driver_->fn.glGetTexParameterfvRobustANGLEFn(target, pname, bufSize, length,
                                               params);
}

void VendorGLAPI::glGetTexParameterIivRobustANGLEFn(GLenum target,
                                                  GLenum pname,
                                                  GLsizei bufSize,
                                                  GLsizei* length,
                                                  GLint* params) {
  driver_->fn.glGetTexParameterIivRobustANGLEFn(target, pname, bufSize, length,
                                                params);
}

void VendorGLAPI::glGetTexParameterIuivRobustANGLEFn(GLenum target,
                                                   GLenum pname,
                                                   GLsizei bufSize,
                                                   GLsizei* length,
                                                   GLuint* params) {
  driver_->fn.glGetTexParameterIuivRobustANGLEFn(target, pname, bufSize, length,
                                                 params);
}

void VendorGLAPI::glGetTexParameterivFn(GLenum target,
                                      GLenum pname,
                                      GLint* params) {
  driver_->fn.glGetTexParameterivFn(target, pname, params);
}

void VendorGLAPI::glGetTexParameterivRobustANGLEFn(GLenum target,
                                                 GLenum pname,
                                                 GLsizei bufSize,
                                                 GLsizei* length,
                                                 GLint* params) {
  driver_->fn.glGetTexParameterivRobustANGLEFn(target, pname, bufSize, length,
                                               params);
}

void VendorGLAPI::glGetTransformFeedbackVaryingFn(GLuint program,
                                                GLuint index,
                                                GLsizei bufSize,
                                                GLsizei* length,
                                                GLsizei* size,
                                                GLenum* type,
                                                char* name) {
  driver_->fn.glGetTransformFeedbackVaryingFn(program, index, bufSize, length,
                                              size, type, name);
}

void VendorGLAPI::glGetTranslatedShaderSourceANGLEFn(GLuint shader,
                                                   GLsizei bufsize,
                                                   GLsizei* length,
                                                   char* source) {
  driver_->fn.glGetTranslatedShaderSourceANGLEFn(shader, bufsize, length,
                                                 source);
}

GLuint VendorGLAPI::glGetUniformBlockIndexFn(GLuint program,
                                           const char* uniformBlockName) {
  return driver_->fn.glGetUniformBlockIndexFn(program, uniformBlockName);
}

void VendorGLAPI::glGetUniformfvFn(GLuint program,
                                 GLint location,
                                 GLfloat* params) {
  driver_->fn.glGetUniformfvFn(program, location, params);
}

void VendorGLAPI::glGetUniformfvRobustANGLEFn(GLuint program,
                                            GLint location,
                                            GLsizei bufSize,
                                            GLsizei* length,
                                            GLfloat* params) {
  driver_->fn.glGetUniformfvRobustANGLEFn(program, location, bufSize, length,
                                          params);
}

void VendorGLAPI::glGetUniformIndicesFn(GLuint program,
                                      GLsizei uniformCount,
                                      const char* const* uniformNames,
                                      GLuint* uniformIndices) {
  driver_->fn.glGetUniformIndicesFn(program, uniformCount, uniformNames,
                                    uniformIndices);
}

void VendorGLAPI::glGetUniformivFn(GLuint program,
                                 GLint location,
                                 GLint* params) {
  driver_->fn.glGetUniformivFn(program, location, params);
}

void VendorGLAPI::glGetUniformivRobustANGLEFn(GLuint program,
                                            GLint location,
                                            GLsizei bufSize,
                                            GLsizei* length,
                                            GLint* params) {
  driver_->fn.glGetUniformivRobustANGLEFn(program, location, bufSize, length,
                                          params);
}

GLint VendorGLAPI::glGetUniformLocationFn(GLuint program, const char* name) {
  return driver_->fn.glGetUniformLocationFn(program, name);
}

void VendorGLAPI::glGetUniformuivFn(GLuint program,
                                  GLint location,
                                  GLuint* params) {
  driver_->fn.glGetUniformuivFn(program, location, params);
}

void VendorGLAPI::glGetUniformuivRobustANGLEFn(GLuint program,
                                             GLint location,
                                             GLsizei bufSize,
                                             GLsizei* length,
                                             GLuint* params) {
  driver_->fn.glGetUniformuivRobustANGLEFn(program, location, bufSize, length,
                                           params);
}

void VendorGLAPI::glGetVertexAttribfvFn(GLuint index,
                                      GLenum pname,
                                      GLfloat* params) {
  driver_->fn.glGetVertexAttribfvFn(index, pname, params);
}

void VendorGLAPI::glGetVertexAttribfvRobustANGLEFn(GLuint index,
                                                 GLenum pname,
                                                 GLsizei bufSize,
                                                 GLsizei* length,
                                                 GLfloat* params) {
  driver_->fn.glGetVertexAttribfvRobustANGLEFn(index, pname, bufSize, length,
                                               params);
}

void VendorGLAPI::glGetVertexAttribIivRobustANGLEFn(GLuint index,
                                                  GLenum pname,
                                                  GLsizei bufSize,
                                                  GLsizei* length,
                                                  GLint* params) {
  driver_->fn.glGetVertexAttribIivRobustANGLEFn(index, pname, bufSize, length,
                                                params);
}

void VendorGLAPI::glGetVertexAttribIuivRobustANGLEFn(GLuint index,
                                                   GLenum pname,
                                                   GLsizei bufSize,
                                                   GLsizei* length,
                                                   GLuint* params) {
  driver_->fn.glGetVertexAttribIuivRobustANGLEFn(index, pname, bufSize, length,
                                                 params);
}

void VendorGLAPI::glGetVertexAttribivFn(GLuint index,
                                      GLenum pname,
                                      GLint* params) {
  driver_->fn.glGetVertexAttribivFn(index, pname, params);
}

void VendorGLAPI::glGetVertexAttribivRobustANGLEFn(GLuint index,
                                                 GLenum pname,
                                                 GLsizei bufSize,
                                                 GLsizei* length,
                                                 GLint* params) {
  driver_->fn.glGetVertexAttribivRobustANGLEFn(index, pname, bufSize, length,
                                               params);
}

void VendorGLAPI::glGetVertexAttribPointervFn(GLuint index,
                                            GLenum pname,
                                            void** pointer) {
  driver_->fn.glGetVertexAttribPointervFn(index, pname, pointer);
}

void VendorGLAPI::glGetVertexAttribPointervRobustANGLEFn(GLuint index,
                                                       GLenum pname,
                                                       GLsizei bufSize,
                                                       GLsizei* length,
                                                       void** pointer) {
  driver_->fn.glGetVertexAttribPointervRobustANGLEFn(index, pname, bufSize,
                                                     length, pointer);
}

void VendorGLAPI::glHintFn(GLenum target, GLenum mode) {
  driver_->fn.glHintFn(target, mode);
}

void VendorGLAPI::glInsertEventMarkerEXTFn(GLsizei length, const char* marker) {
  driver_->fn.glInsertEventMarkerEXTFn(length, marker);
}

void VendorGLAPI::glInvalidateFramebufferFn(GLenum target,
                                          GLsizei numAttachments,
                                          const GLenum* attachments) {
  driver_->fn.glInvalidateFramebufferFn(target, numAttachments, attachments);
}

void VendorGLAPI::glInvalidateSubFramebufferFn(GLenum target,
                                             GLsizei numAttachments,
                                             const GLenum* attachments,
                                             GLint x,
                                             GLint y,
                                             GLint width,
                                             GLint height) {
  driver_->fn.glInvalidateSubFramebufferFn(target, numAttachments, attachments,
                                           x, y, width, height);
}

GLboolean VendorGLAPI::glIsBufferFn(GLuint buffer) {
  return driver_->fn.glIsBufferFn(buffer);
}

GLboolean VendorGLAPI::glIsEnabledFn(GLenum cap) {
  return driver_->fn.glIsEnabledFn(cap);
}

GLboolean VendorGLAPI::glIsFenceAPPLEFn(GLuint fence) {
  return driver_->fn.glIsFenceAPPLEFn(fence);
}

GLboolean VendorGLAPI::glIsFenceNVFn(GLuint fence) {
  return driver_->fn.glIsFenceNVFn(fence);
}

GLboolean VendorGLAPI::glIsFramebufferEXTFn(GLuint framebuffer) {
  return driver_->fn.glIsFramebufferEXTFn(framebuffer);
}

GLboolean VendorGLAPI::glIsPathNVFn(GLuint path) {
  return driver_->fn.glIsPathNVFn(path);
}

GLboolean VendorGLAPI::glIsProgramFn(GLuint program) {
  return driver_->fn.glIsProgramFn(program);
}

GLboolean VendorGLAPI::glIsQueryFn(GLuint query) {
  return driver_->fn.glIsQueryFn(query);
}

GLboolean VendorGLAPI::glIsRenderbufferEXTFn(GLuint renderbuffer) {
  return driver_->fn.glIsRenderbufferEXTFn(renderbuffer);
}

GLboolean VendorGLAPI::glIsSamplerFn(GLuint sampler) {
  return driver_->fn.glIsSamplerFn(sampler);
}

GLboolean VendorGLAPI::glIsShaderFn(GLuint shader) {
  return driver_->fn.glIsShaderFn(shader);
}

GLboolean VendorGLAPI::glIsSyncFn(GLsync sync) {
  return driver_->fn.glIsSyncFn(sync);
}

GLboolean VendorGLAPI::glIsTextureFn(GLuint texture) {
  return driver_->fn.glIsTextureFn(texture);
}

GLboolean VendorGLAPI::glIsTransformFeedbackFn(GLuint id) {
  return driver_->fn.glIsTransformFeedbackFn(id);
}

GLboolean VendorGLAPI::glIsVertexArrayOESFn(GLuint array) {
  return driver_->fn.glIsVertexArrayOESFn(array);
}

void VendorGLAPI::glLineWidthFn(GLfloat width) {
  driver_->fn.glLineWidthFn(width);
}

void VendorGLAPI::glLinkProgramFn(GLuint program) {
  driver_->fn.glLinkProgramFn(program);
}

void* VendorGLAPI::glMapBufferFn(GLenum target, GLenum access) {
  return driver_->fn.glMapBufferFn(target, access);
}

void* VendorGLAPI::glMapBufferRangeFn(GLenum target,
                                    GLintptr offset,
                                    GLsizeiptr length,
                                    GLbitfield access) {
  return driver_->fn.glMapBufferRangeFn(target, offset, length, access);
}

void VendorGLAPI::glMatrixLoadfEXTFn(GLenum matrixMode, const GLfloat* m) {
  driver_->fn.glMatrixLoadfEXTFn(matrixMode, m);
}

void VendorGLAPI::glMatrixLoadIdentityEXTFn(GLenum matrixMode) {
  driver_->fn.glMatrixLoadIdentityEXTFn(matrixMode);
}

void VendorGLAPI::glMemoryBarrierEXTFn(GLbitfield barriers) {
  driver_->fn.glMemoryBarrierEXTFn(barriers);
}

void VendorGLAPI::glObjectLabelFn(GLenum identifier,
                                GLuint name,
                                GLsizei length,
                                const char* label) {
  driver_->fn.glObjectLabelFn(identifier, name, length, label);
}

void VendorGLAPI::glObjectPtrLabelFn(void* ptr,
                                   GLsizei length,
                                   const char* label) {
  driver_->fn.glObjectPtrLabelFn(ptr, length, label);
}

void VendorGLAPI::glPathCommandsNVFn(GLuint path,
                                   GLsizei numCommands,
                                   const GLubyte* commands,
                                   GLsizei numCoords,
                                   GLenum coordType,
                                   const GLvoid* coords) {
  driver_->fn.glPathCommandsNVFn(path, numCommands, commands, numCoords,
                                 coordType, coords);
}

void VendorGLAPI::glPathParameterfNVFn(GLuint path, GLenum pname, GLfloat value) {
  driver_->fn.glPathParameterfNVFn(path, pname, value);
}

void VendorGLAPI::glPathParameteriNVFn(GLuint path, GLenum pname, GLint value) {
  driver_->fn.glPathParameteriNVFn(path, pname, value);
}

void VendorGLAPI::glPathStencilFuncNVFn(GLenum func, GLint ref, GLuint mask) {
  driver_->fn.glPathStencilFuncNVFn(func, ref, mask);
}

void VendorGLAPI::glPauseTransformFeedbackFn(void) {
  driver_->fn.glPauseTransformFeedbackFn();
}

void VendorGLAPI::glPixelStoreiFn(GLenum pname, GLint param) {
  driver_->fn.glPixelStoreiFn(pname, param);
}

void VendorGLAPI::glPointParameteriFn(GLenum pname, GLint param) {
  driver_->fn.glPointParameteriFn(pname, param);
}

void VendorGLAPI::glPolygonModeFn(GLenum face, GLenum mode) {
  driver_->fn.glPolygonModeFn(face, mode);
}

void VendorGLAPI::glPolygonOffsetFn(GLfloat factor, GLfloat units) {
  driver_->fn.glPolygonOffsetFn(factor, units);
}

void VendorGLAPI::glPopDebugGroupFn() {
  driver_->fn.glPopDebugGroupFn();
}

void VendorGLAPI::glPopGroupMarkerEXTFn(void) {
  driver_->fn.glPopGroupMarkerEXTFn();
}

void VendorGLAPI::glPrimitiveRestartIndexFn(GLuint index) {
  driver_->fn.glPrimitiveRestartIndexFn(index);
}

void VendorGLAPI::glProgramBinaryFn(GLuint program,
                                  GLenum binaryFormat,
                                  const GLvoid* binary,
                                  GLsizei length) {
  driver_->fn.glProgramBinaryFn(program, binaryFormat, binary, length);
}

void VendorGLAPI::glProgramParameteriFn(GLuint program,
                                      GLenum pname,
                                      GLint value) {
  driver_->fn.glProgramParameteriFn(program, pname, value);
}

void VendorGLAPI::glProgramPathFragmentInputGenNVFn(GLuint program,
                                                  GLint location,
                                                  GLenum genMode,
                                                  GLint components,
                                                  const GLfloat* coeffs) {
  driver_->fn.glProgramPathFragmentInputGenNVFn(program, location, genMode,
                                                components, coeffs);
}

void VendorGLAPI::glPushDebugGroupFn(GLenum source,
                                   GLuint id,
                                   GLsizei length,
                                   const char* message) {
  driver_->fn.glPushDebugGroupFn(source, id, length, message);
}

void VendorGLAPI::glPushGroupMarkerEXTFn(GLsizei length, const char* marker) {
  driver_->fn.glPushGroupMarkerEXTFn(length, marker);
}

void VendorGLAPI::glQueryCounterFn(GLuint id, GLenum target) {
  driver_->fn.glQueryCounterFn(id, target);
}

void VendorGLAPI::glReadBufferFn(GLenum src) {
  driver_->fn.glReadBufferFn(src);
}

void VendorGLAPI::glReadnPixelsRobustANGLEFn(GLint x,
                                           GLint y,
                                           GLsizei width,
                                           GLsizei height,
                                           GLenum format,
                                           GLenum type,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLsizei* columns,
                                           GLsizei* rows,
                                           void* data) {
  driver_->fn.glReadnPixelsRobustANGLEFn(x, y, width, height, format, type,
                                         bufSize, length, columns, rows, data);
}

void VendorGLAPI::glReadPixelsFn(GLint x,
                               GLint y,
                               GLsizei width,
                               GLsizei height,
                               GLenum format,
                               GLenum type,
                               void* pixels) {
  driver_->fn.glReadPixelsFn(x, y, width, height, format, type, pixels);
}

void VendorGLAPI::glReadPixelsRobustANGLEFn(GLint x,
                                          GLint y,
                                          GLsizei width,
                                          GLsizei height,
                                          GLenum format,
                                          GLenum type,
                                          GLsizei bufSize,
                                          GLsizei* length,
                                          GLsizei* columns,
                                          GLsizei* rows,
                                          void* pixels) {
  driver_->fn.glReadPixelsRobustANGLEFn(x, y, width, height, format, type,
                                        bufSize, length, columns, rows, pixels);
}

void VendorGLAPI::glReleaseShaderCompilerFn(void) {
  driver_->fn.glReleaseShaderCompilerFn();
}

void VendorGLAPI::glRenderbufferStorageEXTFn(GLenum target,
                                           GLenum internalformat,
                                           GLsizei width,
                                           GLsizei height) {
  driver_->fn.glRenderbufferStorageEXTFn(target, internalformat, width, height);
}

void VendorGLAPI::glRenderbufferStorageMultisampleFn(GLenum target,
                                                   GLsizei samples,
                                                   GLenum internalformat,
                                                   GLsizei width,
                                                   GLsizei height) {
  driver_->fn.glRenderbufferStorageMultisampleFn(target, samples,
                                                 internalformat, width, height);
}

void VendorGLAPI::glRenderbufferStorageMultisampleEXTFn(GLenum target,
                                                      GLsizei samples,
                                                      GLenum internalformat,
                                                      GLsizei width,
                                                      GLsizei height) {
  driver_->fn.glRenderbufferStorageMultisampleEXTFn(
      target, samples, internalformat, width, height);
}

void VendorGLAPI::glRequestExtensionANGLEFn(const char* name) {
  driver_->fn.glRequestExtensionANGLEFn(name);
}

void VendorGLAPI::glResumeTransformFeedbackFn(void) {
  driver_->fn.glResumeTransformFeedbackFn();
}

void VendorGLAPI::glSampleCoverageFn(GLclampf value, GLboolean invert) {
  driver_->fn.glSampleCoverageFn(value, invert);
}

void VendorGLAPI::glSamplerParameterfFn(GLuint sampler,
                                      GLenum pname,
                                      GLfloat param) {
  driver_->fn.glSamplerParameterfFn(sampler, pname, param);
}

void VendorGLAPI::glSamplerParameterfvFn(GLuint sampler,
                                       GLenum pname,
                                       const GLfloat* params) {
  driver_->fn.glSamplerParameterfvFn(sampler, pname, params);
}

void VendorGLAPI::glSamplerParameterfvRobustANGLEFn(GLuint sampler,
                                                  GLenum pname,
                                                  GLsizei bufSize,
                                                  const GLfloat* param) {
  driver_->fn.glSamplerParameterfvRobustANGLEFn(sampler, pname, bufSize, param);
}

void VendorGLAPI::glSamplerParameteriFn(GLuint sampler,
                                      GLenum pname,
                                      GLint param) {
  driver_->fn.glSamplerParameteriFn(sampler, pname, param);
}

void VendorGLAPI::glSamplerParameterIivRobustANGLEFn(GLuint sampler,
                                                   GLenum pname,
                                                   GLsizei bufSize,
                                                   const GLint* param) {
  driver_->fn.glSamplerParameterIivRobustANGLEFn(sampler, pname, bufSize,
                                                 param);
}

void VendorGLAPI::glSamplerParameterIuivRobustANGLEFn(GLuint sampler,
                                                    GLenum pname,
                                                    GLsizei bufSize,
                                                    const GLuint* param) {
  driver_->fn.glSamplerParameterIuivRobustANGLEFn(sampler, pname, bufSize,
                                                  param);
}

void VendorGLAPI::glSamplerParameterivFn(GLuint sampler,
                                       GLenum pname,
                                       const GLint* params) {
  driver_->fn.glSamplerParameterivFn(sampler, pname, params);
}

void VendorGLAPI::glSamplerParameterivRobustANGLEFn(GLuint sampler,
                                                  GLenum pname,
                                                  GLsizei bufSize,
                                                  const GLint* param) {
  driver_->fn.glSamplerParameterivRobustANGLEFn(sampler, pname, bufSize, param);
}

void VendorGLAPI::glScissorFn(GLint x, GLint y, GLsizei width, GLsizei height) {
  driver_->fn.glScissorFn(x, y, width, height);
}

void VendorGLAPI::glSetFenceAPPLEFn(GLuint fence) {
  driver_->fn.glSetFenceAPPLEFn(fence);
}

void VendorGLAPI::glSetFenceNVFn(GLuint fence, GLenum condition) {
  driver_->fn.glSetFenceNVFn(fence, condition);
}

void VendorGLAPI::glShaderBinaryFn(GLsizei n,
                                 const GLuint* shaders,
                                 GLenum binaryformat,
                                 const void* binary,
                                 GLsizei length) {
  driver_->fn.glShaderBinaryFn(n, shaders, binaryformat, binary, length);
}

void VendorGLAPI::glShaderSourceFn(GLuint shader,
                                 GLsizei count,
                                 const char* const* str,
                                 const GLint* length) {
  driver_->fn.glShaderSourceFn(shader, count, str, length);
}

void VendorGLAPI::glStencilFillPathInstancedNVFn(GLsizei numPaths,
                                               GLenum pathNameType,
                                               const void* paths,
                                               GLuint pathBase,
                                               GLenum fillMode,
                                               GLuint mask,
                                               GLenum transformType,
                                               const GLfloat* transformValues) {
  driver_->fn.glStencilFillPathInstancedNVFn(numPaths, pathNameType, paths,
                                             pathBase, fillMode, mask,
                                             transformType, transformValues);
}

void VendorGLAPI::glStencilFillPathNVFn(GLuint path,
                                      GLenum fillMode,
                                      GLuint mask) {
  driver_->fn.glStencilFillPathNVFn(path, fillMode, mask);
}

void VendorGLAPI::glStencilFuncFn(GLenum func, GLint ref, GLuint mask) {
  driver_->fn.glStencilFuncFn(func, ref, mask);
}

void VendorGLAPI::glStencilFuncSeparateFn(GLenum face,
                                        GLenum func,
                                        GLint ref,
                                        GLuint mask) {
  driver_->fn.glStencilFuncSeparateFn(face, func, ref, mask);
}

void VendorGLAPI::glStencilMaskFn(GLuint mask) {
  driver_->fn.glStencilMaskFn(mask);
}

void VendorGLAPI::glStencilMaskSeparateFn(GLenum face, GLuint mask) {
  driver_->fn.glStencilMaskSeparateFn(face, mask);
}

void VendorGLAPI::glStencilOpFn(GLenum fail, GLenum zfail, GLenum zpass) {
  driver_->fn.glStencilOpFn(fail, zfail, zpass);
}

void VendorGLAPI::glStencilOpSeparateFn(GLenum face,
                                      GLenum fail,
                                      GLenum zfail,
                                      GLenum zpass) {
  driver_->fn.glStencilOpSeparateFn(face, fail, zfail, zpass);
}

void VendorGLAPI::glStencilStrokePathInstancedNVFn(
    GLsizei numPaths,
    GLenum pathNameType,
    const void* paths,
    GLuint pathBase,
    GLint ref,
    GLuint mask,
    GLenum transformType,
    const GLfloat* transformValues) {
  driver_->fn.glStencilStrokePathInstancedNVFn(numPaths, pathNameType, paths,
                                               pathBase, ref, mask,
                                               transformType, transformValues);
}

void VendorGLAPI::glStencilStrokePathNVFn(GLuint path,
                                        GLint reference,
                                        GLuint mask) {
  driver_->fn.glStencilStrokePathNVFn(path, reference, mask);
}

void VendorGLAPI::glStencilThenCoverFillPathInstancedNVFn(
    GLsizei numPaths,
    GLenum pathNameType,
    const void* paths,
    GLuint pathBase,
    GLenum fillMode,
    GLuint mask,
    GLenum coverMode,
    GLenum transformType,
    const GLfloat* transformValues) {
  driver_->fn.glStencilThenCoverFillPathInstancedNVFn(
      numPaths, pathNameType, paths, pathBase, fillMode, mask, coverMode,
      transformType, transformValues);
}

void VendorGLAPI::glStencilThenCoverFillPathNVFn(GLuint path,
                                               GLenum fillMode,
                                               GLuint mask,
                                               GLenum coverMode) {
  driver_->fn.glStencilThenCoverFillPathNVFn(path, fillMode, mask, coverMode);
}

void VendorGLAPI::glStencilThenCoverStrokePathInstancedNVFn(
    GLsizei numPaths,
    GLenum pathNameType,
    const void* paths,
    GLuint pathBase,
    GLint ref,
    GLuint mask,
    GLenum coverMode,
    GLenum transformType,
    const GLfloat* transformValues) {
  driver_->fn.glStencilThenCoverStrokePathInstancedNVFn(
      numPaths, pathNameType, paths, pathBase, ref, mask, coverMode,
      transformType, transformValues);
}

void VendorGLAPI::glStencilThenCoverStrokePathNVFn(GLuint path,
                                                 GLint reference,
                                                 GLuint mask,
                                                 GLenum coverMode) {
  driver_->fn.glStencilThenCoverStrokePathNVFn(path, reference, mask,
                                               coverMode);
}

GLboolean VendorGLAPI::glTestFenceAPPLEFn(GLuint fence) {
  return driver_->fn.glTestFenceAPPLEFn(fence);
}

GLboolean VendorGLAPI::glTestFenceNVFn(GLuint fence) {
  return driver_->fn.glTestFenceNVFn(fence);
}

void VendorGLAPI::glTexBufferFn(GLenum target,
                              GLenum internalformat,
                              GLuint buffer) {
  driver_->fn.glTexBufferFn(target, internalformat, buffer);
}

void VendorGLAPI::glTexBufferRangeFn(GLenum target,
                                   GLenum internalformat,
                                   GLuint buffer,
                                   GLintptr offset,
                                   GLsizeiptr size) {
  driver_->fn.glTexBufferRangeFn(target, internalformat, buffer, offset, size);
}

void VendorGLAPI::glTexImage2DFn(GLenum target,
                               GLint level,
                               GLint internalformat,
                               GLsizei width,
                               GLsizei height,
                               GLint border,
                               GLenum format,
                               GLenum type,
                               const void* pixels) {
  driver_->fn.glTexImage2DFn(target, level, internalformat, width, height,
                             border, format, type, pixels);
}

void VendorGLAPI::glTexImage2DRobustANGLEFn(GLenum target,
                                          GLint level,
                                          GLint internalformat,
                                          GLsizei width,
                                          GLsizei height,
                                          GLint border,
                                          GLenum format,
                                          GLenum type,
                                          GLsizei bufSize,
                                          const void* pixels) {
  driver_->fn.glTexImage2DRobustANGLEFn(target, level, internalformat, width,
                                        height, border, format, type, bufSize,
                                        pixels);
}

void VendorGLAPI::glTexImage3DFn(GLenum target,
                               GLint level,
                               GLint internalformat,
                               GLsizei width,
                               GLsizei height,
                               GLsizei depth,
                               GLint border,
                               GLenum format,
                               GLenum type,
                               const void* pixels) {
  driver_->fn.glTexImage3DFn(target, level, internalformat, width, height,
                             depth, border, format, type, pixels);
}

void VendorGLAPI::glTexImage3DRobustANGLEFn(GLenum target,
                                          GLint level,
                                          GLint internalformat,
                                          GLsizei width,
                                          GLsizei height,
                                          GLsizei depth,
                                          GLint border,
                                          GLenum format,
                                          GLenum type,
                                          GLsizei bufSize,
                                          const void* pixels) {
  driver_->fn.glTexImage3DRobustANGLEFn(target, level, internalformat, width,
                                        height, depth, border, format, type,
                                        bufSize, pixels);
}

void VendorGLAPI::glTexParameterfFn(GLenum target, GLenum pname, GLfloat param) {
  driver_->fn.glTexParameterfFn(target, pname, param);
}

void VendorGLAPI::glTexParameterfvFn(GLenum target,
                                   GLenum pname,
                                   const GLfloat* params) {
  driver_->fn.glTexParameterfvFn(target, pname, params);
}

void VendorGLAPI::glTexParameterfvRobustANGLEFn(GLenum target,
                                              GLenum pname,
                                              GLsizei bufSize,
                                              const GLfloat* params) {
  driver_->fn.glTexParameterfvRobustANGLEFn(target, pname, bufSize, params);
}

void VendorGLAPI::glTexParameteriFn(GLenum target, GLenum pname, GLint param) {
  driver_->fn.glTexParameteriFn(target, pname, param);
}

void VendorGLAPI::glTexParameterIivRobustANGLEFn(GLenum target,
                                               GLenum pname,
                                               GLsizei bufSize,
                                               const GLint* params) {
  driver_->fn.glTexParameterIivRobustANGLEFn(target, pname, bufSize, params);
}

void VendorGLAPI::glTexParameterIuivRobustANGLEFn(GLenum target,
                                                GLenum pname,
                                                GLsizei bufSize,
                                                const GLuint* params) {
  driver_->fn.glTexParameterIuivRobustANGLEFn(target, pname, bufSize, params);
}

void VendorGLAPI::glTexParameterivFn(GLenum target,
                                   GLenum pname,
                                   const GLint* params) {
  driver_->fn.glTexParameterivFn(target, pname, params);
}

void VendorGLAPI::glTexParameterivRobustANGLEFn(GLenum target,
                                              GLenum pname,
                                              GLsizei bufSize,
                                              const GLint* params) {
  driver_->fn.glTexParameterivRobustANGLEFn(target, pname, bufSize, params);
}

void VendorGLAPI::glTexStorage2DEXTFn(GLenum target,
                                    GLsizei levels,
                                    GLenum internalformat,
                                    GLsizei width,
                                    GLsizei height) {
  driver_->fn.glTexStorage2DEXTFn(target, levels, internalformat, width,
                                  height);
}

void VendorGLAPI::glTexStorage3DFn(GLenum target,
                                 GLsizei levels,
                                 GLenum internalformat,
                                 GLsizei width,
                                 GLsizei height,
                                 GLsizei depth) {
  driver_->fn.glTexStorage3DFn(target, levels, internalformat, width, height,
                               depth);
}

void VendorGLAPI::glTexSubImage2DFn(GLenum target,
                                  GLint level,
                                  GLint xoffset,
                                  GLint yoffset,
                                  GLsizei width,
                                  GLsizei height,
                                  GLenum format,
                                  GLenum type,
                                  const void* pixels) {
  driver_->fn.glTexSubImage2DFn(target, level, xoffset, yoffset, width, height,
                                format, type, pixels);
}

void VendorGLAPI::glTexSubImage2DRobustANGLEFn(GLenum target,
                                             GLint level,
                                             GLint xoffset,
                                             GLint yoffset,
                                             GLsizei width,
                                             GLsizei height,
                                             GLenum format,
                                             GLenum type,
                                             GLsizei bufSize,
                                             const void* pixels) {
  driver_->fn.glTexSubImage2DRobustANGLEFn(target, level, xoffset, yoffset,
                                           width, height, format, type, bufSize,
                                           pixels);
}

void VendorGLAPI::glTexSubImage3DFn(GLenum target,
                                  GLint level,
                                  GLint xoffset,
                                  GLint yoffset,
                                  GLint zoffset,
                                  GLsizei width,
                                  GLsizei height,
                                  GLsizei depth,
                                  GLenum format,
                                  GLenum type,
                                  const void* pixels) {
  driver_->fn.glTexSubImage3DFn(target, level, xoffset, yoffset, zoffset, width,
                                height, depth, format, type, pixels);
}

void VendorGLAPI::glTexSubImage3DRobustANGLEFn(GLenum target,
                                             GLint level,
                                             GLint xoffset,
                                             GLint yoffset,
                                             GLint zoffset,
                                             GLsizei width,
                                             GLsizei height,
                                             GLsizei depth,
                                             GLenum format,
                                             GLenum type,
                                             GLsizei bufSize,
                                             const void* pixels) {
  driver_->fn.glTexSubImage3DRobustANGLEFn(target, level, xoffset, yoffset,
                                           zoffset, width, height, depth,
                                           format, type, bufSize, pixels);
}

void VendorGLAPI::glTransformFeedbackVaryingsFn(GLuint program,
                                              GLsizei count,
                                              const char* const* varyings,
                                              GLenum bufferMode) {
  driver_->fn.glTransformFeedbackVaryingsFn(program, count, varyings,
                                            bufferMode);
}

void VendorGLAPI::glUniform1fFn(GLint location, GLfloat x) {
  driver_->fn.glUniform1fFn(location, x);
}

void VendorGLAPI::glUniform1fvFn(GLint location,
                               GLsizei count,
                               const GLfloat* v) {
  driver_->fn.glUniform1fvFn(location, count, v);
}

void VendorGLAPI::glUniform1iFn(GLint location, GLint x) {
  driver_->fn.glUniform1iFn(location, x);
}

void VendorGLAPI::glUniform1ivFn(GLint location, GLsizei count, const GLint* v) {
  driver_->fn.glUniform1ivFn(location, count, v);
}

void VendorGLAPI::glUniform1uiFn(GLint location, GLuint v0) {
  driver_->fn.glUniform1uiFn(location, v0);
}

void VendorGLAPI::glUniform1uivFn(GLint location,
                                GLsizei count,
                                const GLuint* v) {
  driver_->fn.glUniform1uivFn(location, count, v);
}

void VendorGLAPI::glUniform2fFn(GLint location, GLfloat x, GLfloat y) {
  driver_->fn.glUniform2fFn(location, x, y);
}

void VendorGLAPI::glUniform2fvFn(GLint location,
                               GLsizei count,
                               const GLfloat* v) {
  driver_->fn.glUniform2fvFn(location, count, v);
}

void VendorGLAPI::glUniform2iFn(GLint location, GLint x, GLint y) {
  driver_->fn.glUniform2iFn(location, x, y);
}

void VendorGLAPI::glUniform2ivFn(GLint location, GLsizei count, const GLint* v) {
  driver_->fn.glUniform2ivFn(location, count, v);
}

void VendorGLAPI::glUniform2uiFn(GLint location, GLuint v0, GLuint v1) {
  driver_->fn.glUniform2uiFn(location, v0, v1);
}

void VendorGLAPI::glUniform2uivFn(GLint location,
                                GLsizei count,
                                const GLuint* v) {
  driver_->fn.glUniform2uivFn(location, count, v);
}

void VendorGLAPI::glUniform3fFn(GLint location, GLfloat x, GLfloat y, GLfloat z) {
  driver_->fn.glUniform3fFn(location, x, y, z);
}

void VendorGLAPI::glUniform3fvFn(GLint location,
                               GLsizei count,
                               const GLfloat* v) {
  driver_->fn.glUniform3fvFn(location, count, v);
}

void VendorGLAPI::glUniform3iFn(GLint location, GLint x, GLint y, GLint z) {
  driver_->fn.glUniform3iFn(location, x, y, z);
}

void VendorGLAPI::glUniform3ivFn(GLint location, GLsizei count, const GLint* v) {
  driver_->fn.glUniform3ivFn(location, count, v);
}

void VendorGLAPI::glUniform3uiFn(GLint location,
                               GLuint v0,
                               GLuint v1,
                               GLuint v2) {
  driver_->fn.glUniform3uiFn(location, v0, v1, v2);
}

void VendorGLAPI::glUniform3uivFn(GLint location,
                                GLsizei count,
                                const GLuint* v) {
  driver_->fn.glUniform3uivFn(location, count, v);
}

void VendorGLAPI::glUniform4fFn(GLint location,
                              GLfloat x,
                              GLfloat y,
                              GLfloat z,
                              GLfloat w) {
  driver_->fn.glUniform4fFn(location, x, y, z, w);
}

void VendorGLAPI::glUniform4fvFn(GLint location,
                               GLsizei count,
                               const GLfloat* v) {
  driver_->fn.glUniform4fvFn(location, count, v);
}

void VendorGLAPI::glUniform4iFn(GLint location,
                              GLint x,
                              GLint y,
                              GLint z,
                              GLint w) {
  driver_->fn.glUniform4iFn(location, x, y, z, w);
}

void VendorGLAPI::glUniform4ivFn(GLint location, GLsizei count, const GLint* v) {
  driver_->fn.glUniform4ivFn(location, count, v);
}

void VendorGLAPI::glUniform4uiFn(GLint location,
                               GLuint v0,
                               GLuint v1,
                               GLuint v2,
                               GLuint v3) {
  driver_->fn.glUniform4uiFn(location, v0, v1, v2, v3);
}

void VendorGLAPI::glUniform4uivFn(GLint location,
                                GLsizei count,
                                const GLuint* v) {
  driver_->fn.glUniform4uivFn(location, count, v);
}

void VendorGLAPI::glUniformBlockBindingFn(GLuint program,
                                        GLuint uniformBlockIndex,
                                        GLuint uniformBlockBinding) {
  driver_->fn.glUniformBlockBindingFn(program, uniformBlockIndex,
                                      uniformBlockBinding);
}

void VendorGLAPI::glUniformMatrix2fvFn(GLint location,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLfloat* value) {
  driver_->fn.glUniformMatrix2fvFn(location, count, transpose, value);
}

void VendorGLAPI::glUniformMatrix2x3fvFn(GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat* value) {
  driver_->fn.glUniformMatrix2x3fvFn(location, count, transpose, value);
}

void VendorGLAPI::glUniformMatrix2x4fvFn(GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat* value) {
  driver_->fn.glUniformMatrix2x4fvFn(location, count, transpose, value);
}

void VendorGLAPI::glUniformMatrix3fvFn(GLint location,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLfloat* value) {
  driver_->fn.glUniformMatrix3fvFn(location, count, transpose, value);
}

void VendorGLAPI::glUniformMatrix3x2fvFn(GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat* value) {
  driver_->fn.glUniformMatrix3x2fvFn(location, count, transpose, value);
}

void VendorGLAPI::glUniformMatrix3x4fvFn(GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat* value) {
  driver_->fn.glUniformMatrix3x4fvFn(location, count, transpose, value);
}

void VendorGLAPI::glUniformMatrix4fvFn(GLint location,
                                     GLsizei count,
                                     GLboolean transpose,
                                     const GLfloat* value) {
  driver_->fn.glUniformMatrix4fvFn(location, count, transpose, value);
}

void VendorGLAPI::glUniformMatrix4x2fvFn(GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat* value) {
  driver_->fn.glUniformMatrix4x2fvFn(location, count, transpose, value);
}

void VendorGLAPI::glUniformMatrix4x3fvFn(GLint location,
                                       GLsizei count,
                                       GLboolean transpose,
                                       const GLfloat* value) {
  driver_->fn.glUniformMatrix4x3fvFn(location, count, transpose, value);
}

GLboolean VendorGLAPI::glUnmapBufferFn(GLenum target) {
  return driver_->fn.glUnmapBufferFn(target);
}

void VendorGLAPI::glUseProgramFn(GLuint program) {
  driver_->fn.glUseProgramFn(program);
}

void VendorGLAPI::glValidateProgramFn(GLuint program) {
  driver_->fn.glValidateProgramFn(program);
}

void VendorGLAPI::glVertexAttrib1fFn(GLuint indx, GLfloat x) {
  driver_->fn.glVertexAttrib1fFn(indx, x);
}

void VendorGLAPI::glVertexAttrib1fvFn(GLuint indx, const GLfloat* values) {
  driver_->fn.glVertexAttrib1fvFn(indx, values);
}

void VendorGLAPI::glVertexAttrib2fFn(GLuint indx, GLfloat x, GLfloat y) {
  driver_->fn.glVertexAttrib2fFn(indx, x, y);
}

void VendorGLAPI::glVertexAttrib2fvFn(GLuint indx, const GLfloat* values) {
  driver_->fn.glVertexAttrib2fvFn(indx, values);
}

void VendorGLAPI::glVertexAttrib3fFn(GLuint indx,
                                   GLfloat x,
                                   GLfloat y,
                                   GLfloat z) {
  driver_->fn.glVertexAttrib3fFn(indx, x, y, z);
}

void VendorGLAPI::glVertexAttrib3fvFn(GLuint indx, const GLfloat* values) {
  driver_->fn.glVertexAttrib3fvFn(indx, values);
}

void VendorGLAPI::glVertexAttrib4fFn(GLuint indx,
                                   GLfloat x,
                                   GLfloat y,
                                   GLfloat z,
                                   GLfloat w) {
  driver_->fn.glVertexAttrib4fFn(indx, x, y, z, w);
}

void VendorGLAPI::glVertexAttrib4fvFn(GLuint indx, const GLfloat* values) {
  driver_->fn.glVertexAttrib4fvFn(indx, values);
}

void VendorGLAPI::glVertexAttribDivisorANGLEFn(GLuint index, GLuint divisor) {
  driver_->fn.glVertexAttribDivisorANGLEFn(index, divisor);
}

void VendorGLAPI::glVertexAttribI4iFn(GLuint indx,
                                    GLint x,
                                    GLint y,
                                    GLint z,
                                    GLint w) {
  driver_->fn.glVertexAttribI4iFn(indx, x, y, z, w);
}

void VendorGLAPI::glVertexAttribI4ivFn(GLuint indx, const GLint* values) {
  driver_->fn.glVertexAttribI4ivFn(indx, values);
}

void VendorGLAPI::glVertexAttribI4uiFn(GLuint indx,
                                     GLuint x,
                                     GLuint y,
                                     GLuint z,
                                     GLuint w) {
  driver_->fn.glVertexAttribI4uiFn(indx, x, y, z, w);
}

void VendorGLAPI::glVertexAttribI4uivFn(GLuint indx, const GLuint* values) {
  driver_->fn.glVertexAttribI4uivFn(indx, values);
}

void VendorGLAPI::glVertexAttribIPointerFn(GLuint indx,
                                         GLint size,
                                         GLenum type,
                                         GLsizei stride,
                                         const void* ptr) {
  driver_->fn.glVertexAttribIPointerFn(indx, size, type, stride, ptr);
}

void VendorGLAPI::glVertexAttribPointerFn(GLuint indx,
                                        GLint size,
                                        GLenum type,
                                        GLboolean normalized,
                                        GLsizei stride,
                                        const void* ptr) {
  driver_->fn.glVertexAttribPointerFn(indx, size, type, normalized, stride,
                                      ptr);
}

void VendorGLAPI::glViewportFn(GLint x, GLint y, GLsizei width, GLsizei height) {
  driver_->fn.glViewportFn(x, y, width, height);
}

void VendorGLAPI::glWaitSyncFn(GLsync sync, GLbitfield flags, GLuint64 timeout) {
  driver_->fn.glWaitSyncFn(sync, flags, timeout);
}

void VendorGLAPI::glWindowRectanglesEXTFn(GLenum mode,
                                        GLsizei n,
                                        const GLint* box) {
  driver_->fn.glWindowRectanglesEXTFn(mode, n, box);
}
