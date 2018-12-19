// Copyright (c) 2018 University of California, Irvine. All rights reserved.
// Authors: Zhihao Yao, Ardalan Amiri Sani
// Based on gl_bindings_api_autogen_gl.h by The Chromium Authors.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

void glActiveTextureFn(GLenum texture);
void glApplyFramebufferAttachmentCMAAINTELFn(void);
void glAttachShaderFn(GLuint program, GLuint shader);
void glBeginQueryFn(GLenum target, GLuint id);
void glBeginTransformFeedbackFn(GLenum primitiveMode);
void glBindAttribLocationFn(GLuint program,
                            GLuint index,
                            const char* name);
void glBindBufferFn(GLenum target, GLuint buffer);
void glBindBufferBaseFn(GLenum target, GLuint index, GLuint buffer);
void glBindBufferRangeFn(GLenum target,
                         GLuint index,
                         GLuint buffer,
                         GLintptr offset,
                         GLsizeiptr size);
void glBindFragDataLocationFn(GLuint program,
                              GLuint colorNumber,
                              const char* name);
void glBindFragDataLocationIndexedFn(GLuint program,
                                     GLuint colorNumber,
                                     GLuint index,
                                     const char* name);
void glBindFramebufferEXTFn(GLenum target, GLuint framebuffer);
void glBindImageTextureEXTFn(GLuint index,
                             GLuint texture,
                             GLint level,
                             GLboolean layered,
                             GLint layer,
                             GLenum access,
                             GLint format);
void glBindRenderbufferEXTFn(GLenum target, GLuint renderbuffer);
void glBindSamplerFn(GLuint unit, GLuint sampler);
void glBindTextureFn(GLenum target, GLuint texture);
void glBindTransformFeedbackFn(GLenum target, GLuint id);
void glBindUniformLocationCHROMIUMFn(GLuint program,
                                     GLint location,
                                     const char* name);
void glBindVertexArrayOESFn(GLuint array);
void glBlendBarrierKHRFn(void);
void glBlendColorFn(GLclampf red,
                    GLclampf green,
                    GLclampf blue,
                    GLclampf alpha);
void glBlendEquationFn(GLenum mode);
void glBlendEquationSeparateFn(GLenum modeRGB, GLenum modeAlpha);
void glBlendFuncFn(GLenum sfactor, GLenum dfactor);
void glBlendFuncSeparateFn(GLenum srcRGB,
                           GLenum dstRGB,
                           GLenum srcAlpha,
                           GLenum dstAlpha);
void glBlitFramebufferFn(GLint srcX0,
                         GLint srcY0,
                         GLint srcX1,
                         GLint srcY1,
                         GLint dstX0,
                         GLint dstY0,
                         GLint dstX1,
                         GLint dstY1,
                         GLbitfield mask,
                         GLenum filter);
void glBufferDataFn(GLenum target,
                    GLsizeiptr size,
                    const void* data,
                    GLenum usage);
void glBufferSubDataFn(GLenum target,
                       GLintptr offset,
                       GLsizeiptr size,
                       const void* data);
GLenum glCheckFramebufferStatusEXTFn(GLenum target);
void glClearFn(GLbitfield mask);
void glClearBufferfiFn(GLenum buffer,
                       GLint drawbuffer,
                       const GLfloat depth,
                       GLint stencil);
void glClearBufferfvFn(GLenum buffer,
                       GLint drawbuffer,
                       const GLfloat* value);
void glClearBufferivFn(GLenum buffer,
                       GLint drawbuffer,
                       const GLint* value);
void glClearBufferuivFn(GLenum buffer,
                        GLint drawbuffer,
                        const GLuint* value);
void glClearColorFn(GLclampf red,
                    GLclampf green,
                    GLclampf blue,
                    GLclampf alpha);
void glClearDepthFn(GLclampd depth);
void glClearDepthfFn(GLclampf depth);
void glClearStencilFn(GLint s);
GLenum glClientWaitSyncFn(GLsync sync,
                          GLbitfield flags,
                          GLuint64 timeout);
void glColorMaskFn(GLboolean red,
                   GLboolean green,
                   GLboolean blue,
                   GLboolean alpha);
void glCompileShaderFn(GLuint shader);
void glCompressedCopyTextureCHROMIUMFn(GLuint sourceId, GLuint destId);
void glCompressedTexImage2DFn(GLenum target,
                              GLint level,
                              GLenum internalformat,
                              GLsizei width,
                              GLsizei height,
                              GLint border,
                              GLsizei imageSize,
                              const void* data);
void glCompressedTexImage2DRobustANGLEFn(GLenum target,
                                         GLint level,
                                         GLenum internalformat,
                                         GLsizei width,
                                         GLsizei height,
                                         GLint border,
                                         GLsizei imageSize,
                                         GLsizei dataSize,
                                         const void* data);
void glCompressedTexImage3DFn(GLenum target,
                              GLint level,
                              GLenum internalformat,
                              GLsizei width,
                              GLsizei height,
                              GLsizei depth,
                              GLint border,
                              GLsizei imageSize,
                              const void* data);
void glCompressedTexImage3DRobustANGLEFn(GLenum target,
                                         GLint level,
                                         GLenum internalformat,
                                         GLsizei width,
                                         GLsizei height,
                                         GLsizei depth,
                                         GLint border,
                                         GLsizei imageSize,
                                         GLsizei dataSize,
                                         const void* data);
void glCompressedTexSubImage2DFn(GLenum target,
                                 GLint level,
                                 GLint xoffset,
                                 GLint yoffset,
                                 GLsizei width,
                                 GLsizei height,
                                 GLenum format,
                                 GLsizei imageSize,
                                 const void* data);
void glCompressedTexSubImage2DRobustANGLEFn(GLenum target,
                                            GLint level,
                                            GLint xoffset,
                                            GLint yoffset,
                                            GLsizei width,
                                            GLsizei height,
                                            GLenum format,
                                            GLsizei imageSize,
                                            GLsizei dataSize,
                                            const void* data);
void glCompressedTexSubImage3DFn(GLenum target,
                                 GLint level,
                                 GLint xoffset,
                                 GLint yoffset,
                                 GLint zoffset,
                                 GLsizei width,
                                 GLsizei height,
                                 GLsizei depth,
                                 GLenum format,
                                 GLsizei imageSize,
                                 const void* data);
void glCompressedTexSubImage3DRobustANGLEFn(GLenum target,
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
                                            const void* data);
void glCopyBufferSubDataFn(GLenum readTarget,
                           GLenum writeTarget,
                           GLintptr readOffset,
                           GLintptr writeOffset,
                           GLsizeiptr size);
void glCopySubTextureCHROMIUMFn(GLuint sourceId,
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
                                GLboolean unpackUnmultiplyAlpha);
void glCopyTexImage2DFn(GLenum target,
                        GLint level,
                        GLenum internalformat,
                        GLint x,
                        GLint y,
                        GLsizei width,
                        GLsizei height,
                        GLint border);
void glCopyTexSubImage2DFn(GLenum target,
                           GLint level,
                           GLint xoffset,
                           GLint yoffset,
                           GLint x,
                           GLint y,
                           GLsizei width,
                           GLsizei height);
void glCopyTexSubImage3DFn(GLenum target,
                           GLint level,
                           GLint xoffset,
                           GLint yoffset,
                           GLint zoffset,
                           GLint x,
                           GLint y,
                           GLsizei width,
                           GLsizei height);
void glCopyTextureCHROMIUMFn(GLuint sourceId,
                             GLint sourceLevel,
                             GLenum destTarget,
                             GLuint destId,
                             GLint destLevel,
                             GLint internalFormat,
                             GLenum destType,
                             GLboolean unpackFlipY,
                             GLboolean unpackPremultiplyAlpha,
                             GLboolean unpackUnmultiplyAlpha);
void glCoverageModulationNVFn(GLenum components);
void glCoverFillPathInstancedNVFn(GLsizei numPaths,
                                  GLenum pathNameType,
                                  const void* paths,
                                  GLuint pathBase,
                                  GLenum coverMode,
                                  GLenum transformType,
                                  const GLfloat* transformValues);
void glCoverFillPathNVFn(GLuint path, GLenum coverMode);
void glCoverStrokePathInstancedNVFn(GLsizei numPaths,
                                    GLenum pathNameType,
                                    const void* paths,
                                    GLuint pathBase,
                                    GLenum coverMode,
                                    GLenum transformType,
                                    const GLfloat* transformValues);
void glCoverStrokePathNVFn(GLuint name, GLenum coverMode);
GLuint glCreateProgramFn(void);
GLuint glCreateShaderFn(GLenum type);
void glCullFaceFn(GLenum mode);
void glDebugMessageCallbackFn(GLDEBUGPROC callback,
                              const void* userParam);
void glDebugMessageControlFn(GLenum source,
                             GLenum type,
                             GLenum severity,
                             GLsizei count,
                             const GLuint* ids,
                             GLboolean enabled);
void glDebugMessageInsertFn(GLenum source,
                            GLenum type,
                            GLuint id,
                            GLenum severity,
                            GLsizei length,
                            const char* buf);
void glDeleteBuffersARBFn(GLsizei n, const GLuint* buffers);
void glDeleteFencesAPPLEFn(GLsizei n, const GLuint* fences);
void glDeleteFencesNVFn(GLsizei n, const GLuint* fences);
void glDeleteFramebuffersEXTFn(GLsizei n, const GLuint* framebuffers);
void glDeletePathsNVFn(GLuint path, GLsizei range);
void glDeleteProgramFn(GLuint program);
void glDeleteQueriesFn(GLsizei n, const GLuint* ids);
void glDeleteRenderbuffersEXTFn(GLsizei n,
                                const GLuint* renderbuffers);
void glDeleteSamplersFn(GLsizei n, const GLuint* samplers);
void glDeleteShaderFn(GLuint shader);
void glDeleteSyncFn(GLsync sync);
void glDeleteTexturesFn(GLsizei n, const GLuint* textures);
void glDeleteTransformFeedbacksFn(GLsizei n, const GLuint* ids);
void glDeleteVertexArraysOESFn(GLsizei n, const GLuint* arrays);
void glDepthFuncFn(GLenum func);
void glDepthMaskFn(GLboolean flag);
void glDepthRangeFn(GLclampd zNear, GLclampd zFar);
void glDepthRangefFn(GLclampf zNear, GLclampf zFar);
void glDetachShaderFn(GLuint program, GLuint shader);
void glDisableFn(GLenum cap);
void glDisableVertexAttribArrayFn(GLuint index);
void glDiscardFramebufferEXTFn(GLenum target,
                               GLsizei numAttachments,
                               const GLenum* attachments);
void glDrawArraysFn(GLenum mode, GLint first, GLsizei count);
void glDrawArraysInstancedANGLEFn(GLenum mode,
                                  GLint first,
                                  GLsizei count,
                                  GLsizei primcount);
void glDrawBufferFn(GLenum mode);
void glDrawBuffersARBFn(GLsizei n, const GLenum* bufs);
void glDrawElementsFn(GLenum mode,
                      GLsizei count,
                      GLenum type,
                      const void* indices);
void glDrawElementsInstancedANGLEFn(GLenum mode,
                                    GLsizei count,
                                    GLenum type,
                                    const void* indices,
                                    GLsizei primcount);
void glDrawRangeElementsFn(GLenum mode,
                           GLuint start,
                           GLuint end,
                           GLsizei count,
                           GLenum type,
                           const void* indices);
void glEGLImageTargetRenderbufferStorageOESFn(GLenum target,
                                              GLeglImageOES image);
void glEGLImageTargetTexture2DOESFn(GLenum target,
                                    GLeglImageOES image);
void glEnableFn(GLenum cap);
void glEnableVertexAttribArrayFn(GLuint index);
void glEndQueryFn(GLenum target);
void glEndTransformFeedbackFn(void);
GLsync glFenceSyncFn(GLenum condition, GLbitfield flags);
void glFinishFn(void);
void glFinishFenceAPPLEFn(GLuint fence);
void glFinishFenceNVFn(GLuint fence);
void glFlushFn(void);
void glFlushMappedBufferRangeFn(GLenum target,
                                GLintptr offset,
                                GLsizeiptr length);
void glFramebufferRenderbufferEXTFn(GLenum target,
                                    GLenum attachment,
                                    GLenum renderbuffertarget,
                                    GLuint renderbuffer);
void glFramebufferTexture2DEXTFn(GLenum target,
                                 GLenum attachment,
                                 GLenum textarget,
                                 GLuint texture,
                                 GLint level);
void glFramebufferTexture2DMultisampleEXTFn(GLenum target,
                                            GLenum attachment,
                                            GLenum textarget,
                                            GLuint texture,
                                            GLint level,
                                            GLsizei samples);
void glFramebufferTextureLayerFn(GLenum target,
                                 GLenum attachment,
                                 GLuint texture,
                                 GLint level,
                                 GLint layer);
void glFrontFaceFn(GLenum mode);
void glGenBuffersARBFn(GLsizei n, GLuint* buffers);
void glGenerateMipmapEXTFn(GLenum target);
void glGenFencesAPPLEFn(GLsizei n, GLuint* fences);
void glGenFencesNVFn(GLsizei n, GLuint* fences);
void glGenFramebuffersEXTFn(GLsizei n, GLuint* framebuffers);
GLuint glGenPathsNVFn(GLsizei range);
void glGenQueriesFn(GLsizei n, GLuint* ids);
void glGenRenderbuffersEXTFn(GLsizei n, GLuint* renderbuffers);
void glGenSamplersFn(GLsizei n, GLuint* samplers);
void glGenTexturesFn(GLsizei n, GLuint* textures);
void glGenTransformFeedbacksFn(GLsizei n, GLuint* ids);
void glGenVertexArraysOESFn(GLsizei n, GLuint* arrays);
void glGetActiveAttribFn(GLuint program,
                         GLuint index,
                         GLsizei bufsize,
                         GLsizei* length,
                         GLint* size,
                         GLenum* type,
                         char* name);
void glGetActiveUniformFn(GLuint program,
                          GLuint index,
                          GLsizei bufsize,
                          GLsizei* length,
                          GLint* size,
                          GLenum* type,
                          char* name);
void glGetActiveUniformBlockivFn(GLuint program,
                                 GLuint uniformBlockIndex,
                                 GLenum pname,
                                 GLint* params);
void glGetActiveUniformBlockivRobustANGLEFn(GLuint program,
                                            GLuint uniformBlockIndex,
                                            GLenum pname,
                                            GLsizei bufSize,
                                            GLsizei* length,
                                            GLint* params);
void glGetActiveUniformBlockNameFn(GLuint program,
                                   GLuint uniformBlockIndex,
                                   GLsizei bufSize,
                                   GLsizei* length,
                                   char* uniformBlockName);
void glGetActiveUniformsivFn(GLuint program,
                             GLsizei uniformCount,
                             const GLuint* uniformIndices,
                             GLenum pname,
                             GLint* params);
void glGetAttachedShadersFn(GLuint program,
                            GLsizei maxcount,
                            GLsizei* count,
                            GLuint* shaders);
GLint glGetAttribLocationFn(GLuint program, const char* name);
void glGetBooleani_vRobustANGLEFn(GLenum target,
                                  GLuint index,
                                  GLsizei bufSize,
                                  GLsizei* length,
                                  GLboolean* data);
void glGetBooleanvFn(GLenum pname, GLboolean* params);
void glGetBooleanvRobustANGLEFn(GLenum pname,
                                GLsizei bufSize,
                                GLsizei* length,
                                GLboolean* data);
void glGetBufferParameteri64vRobustANGLEFn(GLenum target,
                                           GLenum pname,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLint64* params);
void glGetBufferParameterivFn(GLenum target,
                              GLenum pname,
                              GLint* params);
void glGetBufferParameterivRobustANGLEFn(GLenum target,
                                         GLenum pname,
                                         GLsizei bufSize,
                                         GLsizei* length,
                                         GLint* params);
void glGetBufferPointervRobustANGLEFn(GLenum target,
                                      GLenum pname,
                                      GLsizei bufSize,
                                      GLsizei* length,
                                      void** params);
void glGetDebugMessageLogFn(GLuint count,
                            GLsizei bufSize,
                            GLenum* sources,
                            GLenum* types,
                            GLuint* ids,
                            GLenum* severities,
                            GLsizei* lengths,
                            char* messageLog);
GLenum glGetErrorFn(void);
void glGetFenceivNVFn(GLuint fence, GLenum pname, GLint* params);
void glGetFloatvFn(GLenum pname, GLfloat* params);
void glGetFloatvRobustANGLEFn(GLenum pname,
                              GLsizei bufSize,
                              GLsizei* length,
                              GLfloat* data);
GLint glGetFragDataIndexFn(GLuint program, const char* name);
GLint glGetFragDataLocationFn(GLuint program, const char* name);
void glGetFramebufferAttachmentParameterivEXTFn(GLenum target,
                                                GLenum attachment,
                                                GLenum pname,
                                                GLint* params);
void glGetFramebufferAttachmentParameterivRobustANGLEFn(GLenum target,
                                                        GLenum attachment,
                                                        GLenum pname,
                                                        GLsizei bufSize,
                                                        GLsizei* length,
                                                        GLint* params);
void glGetFramebufferParameterivRobustANGLEFn(GLenum target,
                                              GLenum pname,
                                              GLsizei bufSize,
                                              GLsizei* length,
                                              GLint* params);
GLenum glGetGraphicsResetStatusARBFn(void);
void glGetInteger64i_vFn(GLenum target, GLuint index, GLint64* data);
void glGetInteger64i_vRobustANGLEFn(GLenum target,
                                    GLuint index,
                                    GLsizei bufSize,
                                    GLsizei* length,
                                    GLint64* data);
void glGetInteger64vFn(GLenum pname, GLint64* params);
void glGetInteger64vRobustANGLEFn(GLenum pname,
                                  GLsizei bufSize,
                                  GLsizei* length,
                                  GLint64* data);
void glGetIntegeri_vFn(GLenum target, GLuint index, GLint* data);
void glGetIntegeri_vRobustANGLEFn(GLenum target,
                                  GLuint index,
                                  GLsizei bufSize,
                                  GLsizei* length,
                                  GLint* data);
void glGetIntegervFn(GLenum pname, GLint* params);
void glGetIntegervRobustANGLEFn(GLenum pname,
                                GLsizei bufSize,
                                GLsizei* length,
                                GLint* data);
void glGetInternalformativFn(GLenum target,
                             GLenum internalformat,
                             GLenum pname,
                             GLsizei bufSize,
                             GLint* params);
void glGetInternalformativRobustANGLEFn(GLenum target,
                                        GLenum internalformat,
                                        GLenum pname,
                                        GLsizei bufSize,
                                        GLsizei* length,
                                        GLint* params);
void glGetMultisamplefvFn(GLenum pname, GLuint index, GLfloat* val);
void glGetMultisamplefvRobustANGLEFn(GLenum pname,
                                     GLuint index,
                                     GLsizei bufSize,
                                     GLsizei* length,
                                     GLfloat* val);
void glGetnUniformfvRobustANGLEFn(GLuint program,
                                  GLint location,
                                  GLsizei bufSize,
                                  GLsizei* length,
                                  GLfloat* params);
void glGetnUniformivRobustANGLEFn(GLuint program,
                                  GLint location,
                                  GLsizei bufSize,
                                  GLsizei* length,
                                  GLint* params);
void glGetnUniformuivRobustANGLEFn(GLuint program,
                                   GLint location,
                                   GLsizei bufSize,
                                   GLsizei* length,
                                   GLuint* params);
void glGetObjectLabelFn(GLenum identifier,
                        GLuint name,
                        GLsizei bufSize,
                        GLsizei* length,
                        char* label);
void glGetObjectPtrLabelFn(void* ptr,
                           GLsizei bufSize,
                           GLsizei* length,
                           char* label);
void glGetPointervFn(GLenum pname, void** params);
void glGetPointervRobustANGLERobustANGLEFn(GLenum pname,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           void** params);
void glGetProgramBinaryFn(GLuint program,
                          GLsizei bufSize,
                          GLsizei* length,
                          GLenum* binaryFormat,
                          GLvoid* binary);
void glGetProgramInfoLogFn(GLuint program,
                           GLsizei bufsize,
                           GLsizei* length,
                           char* infolog);
void glGetProgramInterfaceivFn(GLuint program,
                               GLenum programInterface,
                               GLenum pname,
                               GLint* params);
void glGetProgramInterfaceivRobustANGLEFn(GLuint program,
                                          GLenum programInterface,
                                          GLenum pname,
                                          GLsizei bufSize,
                                          GLsizei* length,
                                          GLint* params);
void glGetProgramivFn(GLuint program, GLenum pname, GLint* params);
void glGetProgramivRobustANGLEFn(GLuint program,
                                 GLenum pname,
                                 GLsizei bufSize,
                                 GLsizei* length,
                                 GLint* params);
void glGetProgramResourceivFn(GLuint program,
                              GLenum programInterface,
                              GLuint index,
                              GLsizei propCount,
                              const GLenum* props,
                              GLsizei bufSize,
                              GLsizei* length,
                              GLint* params);
GLint glGetProgramResourceLocationFn(GLuint program,
                                     GLenum programInterface,
                                     const char* name);
void glGetProgramResourceNameFn(GLuint program,
                                GLenum programInterface,
                                GLuint index,
                                GLsizei bufSize,
                                GLsizei* length,
                                GLchar* name);
void glGetQueryivFn(GLenum target, GLenum pname, GLint* params);
void glGetQueryivRobustANGLEFn(GLenum target,
                               GLenum pname,
                               GLsizei bufSize,
                               GLsizei* length,
                               GLint* params);
void glGetQueryObjecti64vFn(GLuint id, GLenum pname, GLint64* params);
void glGetQueryObjecti64vRobustANGLEFn(GLuint id,
                                       GLenum pname,
                                       GLsizei bufSize,
                                       GLsizei* length,
                                       GLint64* params);
void glGetQueryObjectivFn(GLuint id, GLenum pname, GLint* params);
void glGetQueryObjectivRobustANGLEFn(GLuint id,
                                     GLenum pname,
                                     GLsizei bufSize,
                                     GLsizei* length,
                                     GLint* params);
void glGetQueryObjectui64vFn(GLuint id,
                             GLenum pname,
                             GLuint64* params);
void glGetQueryObjectui64vRobustANGLEFn(GLuint id,
                                        GLenum pname,
                                        GLsizei bufSize,
                                        GLsizei* length,
                                        GLuint64* params);
void glGetQueryObjectuivFn(GLuint id, GLenum pname, GLuint* params);
void glGetQueryObjectuivRobustANGLEFn(GLuint id,
                                      GLenum pname,
                                      GLsizei bufSize,
                                      GLsizei* length,
                                      GLuint* params);
void glGetRenderbufferParameterivEXTFn(GLenum target,
                                       GLenum pname,
                                       GLint* params);
void glGetRenderbufferParameterivRobustANGLEFn(GLenum target,
                                               GLenum pname,
                                               GLsizei bufSize,
                                               GLsizei* length,
                                               GLint* params);
void glGetSamplerParameterfvFn(GLuint sampler,
                               GLenum pname,
                               GLfloat* params);
void glGetSamplerParameterfvRobustANGLEFn(GLuint sampler,
                                          GLenum pname,
                                          GLsizei bufSize,
                                          GLsizei* length,
                                          GLfloat* params);
void glGetSamplerParameterIivRobustANGLEFn(GLuint sampler,
                                           GLenum pname,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLint* params);
void glGetSamplerParameterIuivRobustANGLEFn(GLuint sampler,
                                            GLenum pname,
                                            GLsizei bufSize,
                                            GLsizei* length,
                                            GLuint* params);
void glGetSamplerParameterivFn(GLuint sampler,
                               GLenum pname,
                               GLint* params);
void glGetSamplerParameterivRobustANGLEFn(GLuint sampler,
                                          GLenum pname,
                                          GLsizei bufSize,
                                          GLsizei* length,
                                          GLint* params);
void glGetShaderInfoLogFn(GLuint shader,
                          GLsizei bufsize,
                          GLsizei* length,
                          char* infolog);
void glGetShaderivFn(GLuint shader, GLenum pname, GLint* params);
void glGetShaderivRobustANGLEFn(GLuint shader,
                                GLenum pname,
                                GLsizei bufSize,
                                GLsizei* length,
                                GLint* params);
void glGetShaderPrecisionFormatFn(GLenum shadertype,
                                  GLenum precisiontype,
                                  GLint* range,
                                  GLint* precision);
void glGetShaderSourceFn(GLuint shader,
                         GLsizei bufsize,
                         GLsizei* length,
                         char* source);
const GLubyte* glGetStringFn(GLenum name);
const GLubyte* glGetStringiFn(GLenum name, GLuint index);
void glGetSyncivFn(GLsync sync,
                   GLenum pname,
                   GLsizei bufSize,
                   GLsizei* length,
                   GLint* values);
void glGetTexLevelParameterfvFn(GLenum target,
                                GLint level,
                                GLenum pname,
                                GLfloat* params);
void glGetTexLevelParameterfvRobustANGLEFn(GLenum target,
                                           GLint level,
                                           GLenum pname,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLfloat* params);
void glGetTexLevelParameterivFn(GLenum target,
                                GLint level,
                                GLenum pname,
                                GLint* params);
void glGetTexLevelParameterivRobustANGLEFn(GLenum target,
                                           GLint level,
                                           GLenum pname,
                                           GLsizei bufSize,
                                           GLsizei* length,
                                           GLint* params);
void glGetTexParameterfvFn(GLenum target,
                           GLenum pname,
                           GLfloat* params);
void glGetTexParameterfvRobustANGLEFn(GLenum target,
                                      GLenum pname,
                                      GLsizei bufSize,
                                      GLsizei* length,
                                      GLfloat* params);
void glGetTexParameterIivRobustANGLEFn(GLenum target,
                                       GLenum pname,
                                       GLsizei bufSize,
                                       GLsizei* length,
                                       GLint* params);
void glGetTexParameterIuivRobustANGLEFn(GLenum target,
                                        GLenum pname,
                                        GLsizei bufSize,
                                        GLsizei* length,
                                        GLuint* params);
void glGetTexParameterivFn(GLenum target, GLenum pname, GLint* params);
void glGetTexParameterivRobustANGLEFn(GLenum target,
                                      GLenum pname,
                                      GLsizei bufSize,
                                      GLsizei* length,
                                      GLint* params);
void glGetTransformFeedbackVaryingFn(GLuint program,
                                     GLuint index,
                                     GLsizei bufSize,
                                     GLsizei* length,
                                     GLsizei* size,
                                     GLenum* type,
                                     char* name);
void glGetTranslatedShaderSourceANGLEFn(GLuint shader,
                                        GLsizei bufsize,
                                        GLsizei* length,
                                        char* source);
GLuint glGetUniformBlockIndexFn(GLuint program,
                                const char* uniformBlockName);
void glGetUniformfvFn(GLuint program, GLint location, GLfloat* params);
void glGetUniformfvRobustANGLEFn(GLuint program,
                                 GLint location,
                                 GLsizei bufSize,
                                 GLsizei* length,
                                 GLfloat* params);
void glGetUniformIndicesFn(GLuint program,
                           GLsizei uniformCount,
                           const char* const* uniformNames,
                           GLuint* uniformIndices);
void glGetUniformivFn(GLuint program, GLint location, GLint* params);
void glGetUniformivRobustANGLEFn(GLuint program,
                                 GLint location,
                                 GLsizei bufSize,
                                 GLsizei* length,
                                 GLint* params);
GLint glGetUniformLocationFn(GLuint program, const char* name);
void glGetUniformuivFn(GLuint program, GLint location, GLuint* params);
void glGetUniformuivRobustANGLEFn(GLuint program,
                                  GLint location,
                                  GLsizei bufSize,
                                  GLsizei* length,
                                  GLuint* params);
void glGetVertexAttribfvFn(GLuint index,
                           GLenum pname,
                           GLfloat* params);
void glGetVertexAttribfvRobustANGLEFn(GLuint index,
                                      GLenum pname,
                                      GLsizei bufSize,
                                      GLsizei* length,
                                      GLfloat* params);
void glGetVertexAttribIivRobustANGLEFn(GLuint index,
                                       GLenum pname,
                                       GLsizei bufSize,
                                       GLsizei* length,
                                       GLint* params);
void glGetVertexAttribIuivRobustANGLEFn(GLuint index,
                                        GLenum pname,
                                        GLsizei bufSize,
                                        GLsizei* length,
                                        GLuint* params);
void glGetVertexAttribivFn(GLuint index, GLenum pname, GLint* params);
void glGetVertexAttribivRobustANGLEFn(GLuint index,
                                      GLenum pname,
                                      GLsizei bufSize,
                                      GLsizei* length,
                                      GLint* params);
void glGetVertexAttribPointervFn(GLuint index,
                                 GLenum pname,
                                 void** pointer);
void glGetVertexAttribPointervRobustANGLEFn(GLuint index,
                                            GLenum pname,
                                            GLsizei bufSize,
                                            GLsizei* length,
                                            void** pointer);
void glHintFn(GLenum target, GLenum mode);
void glInsertEventMarkerEXTFn(GLsizei length, const char* marker);
void glInvalidateFramebufferFn(GLenum target,
                               GLsizei numAttachments,
                               const GLenum* attachments);
void glInvalidateSubFramebufferFn(GLenum target,
                                  GLsizei numAttachments,
                                  const GLenum* attachments,
                                  GLint x,
                                  GLint y,
                                  GLint width,
                                  GLint height);
GLboolean glIsBufferFn(GLuint buffer);
GLboolean glIsEnabledFn(GLenum cap);
GLboolean glIsFenceAPPLEFn(GLuint fence);
GLboolean glIsFenceNVFn(GLuint fence);
GLboolean glIsFramebufferEXTFn(GLuint framebuffer);
GLboolean glIsPathNVFn(GLuint path);
GLboolean glIsProgramFn(GLuint program);
GLboolean glIsQueryFn(GLuint query);
GLboolean glIsRenderbufferEXTFn(GLuint renderbuffer);
GLboolean glIsSamplerFn(GLuint sampler);
GLboolean glIsShaderFn(GLuint shader);
GLboolean glIsSyncFn(GLsync sync);
GLboolean glIsTextureFn(GLuint texture);
GLboolean glIsTransformFeedbackFn(GLuint id);
GLboolean glIsVertexArrayOESFn(GLuint array);
void glLineWidthFn(GLfloat width);
void glLinkProgramFn(GLuint program);
void* glMapBufferFn(GLenum target, GLenum access);
void* glMapBufferRangeFn(GLenum target,
                         GLintptr offset,
                         GLsizeiptr length,
                         GLbitfield access);
void glMatrixLoadfEXTFn(GLenum matrixMode, const GLfloat* m);
void glMatrixLoadIdentityEXTFn(GLenum matrixMode);
void glMemoryBarrierEXTFn(GLbitfield barriers);
void glObjectLabelFn(GLenum identifier,
                     GLuint name,
                     GLsizei length,
                     const char* label);
void glObjectPtrLabelFn(void* ptr, GLsizei length, const char* label);
void glPathCommandsNVFn(GLuint path,
                        GLsizei numCommands,
                        const GLubyte* commands,
                        GLsizei numCoords,
                        GLenum coordType,
                        const GLvoid* coords);
void glPathParameterfNVFn(GLuint path, GLenum pname, GLfloat value);
void glPathParameteriNVFn(GLuint path, GLenum pname, GLint value);
void glPathStencilFuncNVFn(GLenum func, GLint ref, GLuint mask);
void glPauseTransformFeedbackFn(void);
void glPixelStoreiFn(GLenum pname, GLint param);
void glPointParameteriFn(GLenum pname, GLint param);
void glPolygonModeFn(GLenum face, GLenum mode);
void glPolygonOffsetFn(GLfloat factor, GLfloat units);
void glPopDebugGroupFn();
void glPopGroupMarkerEXTFn(void);
void glPrimitiveRestartIndexFn(GLuint index);
void glProgramBinaryFn(GLuint program,
                       GLenum binaryFormat,
                       const GLvoid* binary,
                       GLsizei length);
void glProgramParameteriFn(GLuint program, GLenum pname, GLint value);
void glProgramPathFragmentInputGenNVFn(GLuint program,
                                       GLint location,
                                       GLenum genMode,
                                       GLint components,
                                       const GLfloat* coeffs);
void glPushDebugGroupFn(GLenum source,
                        GLuint id,
                        GLsizei length,
                        const char* message);
void glPushGroupMarkerEXTFn(GLsizei length, const char* marker);
void glQueryCounterFn(GLuint id, GLenum target);
void glReadBufferFn(GLenum src);
void glReadnPixelsRobustANGLEFn(GLint x,
                                GLint y,
                                GLsizei width,
                                GLsizei height,
                                GLenum format,
                                GLenum type,
                                GLsizei bufSize,
                                GLsizei* length,
                                GLsizei* columns,
                                GLsizei* rows,
                                void* data);
void glReadPixelsFn(GLint x,
                    GLint y,
                    GLsizei width,
                    GLsizei height,
                    GLenum format,
                    GLenum type,
                    void* pixels);
void glReadPixelsRobustANGLEFn(GLint x,
                               GLint y,
                               GLsizei width,
                               GLsizei height,
                               GLenum format,
                               GLenum type,
                               GLsizei bufSize,
                               GLsizei* length,
                               GLsizei* columns,
                               GLsizei* rows,
                               void* pixels);
void glReleaseShaderCompilerFn(void);
void glRenderbufferStorageEXTFn(GLenum target,
                                GLenum internalformat,
                                GLsizei width,
                                GLsizei height);
void glRenderbufferStorageMultisampleFn(GLenum target,
                                        GLsizei samples,
                                        GLenum internalformat,
                                        GLsizei width,
                                        GLsizei height);
void glRenderbufferStorageMultisampleEXTFn(GLenum target,
                                           GLsizei samples,
                                           GLenum internalformat,
                                           GLsizei width,
                                           GLsizei height);
void glRequestExtensionANGLEFn(const char* name);
void glResumeTransformFeedbackFn(void);
void glSampleCoverageFn(GLclampf value, GLboolean invert);
void glSamplerParameterfFn(GLuint sampler,
                           GLenum pname,
                           GLfloat param);
void glSamplerParameterfvFn(GLuint sampler,
                            GLenum pname,
                            const GLfloat* params);
void glSamplerParameterfvRobustANGLEFn(GLuint sampler,
                                       GLenum pname,
                                       GLsizei bufSize,
                                       const GLfloat* param);
void glSamplerParameteriFn(GLuint sampler, GLenum pname, GLint param);
void glSamplerParameterIivRobustANGLEFn(GLuint sampler,
                                        GLenum pname,
                                        GLsizei bufSize,
                                        const GLint* param);
void glSamplerParameterIuivRobustANGLEFn(GLuint sampler,
                                         GLenum pname,
                                         GLsizei bufSize,
                                         const GLuint* param);
void glSamplerParameterivFn(GLuint sampler,
                            GLenum pname,
                            const GLint* params);
void glSamplerParameterivRobustANGLEFn(GLuint sampler,
                                       GLenum pname,
                                       GLsizei bufSize,
                                       const GLint* param);
void glScissorFn(GLint x, GLint y, GLsizei width, GLsizei height);
void glSetFenceAPPLEFn(GLuint fence);
void glSetFenceNVFn(GLuint fence, GLenum condition);
void glShaderBinaryFn(GLsizei n,
                      const GLuint* shaders,
                      GLenum binaryformat,
                      const void* binary,
                      GLsizei length);
void glShaderSourceFn(GLuint shader,
                      GLsizei count,
                      const char* const* str,
                      const GLint* length);
void glStencilFillPathInstancedNVFn(GLsizei numPaths,
                                    GLenum pathNameType,
                                    const void* paths,
                                    GLuint pathBase,
                                    GLenum fillMode,
                                    GLuint mask,
                                    GLenum transformType,
                                    const GLfloat* transformValues);
void glStencilFillPathNVFn(GLuint path, GLenum fillMode, GLuint mask);
void glStencilFuncFn(GLenum func, GLint ref, GLuint mask);
void glStencilFuncSeparateFn(GLenum face,
                             GLenum func,
                             GLint ref,
                             GLuint mask);
void glStencilMaskFn(GLuint mask);
void glStencilMaskSeparateFn(GLenum face, GLuint mask);
void glStencilOpFn(GLenum fail, GLenum zfail, GLenum zpass);
void glStencilOpSeparateFn(GLenum face,
                           GLenum fail,
                           GLenum zfail,
                           GLenum zpass);
void glStencilStrokePathInstancedNVFn(GLsizei numPaths,
                                      GLenum pathNameType,
                                      const void* paths,
                                      GLuint pathBase,
                                      GLint ref,
                                      GLuint mask,
                                      GLenum transformType,
                                      const GLfloat* transformValues);
void glStencilStrokePathNVFn(GLuint path,
                             GLint reference,
                             GLuint mask);
void glStencilThenCoverFillPathInstancedNVFn(
    GLsizei numPaths,
    GLenum pathNameType,
    const void* paths,
    GLuint pathBase,
    GLenum fillMode,
    GLuint mask,
    GLenum coverMode,
    GLenum transformType,
    const GLfloat* transformValues);
void glStencilThenCoverFillPathNVFn(GLuint path,
                                    GLenum fillMode,
                                    GLuint mask,
                                    GLenum coverMode);
void glStencilThenCoverStrokePathInstancedNVFn(
    GLsizei numPaths,
    GLenum pathNameType,
    const void* paths,
    GLuint pathBase,
    GLint ref,
    GLuint mask,
    GLenum coverMode,
    GLenum transformType,
    const GLfloat* transformValues);
void glStencilThenCoverStrokePathNVFn(GLuint path,
                                      GLint reference,
                                      GLuint mask,
                                      GLenum coverMode);
GLboolean glTestFenceAPPLEFn(GLuint fence);
GLboolean glTestFenceNVFn(GLuint fence);
void glTexBufferFn(GLenum target,
                   GLenum internalformat,
                   GLuint buffer);
void glTexBufferRangeFn(GLenum target,
                        GLenum internalformat,
                        GLuint buffer,
                        GLintptr offset,
                        GLsizeiptr size);
void glTexImage2DFn(GLenum target,
                    GLint level,
                    GLint internalformat,
                    GLsizei width,
                    GLsizei height,
                    GLint border,
                    GLenum format,
                    GLenum type,
                    const void* pixels);
void glTexImage2DRobustANGLEFn(GLenum target,
                               GLint level,
                               GLint internalformat,
                               GLsizei width,
                               GLsizei height,
                               GLint border,
                               GLenum format,
                               GLenum type,
                               GLsizei bufSize,
                               const void* pixels);
void glTexImage3DFn(GLenum target,
                    GLint level,
                    GLint internalformat,
                    GLsizei width,
                    GLsizei height,
                    GLsizei depth,
                    GLint border,
                    GLenum format,
                    GLenum type,
                    const void* pixels);
void glTexImage3DRobustANGLEFn(GLenum target,
                               GLint level,
                               GLint internalformat,
                               GLsizei width,
                               GLsizei height,
                               GLsizei depth,
                               GLint border,
                               GLenum format,
                               GLenum type,
                               GLsizei bufSize,
                               const void* pixels);
void glTexParameterfFn(GLenum target, GLenum pname, GLfloat param);
void glTexParameterfvFn(GLenum target,
                        GLenum pname,
                        const GLfloat* params);
void glTexParameterfvRobustANGLEFn(GLenum target,
                                   GLenum pname,
                                   GLsizei bufSize,
                                   const GLfloat* params);
void glTexParameteriFn(GLenum target, GLenum pname, GLint param);
void glTexParameterIivRobustANGLEFn(GLenum target,
                                    GLenum pname,
                                    GLsizei bufSize,
                                    const GLint* params);
void glTexParameterIuivRobustANGLEFn(GLenum target,
                                     GLenum pname,
                                     GLsizei bufSize,
                                     const GLuint* params);
void glTexParameterivFn(GLenum target,
                        GLenum pname,
                        const GLint* params);
void glTexParameterivRobustANGLEFn(GLenum target,
                                   GLenum pname,
                                   GLsizei bufSize,
                                   const GLint* params);
void glTexStorage2DEXTFn(GLenum target,
                         GLsizei levels,
                         GLenum internalformat,
                         GLsizei width,
                         GLsizei height);
void glTexStorage3DFn(GLenum target,
                      GLsizei levels,
                      GLenum internalformat,
                      GLsizei width,
                      GLsizei height,
                      GLsizei depth);
void glTexSubImage2DFn(GLenum target,
                       GLint level,
                       GLint xoffset,
                       GLint yoffset,
                       GLsizei width,
                       GLsizei height,
                       GLenum format,
                       GLenum type,
                       const void* pixels);
void glTexSubImage2DRobustANGLEFn(GLenum target,
                                  GLint level,
                                  GLint xoffset,
                                  GLint yoffset,
                                  GLsizei width,
                                  GLsizei height,
                                  GLenum format,
                                  GLenum type,
                                  GLsizei bufSize,
                                  const void* pixels);
void glTexSubImage3DFn(GLenum target,
                       GLint level,
                       GLint xoffset,
                       GLint yoffset,
                       GLint zoffset,
                       GLsizei width,
                       GLsizei height,
                       GLsizei depth,
                       GLenum format,
                       GLenum type,
                       const void* pixels);
void glTexSubImage3DRobustANGLEFn(GLenum target,
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
                                  const void* pixels);
void glTransformFeedbackVaryingsFn(GLuint program,
                                   GLsizei count,
                                   const char* const* varyings,
                                   GLenum bufferMode);
void glUniform1fFn(GLint location, GLfloat x);
void glUniform1fvFn(GLint location, GLsizei count, const GLfloat* v);
void glUniform1iFn(GLint location, GLint x);
void glUniform1ivFn(GLint location, GLsizei count, const GLint* v);
void glUniform1uiFn(GLint location, GLuint v0);
void glUniform1uivFn(GLint location, GLsizei count, const GLuint* v);
void glUniform2fFn(GLint location, GLfloat x, GLfloat y);
void glUniform2fvFn(GLint location, GLsizei count, const GLfloat* v);
void glUniform2iFn(GLint location, GLint x, GLint y);
void glUniform2ivFn(GLint location, GLsizei count, const GLint* v);
void glUniform2uiFn(GLint location, GLuint v0, GLuint v1);
void glUniform2uivFn(GLint location, GLsizei count, const GLuint* v);
void glUniform3fFn(GLint location, GLfloat x, GLfloat y, GLfloat z);
void glUniform3fvFn(GLint location, GLsizei count, const GLfloat* v);
void glUniform3iFn(GLint location, GLint x, GLint y, GLint z);
void glUniform3ivFn(GLint location, GLsizei count, const GLint* v);
void glUniform3uiFn(GLint location, GLuint v0, GLuint v1, GLuint v2);
void glUniform3uivFn(GLint location, GLsizei count, const GLuint* v);
void glUniform4fFn(GLint location,
                   GLfloat x,
                   GLfloat y,
                   GLfloat z,
                   GLfloat w);
void glUniform4fvFn(GLint location, GLsizei count, const GLfloat* v);
void glUniform4iFn(GLint location, GLint x, GLint y, GLint z, GLint w);
void glUniform4ivFn(GLint location, GLsizei count, const GLint* v);
void glUniform4uiFn(GLint location,
                    GLuint v0,
                    GLuint v1,
                    GLuint v2,
                    GLuint v3);
void glUniform4uivFn(GLint location, GLsizei count, const GLuint* v);
void glUniformBlockBindingFn(GLuint program,
                             GLuint uniformBlockIndex,
                             GLuint uniformBlockBinding);
void glUniformMatrix2fvFn(GLint location,
                          GLsizei count,
                          GLboolean transpose,
                          const GLfloat* value);
void glUniformMatrix2x3fvFn(GLint location,
                            GLsizei count,
                            GLboolean transpose,
                            const GLfloat* value);
void glUniformMatrix2x4fvFn(GLint location,
                            GLsizei count,
                            GLboolean transpose,
                            const GLfloat* value);
void glUniformMatrix3fvFn(GLint location,
                          GLsizei count,
                          GLboolean transpose,
                          const GLfloat* value);
void glUniformMatrix3x2fvFn(GLint location,
                            GLsizei count,
                            GLboolean transpose,
                            const GLfloat* value);
void glUniformMatrix3x4fvFn(GLint location,
                            GLsizei count,
                            GLboolean transpose,
                            const GLfloat* value);
void glUniformMatrix4fvFn(GLint location,
                          GLsizei count,
                          GLboolean transpose,
                          const GLfloat* value);
void glUniformMatrix4x2fvFn(GLint location,
                            GLsizei count,
                            GLboolean transpose,
                            const GLfloat* value);
void glUniformMatrix4x3fvFn(GLint location,
                            GLsizei count,
                            GLboolean transpose,
                            const GLfloat* value);
GLboolean glUnmapBufferFn(GLenum target);
void glUseProgramFn(GLuint program);
void glValidateProgramFn(GLuint program);
void glVertexAttrib1fFn(GLuint indx, GLfloat x);
void glVertexAttrib1fvFn(GLuint indx, const GLfloat* values);
void glVertexAttrib2fFn(GLuint indx, GLfloat x, GLfloat y);
void glVertexAttrib2fvFn(GLuint indx, const GLfloat* values);
void glVertexAttrib3fFn(GLuint indx, GLfloat x, GLfloat y, GLfloat z);
void glVertexAttrib3fvFn(GLuint indx, const GLfloat* values);
void glVertexAttrib4fFn(GLuint indx,
                        GLfloat x,
                        GLfloat y,
                        GLfloat z,
                        GLfloat w);
void glVertexAttrib4fvFn(GLuint indx, const GLfloat* values);
void glVertexAttribDivisorANGLEFn(GLuint index, GLuint divisor);
void glVertexAttribI4iFn(GLuint indx,
                         GLint x,
                         GLint y,
                         GLint z,
                         GLint w);
void glVertexAttribI4ivFn(GLuint indx, const GLint* values);
void glVertexAttribI4uiFn(GLuint indx,
                          GLuint x,
                          GLuint y,
                          GLuint z,
                          GLuint w);
void glVertexAttribI4uivFn(GLuint indx, const GLuint* values);
void glVertexAttribIPointerFn(GLuint indx,
                              GLint size,
                              GLenum type,
                              GLsizei stride,
                              const void* ptr);
void glVertexAttribPointerFn(GLuint indx,
                             GLint size,
                             GLenum type,
                             GLboolean normalized,
                             GLsizei stride,
                             const void* ptr);
void glViewportFn(GLint x, GLint y, GLsizei width, GLsizei height);
void glWaitSyncFn(GLsync sync, GLbitfield flags, GLuint64 timeout);
void glWindowRectanglesEXTFn(GLenum mode, GLsizei n, const GLint* box);
