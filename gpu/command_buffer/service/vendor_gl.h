// Copyright (c) 2018 University of California, Irvine. All rights reserved.
// Authors: Zhihao Yao, Ardalan Amiri Sani
// Based on gl_utils.h by The Chromium Authors.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_GLES_VENDOR_BINDINGS_H_
#define GPU_GLES_VENDOR_BINDINGS_H_

#if defined(OS_POSIX) && !defined(__STDC_FORMAT_MACROS)
#define __STDC_FORMAT_MACROS
#endif
#if defined(USE_GLX)
#include "ui/gfx/x/x11.h"
#define Bool int
#define Status int
#endif  

#include <GL/gl.h>
#include <GL/glext.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <stdint.h>

#include <string>

#include "base/logging.h"
#include "build/build_config.h"
#include "gpu/command_buffer/service/milko_prints.h"
#include "ui/gl/gl_version_info.h"
#include "ui/gl/extension_set.h"
#include "ui/gl/gl_export.h"
#include "ui/gl/gl_implementation.h"
#include "ui/gl/gl_gl_api_implementation.h"

#if defined(OS_WIN)
#include <GL/wglext.h>
#elif defined(OS_MACOSX)
#include <OpenGL/OpenGL.h>
#elif defined(USE_GLX)
#include <GL/glx.h>
#include <GL/glxext.h>

#undef Bool
#undef Status
#endif

#define GL_LOW_FLOAT                                     0x8DF0
#define GL_MEDIUM_FLOAT                                  0x8DF1
#define GL_HIGH_FLOAT                                    0x8DF2
#define GL_LOW_INT                                       0x8DF3
#define GL_MEDIUM_INT                                    0x8DF4
#define GL_HIGH_INT                                      0x8DF5
#define GL_IMPLEMENTATION_COLOR_READ_TYPE                0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT              0x8B9B
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS                  0x8DFD
#define GL_MAX_VERTEX_UNIFORM_VECTORS                    0x8DFB
#define GL_MAX_VARYING_VECTORS                           0x8DFC
#define GL_SHADER_BINARY_FORMATS                         0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS                     0x8DF9
#define GL_SHADER_COMPILER                               0x8DFA
#define GL_RGB565                                        0x8D62
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES           0x8B8B
#define GL_RGB8_OES                                      0x8051
#define GL_RGBA8_OES                                     0x8058
#define GL_HALF_FLOAT_OES                                0x8D61

#define GL_TEXTURE_EXTERNAL_OES                          0x8D65
#define GL_SAMPLER_EXTERNAL_OES                          0x8D66
#define GL_TEXTURE_BINDING_EXTERNAL_OES                  0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES              0x8D68

#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE         0x93A0

#define GL_UNPACK_COLORSPACE_CONVERSION_CHROMIUM         0x9243
#define GL_BIND_GENERATES_RESOURCE_CHROMIUM              0x9244

#define GL_TEXTURE_USAGE_ANGLE                           0x93A2
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE                  0x93A3

#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT                  0x912F
#define GL_ALPHA8_EXT                                    0x803C
#define GL_LUMINANCE8_EXT                                0x8040
#define GL_LUMINANCE8_ALPHA8_EXT                         0x8045
#define GL_RGBA32F_EXT                                   0x8814
#define GL_RGB32F_EXT                                    0x8815
#define GL_ALPHA32F_EXT                                  0x8816
#define GL_LUMINANCE32F_EXT                              0x8818
#define GL_LUMINANCE_ALPHA32F_EXT                        0x8819
#define GL_RGBA16F_EXT                                   0x881A
#define GL_RGB16F_EXT                                    0x881B
#define GL_RG16F_EXT 0x822F
#define GL_R16F_EXT 0x822D
#define GL_ALPHA16F_EXT                                  0x881C
#define GL_LUMINANCE16F_EXT                              0x881E
#define GL_LUMINANCE_ALPHA16F_EXT                        0x881F
#define GL_R32F_EXT 0x822E
#define GL_RG32F_EXT 0x8230
#define GL_BGRA8_EXT                                     0x93A1

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE             0x88FE

#define GL_CLIENT_ARRAYS_ANGLE 0x93AA

#define GL_ROBUST_RESOURCE_INITIALIZATION_ANGLE 0x93AB

#define GL_REQUESTABLE_EXTENSIONS_ANGLE 0x93A8
#define GL_NUM_REQUESTABLE_EXTENSIONS_ANGLE 0x93A8

#define GL_ANY_SAMPLES_PASSED_EXT                        0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT           0x8D6A
#define GL_CURRENT_QUERY_EXT                             0x8865
#define GL_QUERY_RESULT_EXT                              0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT                    0x8867

#define GL_SAMPLES_PASSED_ARB                            0x8914

#define GL_COMMANDS_ISSUED_CHROMIUM                      0x6004

/* GL_CHROMIUM_get_error_query */
#define GL_GET_ERROR_QUERY_CHROMIUM                      0x6003

/* GL_CHROMIUM_command_buffer_latency_query */
#define GL_LATENCY_QUERY_CHROMIUM                        0x6007

/* GL_CHROMIUM_async_pixel_transfers */
#define GL_ASYNC_PIXEL_PACK_COMPLETED_CHROMIUM           0x6006

#define GL_COMMANDS_COMPLETED_CHROMIUM                   0x84F7

#define GL_RGB_YCRCB_420_CHROMIUM                        0x78FA

#define GL_RGB_YCBCR_422_CHROMIUM                        0x78FB

#define GL_RGB_YCBCR_420V_CHROMIUM 0x78FC

#define GL_OVERLAY_TRANSFORM_NONE_CHROMIUM               0x9245
#define GL_OVERLAY_TRANSFORM_FLIP_HORIZONTAL_CHROMIUM    0x9246
#define GL_OVERLAY_TRANSFORM_FLIP_VERTICAL_CHROMIUM      0x9247
#define GL_OVERLAY_TRANSFORM_ROTATE_90_CHROMIUM          0x9248
#define GL_OVERLAY_TRANSFORM_ROTATE_180_CHROMIUM         0x9249
#define GL_OVERLAY_TRANSFORM_ROTATE_270_CHROMIUM         0x924A

#define GL_SUBSCRIBED_VALUES_BUFFER_CHROMIUM             0x924B
#define GL_MOUSE_POSITION_CHROMIUM                       0x924C

#define GL_TEXTURE_FILTERING_HINT_CHROMIUM               0x8AF0

#define GL_COLOR_SPACE_UNSPECIFIED_CHROMIUM 0x8AF1
#define GL_COLOR_SPACE_SCRGB_LINEAR_CHROMIUM 0x8AF2
#define GL_COLOR_SPACE_SRGB_CHROMIUM 0x8AF3
#define GL_COLOR_SPACE_DISPLAY_P3_CHROMIUM 0x8AF4

#define GL_SCANOUT_CHROMIUM 0x6000

#define GL_SAMPLER_3D_OES                                0x8B5F

#define GL_DEPTH_COMPONENT24_OES                         0x81A6

#define GL_DEPTH_COMPONENT32_OES                         0x81A7

#ifndef GL_DEPTH24_STENCIL8_OES
#define GL_DEPTH24_STENCIL8_OES                          0x88F0
#endif

#ifndef GL_DEPTH24_STENCIL8
#define GL_DEPTH24_STENCIL8                              0x88F0
#endif

#define GL_ETC1_RGB8_OES                                 0x8D64

#define GL_ATC_RGB_AMD                                   0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD                   0x8C93
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD               0x87EE

#define GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG               0x8C00
#define GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG               0x8C01
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG              0x8C02
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG              0x8C03

#define GL_VERTEX_ARRAY_BINDING_OES                      0x85B5

#define GL_PIXEL_UNPACK_TRANSFER_BUFFER_CHROMIUM         0x78EC
#define GL_PIXEL_PACK_TRANSFER_BUFFER_CHROMIUM           0x78ED
#define GL_PIXEL_PACK_TRANSFER_BUFFER_BINDING_CHROMIUM   0x78EE
#define GL_PIXEL_UNPACK_TRANSFER_BUFFER_BINDING_CHROMIUM 0x78EF

/* GL_EXT_discard_framebuffer */
#ifndef GL_EXT_discard_framebuffer
#define GL_COLOR_EXT                                     0x1800
#define GL_DEPTH_EXT                                     0x1801
#define GL_STENCIL_EXT                                   0x1802
#endif

#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT     0x8210

#define PROGRAM_BINARY_RETRIEVABLE_HINT                  0x8257
#define GL_PROGRAM_BINARY_LENGTH_OES                     0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS_OES                0x87FE
#define GL_PROGRAM_BINARY_FORMATS_OES                    0x87FF

#ifndef GL_EXT_multisampled_render_to_texture
#define GL_RENDERBUFFER_SAMPLES_EXT                      0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT        0x8D56
#define GL_MAX_SAMPLES_EXT                               0x8D57
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT    0x8D6C
#endif

#ifndef GL_IMG_multisampled_render_to_texture
#define GL_RENDERBUFFER_SAMPLES_IMG                      0x9133
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG        0x9134
#define GL_MAX_SAMPLES_IMG                               0x9135
#define GL_TEXTURE_SAMPLES_IMG                           0x9136
#endif

#ifndef GL_CHROMIUM_path_rendering
#define GL_CHROMIUM_path_rendering 1
#define GL_PATH_MODELVIEW_MATRIX_CHROMIUM 0x0BA6
#define GL_PATH_PROJECTION_MATRIX_CHROMIUM 0x0BA7
#define GL_PATH_MODELVIEW_CHROMIUM 0x1700
#define GL_PATH_PROJECTION_CHROMIUM 0x1701
#define GL_FLAT_CHROMIUM 0x1D00
#define GL_CLOSE_PATH_CHROMIUM 0x00
#define GL_MOVE_TO_CHROMIUM 0x02
#define GL_LINE_TO_CHROMIUM 0x04
#define GL_QUADRATIC_CURVE_TO_CHROMIUM 0x0A
#define GL_CUBIC_CURVE_TO_CHROMIUM 0x0C
#define GL_CONIC_CURVE_TO_CHROMIUM 0x1A
#define GL_EYE_LINEAR_CHROMIUM 0x2400
#define GL_OBJECT_LINEAR_CHROMIUM 0x2401
#define GL_CONSTANT_CHROMIUM 0x8576
#define GL_PATH_STROKE_WIDTH_CHROMIUM 0x9075
#define GL_PATH_END_CAPS_CHROMIUM 0x9076
#define GL_PATH_JOIN_STYLE_CHROMIUM 0x9079
#define GL_PATH_MITER_LIMIT_CHROMIUM 0x907a
#define GL_PATH_STROKE_BOUND_CHROMIUM 0x9086
#define GL_COUNT_UP_CHROMIUM 0x9088
#define GL_COUNT_DOWN_CHROMIUM 0x9089
#define GL_CONVEX_HULL_CHROMIUM 0x908B
#define GL_BOUNDING_BOX_CHROMIUM 0x908D
#define GL_TRANSLATE_X_CHROMIUM 0x908E
#define GL_TRANSLATE_Y_CHROMIUM 0x908F
#define GL_TRANSLATE_2D_CHROMIUM 0x9090
#define GL_TRANSLATE_3D_CHROMIUM 0x9091
#define GL_AFFINE_2D_CHROMIUM 0x9092
#define GL_AFFINE_3D_CHROMIUM 0x9094
#define GL_TRANSPOSE_AFFINE_2D_CHROMIUM 0x9096
#define GL_TRANSPOSE_AFFINE_3D_CHROMIUM 0x9098
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_CHROMIUM 0x909C
#define GL_SQUARE_CHROMIUM 0x90a3
#define GL_ROUND_CHROMIUM 0x90a4
#define GL_BEVEL_CHROMIUM 0x90a6
#define GL_MITER_REVERT_CHROMIUM 0x90a7
#define GL_PATH_STENCIL_FUNC_CHROMIUM 0x90B7
#define GL_PATH_STENCIL_REF_CHROMIUM 0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_CHROMIUM 0x90B9
#endif

#ifndef GL_EXT_multisample_compatibility
#define GL_EXT_multisample_compatibility 1
#define GL_MULTISAMPLE_EXT 0x809D
#define GL_SAMPLE_ALPHA_TO_ONE_EXT 0x809F
#endif /* GL_EXT_multisample_compatibility */

#ifndef GL_CHROMIUM_framebuffer_mixed_samples
#define GL_CHROMIUM_framebuffer_mixed_samples 1
#define GL_COVERAGE_MODULATION_CHROMIUM 0x9332
#endif /* GL_CHROMIUM_framebuffer_mixed_samples */

#ifndef GL_KHR_blend_equation_advanced
#define GL_KHR_blend_equation_advanced 1
#define GL_COLORBURN_KHR                  0x929A
#define GL_COLORDODGE_KHR                 0x9299
#define GL_DARKEN_KHR                     0x9297
#define GL_DIFFERENCE_KHR                 0x929E
#define GL_EXCLUSION_KHR                  0x92A0
#define GL_HARDLIGHT_KHR                  0x929B
#define GL_HSL_COLOR_KHR                  0x92AF
#define GL_HSL_HUE_KHR                    0x92AD
#define GL_HSL_LUMINOSITY_KHR             0x92B0
#define GL_HSL_SATURATION_KHR             0x92AE
#define GL_LIGHTEN_KHR                    0x9298
#define GL_MULTIPLY_KHR                   0x9294
#define GL_OVERLAY_KHR                    0x9296
#define GL_SCREEN_KHR                     0x9295
#define GL_SOFTLIGHT_KHR                  0x929C
#endif /* GL_KHR_blend_equation_advanced */

#ifndef GL_KHR_blend_equation_advanced_coherent
#define GL_KHR_blend_equation_advanced_coherent 1
#define GL_BLEND_ADVANCED_COHERENT_KHR    0x9285
#endif /* GL_KHR_blend_equation_advanced_coherent */

#ifndef GL_EXT_disjoint_timer_query
#define GL_EXT_disjoint_timer_query 1
#define GL_QUERY_COUNTER_BITS_EXT         0x8864
#define GL_TIME_ELAPSED_EXT               0x88BF
#define GL_TIMESTAMP_EXT                  0x8E28
#define GL_GPU_DISJOINT_EXT               0x8FBB
#endif

#ifndef GL_KHR_robustness
#define GL_KHR_robustness 1
#define GL_CONTEXT_ROBUST_ACCESS_KHR      0x90F3
#define GL_LOSE_CONTEXT_ON_RESET_KHR      0x8252
#define GL_GUILTY_CONTEXT_RESET_KHR       0x8253
#define GL_INNOCENT_CONTEXT_RESET_KHR     0x8254
#define GL_UNKNOWN_CONTEXT_RESET_KHR      0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_KHR 0x8256
#define GL_NO_RESET_NOTIFICATION_KHR      0x8261
#define GL_CONTEXT_LOST_KHR               0x0507
#endif /* GL_KHR_robustness */

#ifndef GL_EXT_texture_norm16
#define GL_EXT_texture_norm16 1
#define GL_R16_EXT 0x822A
#define GL_RG16_EXT 0x822C
#define GL_RGBA16_EXT 0x805B
#define GL_RGB16_EXT 0x8054
#define GL_RGB16_SNORM_EXT 0x8F9A
#endif /* GL_EXT_texture_norm16 */

#ifndef GL_EXT_texture_rg
#define GL_EXT_texture_rg 1
#define GL_RED_EXT 0x1903
#define GL_RG_EXT 0x8227
#define GL_R8_EXT 0x8229
#define GL_RG8_EXT 0x822B
#endif /* GL_EXT_texture_rg */

#ifndef GL_FRAGMENT_INPUT_NV
#define GL_FRAGMENT_INPUT_NV 0x936D
#endif

#ifndef GL_EXT_blend_func_extended
#define GL_EXT_blend_func_extended 1
#define GL_SRC_ALPHA_SATURATE_EXT 0x0308
#define GL_SRC1_ALPHA_EXT 0x8589  
#define GL_SRC1_COLOR_EXT 0x88F9
#define GL_ONE_MINUS_SRC1_COLOR_EXT 0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA_EXT 0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS_EXT 0x88FC
#endif /* GL_EXT_blend_func_extended */

#ifndef GL_EXT_window_rectangles
#define GL_EXT_window_rectangles 1
#define GL_INCLUSIVE_EXT 0x8F10
#define GL_EXCLUSIVE_EXT 0x8F11
#define GL_WINDOW_RECTANGLE_EXT 0x8F12
#define GL_WINDOW_RECTANGLE_MODE_EXT 0x8F13
#define GL_MAX_WINDOW_RECTANGLES_EXT 0x8F14
#define GL_NUM_WINDOW_RECTANGLES_EXT 0x8F15
#endif /* GL_EXT_window_rectangles */

#define GL_GLEXT_PROTOTYPES 1

#if defined(OS_WIN)
#define GL_BINDING_CALL WINAPI
#else
#define GL_BINDING_CALL
#endif

#define GL_SERVICE_LOG(args) DLOG(INFO) << args;
#if defined(NDEBUG)
  #define GL_SERVICE_LOG_CODE_BLOCK(code)
#else
  #define GL_SERVICE_LOG_CODE_BLOCK(code) code
#endif

#include "ui/gl/gl_bindings_autogen_gl.h"

#include "ui/gl/gl_bindings.h"

namespace gl {

class GL_EXPORT VendorGL {
public:
  void InitializeStaticBindings();
  void InitializeDynamicBindings(const GLVersionInfo* ver,
                                 const ExtensionSet& extensions);
  static GLFunctionPointerType GetVendorGLProcAddress(const char* name);

  void ClearBindings();

  ProcsGL fn;
  ExtensionsGL ext;

  VendorGL() {
    ClearBindings();
  }
};

class GL_EXPORT VendorGLAPI {
 public:

  VendorGLAPI();
  ~VendorGLAPI();
  void Initialize(VendorGL* driver);

#include "gpu/command_buffer/service/vendor_gl_autogen_api.h"

 private:
  VendorGL* driver_;
};

}  

#ifdef MILKO_GL_GLOBAL_FLAG_
  #define MILKO_GL_EXTERN
#else
  #define MILKO_GL_EXTERN extern
#endif

MILKO_GL_EXTERN std::shared_ptr<gl::VendorGL> driver_;
MILKO_GL_EXTERN std::shared_ptr<gl::VendorGLAPI> real_api_;
MILKO_GL_EXTERN std::shared_ptr<gl::GLVersionInfo> version_;

#define vendorActiveTexture real_api_->glActiveTextureFn
#define vendorApplyFramebufferAttachmentCMAAINTEL \
  real_api_->glApplyFramebufferAttachmentCMAAINTELFn
#define vendorAttachShader real_api_->glAttachShaderFn
#define vendorBeginQuery real_api_->glBeginQueryFn
#define vendorBeginTransformFeedback \
  real_api_->glBeginTransformFeedbackFn
#define vendorBindAttribLocation real_api_->glBindAttribLocationFn
#define vendorBindBuffer real_api_->glBindBufferFn
#define vendorBindBufferBase real_api_->glBindBufferBaseFn
#define vendorBindBufferRange real_api_->glBindBufferRangeFn
#define vendorBindFragDataLocation \
  real_api_->glBindFragDataLocationFn
#define vendorBindFragDataLocationIndexed \
  real_api_->glBindFragDataLocationIndexedFn
#define vendorBindFramebufferEXT real_api_->glBindFramebufferEXTFn
#define vendorBindImageTextureEXT \
  real_api_->glBindImageTextureEXTFn
#define vendorBindRenderbufferEXT \
  real_api_->glBindRenderbufferEXTFn
#define vendorBindSampler real_api_->glBindSamplerFn
#define vendorBindTexture real_api_->glBindTextureFn
#define vendorBindTransformFeedback \
  real_api_->glBindTransformFeedbackFn
#define vendorBindUniformLocationCHROMIUM \
  real_api_->glBindUniformLocationCHROMIUMFn
#define vendorBindVertexArrayOES real_api_->glBindVertexArrayOESFn
#define vendorBlendBarrierKHR real_api_->glBlendBarrierKHRFn
#define vendorBlendColor real_api_->glBlendColorFn
#define vendorBlendEquation real_api_->glBlendEquationFn
#define vendorBlendEquationSeparate \
  real_api_->glBlendEquationSeparateFn
#define vendorBlendFunc real_api_->glBlendFuncFn
#define vendorBlendFuncSeparate real_api_->glBlendFuncSeparateFn
#define vendorBlitFramebuffer real_api_->glBlitFramebufferFn
#define vendorBufferData real_api_->glBufferDataFn
#define vendorBufferSubData real_api_->glBufferSubDataFn
#define vendorCheckFramebufferStatusEXT \
  real_api_->glCheckFramebufferStatusEXTFn
#define vendorClear real_api_->glClearFn
#define vendorClearBufferfi real_api_->glClearBufferfiFn
#define vendorClearBufferfv real_api_->glClearBufferfvFn
#define vendorClearBufferiv real_api_->glClearBufferivFn
#define vendorClearBufferuiv real_api_->glClearBufferuivFn
#define vendorClearColor real_api_->glClearColorFn
#define vendorClearDepth real_api_->glClearDepthFn
#define vendorClearDepthf real_api_->glClearDepthfFn
#define vendorClearStencil real_api_->glClearStencilFn
#define vendorClientWaitSync real_api_->glClientWaitSyncFn
#define vendorColorMask real_api_->glColorMaskFn
#define vendorCompileShader real_api_->glCompileShaderFn
#define vendorCompressedCopyTextureCHROMIUM \
  real_api_->glCompressedCopyTextureCHROMIUMFn
#define vendorCompressedTexImage2D \
  real_api_->glCompressedTexImage2DFn
#define vendorCompressedTexImage2DRobustANGLE \
  real_api_->glCompressedTexImage2DRobustANGLEFn
#define vendorCompressedTexImage3D \
  real_api_->glCompressedTexImage3DFn
#define vendorCompressedTexImage3DRobustANGLE \
  real_api_->glCompressedTexImage3DRobustANGLEFn
#define vendorCompressedTexSubImage2D \
  real_api_->glCompressedTexSubImage2DFn
#define vendorCompressedTexSubImage2DRobustANGLE \
  real_api_->glCompressedTexSubImage2DRobustANGLEFn
#define vendorCompressedTexSubImage3D \
  real_api_->glCompressedTexSubImage3DFn
#define vendorCompressedTexSubImage3DRobustANGLE \
  real_api_->glCompressedTexSubImage3DRobustANGLEFn
#define vendorCopyBufferSubData real_api_->glCopyBufferSubDataFn
#define vendorCopySubTextureCHROMIUM \
  real_api_->glCopySubTextureCHROMIUMFn
#define vendorCopyTexImage2D real_api_->glCopyTexImage2DFn
#define vendorCopyTexSubImage2D real_api_->glCopyTexSubImage2DFn
#define vendorCopyTexSubImage3D real_api_->glCopyTexSubImage3DFn
#define vendorCopyTextureCHROMIUM \
  real_api_->glCopyTextureCHROMIUMFn
#define vendorCoverageModulationNV \
  real_api_->glCoverageModulationNVFn
#define vendorCoverFillPathInstancedNV \
  real_api_->glCoverFillPathInstancedNVFn
#define vendorCoverFillPathNV real_api_->glCoverFillPathNVFn
#define vendorCoverStrokePathInstancedNV \
  real_api_->glCoverStrokePathInstancedNVFn
#define vendorCoverStrokePathNV real_api_->glCoverStrokePathNVFn
#define vendorCreateProgram real_api_->glCreateProgramFn
#define vendorCreateShader real_api_->glCreateShaderFn
#define vendorCullFace real_api_->glCullFaceFn
#define vendorDebugMessageCallback \
  real_api_->glDebugMessageCallbackFn
#define vendorDebugMessageControl \
  real_api_->glDebugMessageControlFn
#define vendorDebugMessageInsert real_api_->glDebugMessageInsertFn
#define vendorDeleteBuffersARB real_api_->glDeleteBuffersARBFn
#define vendorDeleteFencesAPPLE real_api_->glDeleteFencesAPPLEFn
#define vendorDeleteFencesNV real_api_->glDeleteFencesNVFn
#define vendorDeleteFramebuffersEXT \
  real_api_->glDeleteFramebuffersEXTFn
#define vendorDeletePathsNV real_api_->glDeletePathsNVFn
#define vendorDeleteProgram real_api_->glDeleteProgramFn
#define vendorDeleteQueries real_api_->glDeleteQueriesFn
#define vendorDeleteRenderbuffersEXT \
  real_api_->glDeleteRenderbuffersEXTFn
#define vendorDeleteSamplers real_api_->glDeleteSamplersFn
#define vendorDeleteShader real_api_->glDeleteShaderFn
#define vendorDeleteSync real_api_->glDeleteSyncFn
#define vendorDeleteTextures real_api_->glDeleteTexturesFn
#define vendorDeleteTransformFeedbacks \
  real_api_->glDeleteTransformFeedbacksFn
#define vendorDeleteVertexArraysOES \
  real_api_->glDeleteVertexArraysOESFn
#define vendorDepthFunc real_api_->glDepthFuncFn
#define vendorDepthMask real_api_->glDepthMaskFn
#define vendorDepthRange real_api_->glDepthRangeFn
#define vendorDepthRangef real_api_->glDepthRangefFn
#define vendorDetachShader real_api_->glDetachShaderFn
#define vendorDisable real_api_->glDisableFn
#define vendorDisableVertexAttribArray \
  real_api_->glDisableVertexAttribArrayFn
#define vendorDiscardFramebufferEXT \
  real_api_->glDiscardFramebufferEXTFn
#define vendorDrawArrays real_api_->glDrawArraysFn
#define vendorDrawArraysInstancedANGLE \
  real_api_->glDrawArraysInstancedANGLEFn
#define vendorDrawBuffer real_api_->glDrawBufferFn
#define vendorDrawBuffersARB real_api_->glDrawBuffersARBFn
#define vendorDrawElements real_api_->glDrawElementsFn
#define vendorDrawElementsInstancedANGLE \
  real_api_->glDrawElementsInstancedANGLEFn
#define vendorDrawRangeElements real_api_->glDrawRangeElementsFn
#define vendorEGLImageTargetRenderbufferStorageOES \
  real_api_->glEGLImageTargetRenderbufferStorageOESFn
#define vendorEGLImageTargetTexture2DOES \
  real_api_->glEGLImageTargetTexture2DOESFn
#define vendorEnable real_api_->glEnableFn
#define vendorEnableVertexAttribArray \
  real_api_->glEnableVertexAttribArrayFn
#define vendorEndQuery real_api_->glEndQueryFn
#define vendorEndTransformFeedback \
  real_api_->glEndTransformFeedbackFn
#define vendorFenceSync real_api_->glFenceSyncFn
#define vendorFinish real_api_->glFinishFn
#define vendorFinishFenceAPPLE real_api_->glFinishFenceAPPLEFn
#define vendorFinishFenceNV real_api_->glFinishFenceNVFn
#define vendorFlush real_api_->glFlushFn
#define vendorFlushMappedBufferRange \
  real_api_->glFlushMappedBufferRangeFn
#define vendorFramebufferRenderbufferEXT \
  real_api_->glFramebufferRenderbufferEXTFn
#define vendorFramebufferTexture2DEXT \
  real_api_->glFramebufferTexture2DEXTFn
#define vendorFramebufferTexture2DMultisampleEXT \
  real_api_->glFramebufferTexture2DMultisampleEXTFn
#define vendorFramebufferTextureLayer \
  real_api_->glFramebufferTextureLayerFn
#define vendorFrontFace real_api_->glFrontFaceFn
#define vendorGenBuffersARB real_api_->glGenBuffersARBFn
#define vendorGenerateMipmapEXT real_api_->glGenerateMipmapEXTFn
#define vendorGenFencesAPPLE real_api_->glGenFencesAPPLEFn
#define vendorGenFencesNV real_api_->glGenFencesNVFn
#define vendorGenFramebuffersEXT real_api_->glGenFramebuffersEXTFn
#define vendorGenPathsNV real_api_->glGenPathsNVFn
#define vendorGenQueries real_api_->glGenQueriesFn
#define vendorGenRenderbuffersEXT \
  real_api_->glGenRenderbuffersEXTFn
#define vendorGenSamplers real_api_->glGenSamplersFn
#define vendorGenTextures real_api_->glGenTexturesFn
#define vendorGenTransformFeedbacks \
  real_api_->glGenTransformFeedbacksFn
#define vendorGenVertexArraysOES real_api_->glGenVertexArraysOESFn
#define vendorGetActiveAttrib real_api_->glGetActiveAttribFn
#define vendorGetActiveUniform real_api_->glGetActiveUniformFn
#define vendorGetActiveUniformBlockiv \
  real_api_->glGetActiveUniformBlockivFn
#define vendorGetActiveUniformBlockivRobustANGLE \
  real_api_->glGetActiveUniformBlockivRobustANGLEFn
#define vendorGetActiveUniformBlockName \
  real_api_->glGetActiveUniformBlockNameFn
#define vendorGetActiveUniformsiv \
  real_api_->glGetActiveUniformsivFn
#define vendorGetAttachedShaders real_api_->glGetAttachedShadersFn
#define vendorGetAttribLocation real_api_->glGetAttribLocationFn
#define vendorGetBooleani_vRobustANGLE \
  real_api_->glGetBooleani_vRobustANGLEFn
#define vendorGetBooleanv real_api_->glGetBooleanvFn
#define vendorGetBooleanvRobustANGLE \
  real_api_->glGetBooleanvRobustANGLEFn
#define vendorGetBufferParameteri64vRobustANGLE \
  real_api_->glGetBufferParameteri64vRobustANGLEFn
#define vendorGetBufferParameteriv \
  real_api_->glGetBufferParameterivFn
#define vendorGetBufferParameterivRobustANGLE \
  real_api_->glGetBufferParameterivRobustANGLEFn
#define vendorGetBufferPointervRobustANGLE \
  real_api_->glGetBufferPointervRobustANGLEFn
#define vendorGetDebugMessageLog real_api_->glGetDebugMessageLogFn
#define vendorGetError real_api_->glGetErrorFn
#define vendorGetFenceivNV real_api_->glGetFenceivNVFn
#define vendorGetFloatv real_api_->glGetFloatvFn
#define vendorGetFloatvRobustANGLE \
  real_api_->glGetFloatvRobustANGLEFn
#define vendorGetFragDataIndex real_api_->glGetFragDataIndexFn
#define vendorGetFragDataLocation \
  real_api_->glGetFragDataLocationFn
#define vendorGetFramebufferAttachmentParameterivEXT \
  real_api_->glGetFramebufferAttachmentParameterivEXTFn
#define vendorGetFramebufferAttachmentParameterivRobustANGLE \
  real_api_->glGetFramebufferAttachmentParameterivRobustANGLEFn
#define vendorGetFramebufferParameterivRobustANGLE \
  real_api_->glGetFramebufferParameterivRobustANGLEFn
#define vendorGetGraphicsResetStatusARB \
  real_api_->glGetGraphicsResetStatusARBFn
#define vendorGetInteger64i_v real_api_->glGetInteger64i_vFn
#define vendorGetInteger64i_vRobustANGLE \
  real_api_->glGetInteger64i_vRobustANGLEFn
#define vendorGetInteger64v real_api_->glGetInteger64vFn
#define vendorGetInteger64vRobustANGLE \
  real_api_->glGetInteger64vRobustANGLEFn
#define vendorGetIntegeri_v real_api_->glGetIntegeri_vFn
#define vendorGetIntegeri_vRobustANGLE \
  real_api_->glGetIntegeri_vRobustANGLEFn
#define vendorGetIntegerv real_api_->glGetIntegervFn
#define vendorGetIntegervRobustANGLE \
  real_api_->glGetIntegervRobustANGLEFn
#define vendorGetInternalformativ \
  real_api_->glGetInternalformativFn
#define vendorGetInternalformativRobustANGLE \
  real_api_->glGetInternalformativRobustANGLEFn
#define vendorGetMultisamplefv real_api_->glGetMultisamplefvFn
#define vendorGetMultisamplefvRobustANGLE \
  real_api_->glGetMultisamplefvRobustANGLEFn
#define vendorGetnUniformfvRobustANGLE \
  real_api_->glGetnUniformfvRobustANGLEFn
#define vendorGetnUniformivRobustANGLE \
  real_api_->glGetnUniformivRobustANGLEFn
#define vendorGetnUniformuivRobustANGLE \
  real_api_->glGetnUniformuivRobustANGLEFn
#define vendorGetObjectLabel real_api_->glGetObjectLabelFn
#define vendorGetObjectPtrLabel real_api_->glGetObjectPtrLabelFn
#define vendorGetPointerv real_api_->glGetPointervFn
#define vendorGetPointervRobustANGLERobustANGLE \
  real_api_->glGetPointervRobustANGLERobustANGLEFn
#define vendorGetProgramBinary real_api_->glGetProgramBinaryFn
#define vendorGetProgramInfoLog real_api_->glGetProgramInfoLogFn
#define vendorGetProgramInterfaceiv \
  real_api_->glGetProgramInterfaceivFn
#define vendorGetProgramInterfaceivRobustANGLE \
  real_api_->glGetProgramInterfaceivRobustANGLEFn
#define vendorGetProgramiv real_api_->glGetProgramivFn
#define vendorGetProgramivRobustANGLE \
  real_api_->glGetProgramivRobustANGLEFn
#define vendorGetProgramResourceiv \
  real_api_->glGetProgramResourceivFn
#define vendorGetProgramResourceLocation \
  real_api_->glGetProgramResourceLocationFn
#define vendorGetProgramResourceName \
  real_api_->glGetProgramResourceNameFn
#define vendorGetQueryiv real_api_->glGetQueryivFn
#define vendorGetQueryivRobustANGLE \
  real_api_->glGetQueryivRobustANGLEFn
#define vendorGetQueryObjecti64v real_api_->glGetQueryObjecti64vFn
#define vendorGetQueryObjecti64vRobustANGLE \
  real_api_->glGetQueryObjecti64vRobustANGLEFn
#define vendorGetQueryObjectiv real_api_->glGetQueryObjectivFn
#define vendorGetQueryObjectivRobustANGLE \
  real_api_->glGetQueryObjectivRobustANGLEFn
#define vendorGetQueryObjectui64v \
  real_api_->glGetQueryObjectui64vFn
#define vendorGetQueryObjectui64vRobustANGLE \
  real_api_->glGetQueryObjectui64vRobustANGLEFn
#define vendorGetQueryObjectuiv real_api_->glGetQueryObjectuivFn
#define vendorGetQueryObjectuivRobustANGLE \
  real_api_->glGetQueryObjectuivRobustANGLEFn
#define vendorGetRenderbufferParameterivEXT \
  real_api_->glGetRenderbufferParameterivEXTFn
#define vendorGetRenderbufferParameterivRobustANGLE \
  real_api_->glGetRenderbufferParameterivRobustANGLEFn
#define vendorGetSamplerParameterfv \
  real_api_->glGetSamplerParameterfvFn
#define vendorGetSamplerParameterfvRobustANGLE \
  real_api_->glGetSamplerParameterfvRobustANGLEFn
#define vendorGetSamplerParameterIivRobustANGLE \
  real_api_->glGetSamplerParameterIivRobustANGLEFn
#define vendorGetSamplerParameterIuivRobustANGLE \
  real_api_->glGetSamplerParameterIuivRobustANGLEFn
#define vendorGetSamplerParameteriv \
  real_api_->glGetSamplerParameterivFn
#define vendorGetSamplerParameterivRobustANGLE \
  real_api_->glGetSamplerParameterivRobustANGLEFn
#define vendorGetShaderInfoLog real_api_->glGetShaderInfoLogFn
#define vendorGetShaderiv real_api_->glGetShaderivFn
#define vendorGetShaderivRobustANGLE \
  real_api_->glGetShaderivRobustANGLEFn
#define vendorGetShaderPrecisionFormat \
  real_api_->glGetShaderPrecisionFormatFn
#define vendorGetShaderSource real_api_->glGetShaderSourceFn
#define vendorGetString real_api_->glGetStringFn
#define vendorGetStringi real_api_->glGetStringiFn
#define vendorGetSynciv real_api_->glGetSyncivFn
#define vendorGetTexLevelParameterfv \
  real_api_->glGetTexLevelParameterfvFn
#define vendorGetTexLevelParameterfvRobustANGLE \
  real_api_->glGetTexLevelParameterfvRobustANGLEFn
#define vendorGetTexLevelParameteriv \
  real_api_->glGetTexLevelParameterivFn
#define vendorGetTexLevelParameterivRobustANGLE \
  real_api_->glGetTexLevelParameterivRobustANGLEFn
#define vendorGetTexParameterfv real_api_->glGetTexParameterfvFn
#define vendorGetTexParameterfvRobustANGLE \
  real_api_->glGetTexParameterfvRobustANGLEFn
#define vendorGetTexParameterIivRobustANGLE \
  real_api_->glGetTexParameterIivRobustANGLEFn
#define vendorGetTexParameterIuivRobustANGLE \
  real_api_->glGetTexParameterIuivRobustANGLEFn
#define vendorGetTexParameteriv real_api_->glGetTexParameterivFn
#define vendorGetTexParameterivRobustANGLE \
  real_api_->glGetTexParameterivRobustANGLEFn
#define vendorGetTransformFeedbackVarying \
  real_api_->glGetTransformFeedbackVaryingFn
#define vendorGetTranslatedShaderSourceANGLE \
  real_api_->glGetTranslatedShaderSourceANGLEFn
#define vendorGetUniformBlockIndex \
  real_api_->glGetUniformBlockIndexFn
#define vendorGetUniformfv real_api_->glGetUniformfvFn
#define vendorGetUniformfvRobustANGLE \
  real_api_->glGetUniformfvRobustANGLEFn
#define vendorGetUniformIndices real_api_->glGetUniformIndicesFn
#define vendorGetUniformiv real_api_->glGetUniformivFn
#define vendorGetUniformivRobustANGLE \
  real_api_->glGetUniformivRobustANGLEFn
#define vendorGetUniformLocation real_api_->glGetUniformLocationFn
#define vendorGetUniformuiv real_api_->glGetUniformuivFn
#define vendorGetUniformuivRobustANGLE \
  real_api_->glGetUniformuivRobustANGLEFn
#define vendorGetVertexAttribfv real_api_->glGetVertexAttribfvFn
#define vendorGetVertexAttribfvRobustANGLE \
  real_api_->glGetVertexAttribfvRobustANGLEFn
#define vendorGetVertexAttribIivRobustANGLE \
  real_api_->glGetVertexAttribIivRobustANGLEFn
#define vendorGetVertexAttribIuivRobustANGLE \
  real_api_->glGetVertexAttribIuivRobustANGLEFn
#define vendorGetVertexAttribiv real_api_->glGetVertexAttribivFn
#define vendorGetVertexAttribivRobustANGLE \
  real_api_->glGetVertexAttribivRobustANGLEFn
#define vendorGetVertexAttribPointerv \
  real_api_->glGetVertexAttribPointervFn
#define vendorGetVertexAttribPointervRobustANGLE \
  real_api_->glGetVertexAttribPointervRobustANGLEFn
#define vendorHint real_api_->glHintFn
#define vendorInsertEventMarkerEXT \
  real_api_->glInsertEventMarkerEXTFn
#define vendorInvalidateFramebuffer \
  real_api_->glInvalidateFramebufferFn
#define vendorInvalidateSubFramebuffer \
  real_api_->glInvalidateSubFramebufferFn
#define vendorIsBuffer real_api_->glIsBufferFn
#define vendorIsEnabled real_api_->glIsEnabledFn
#define vendorIsFenceAPPLE real_api_->glIsFenceAPPLEFn
#define vendorIsFenceNV real_api_->glIsFenceNVFn
#define vendorIsFramebufferEXT real_api_->glIsFramebufferEXTFn
#define vendorIsPathNV real_api_->glIsPathNVFn
#define vendorIsProgram real_api_->glIsProgramFn
#define vendorIsQuery real_api_->glIsQueryFn
#define vendorIsRenderbufferEXT real_api_->glIsRenderbufferEXTFn
#define vendorIsSampler real_api_->glIsSamplerFn
#define vendorIsShader real_api_->glIsShaderFn
#define vendorIsSync real_api_->glIsSyncFn
#define vendorIsTexture real_api_->glIsTextureFn
#define vendorIsTransformFeedback \
  real_api_->glIsTransformFeedbackFn
#define vendorIsVertexArrayOES real_api_->glIsVertexArrayOESFn
#define vendorLineWidth real_api_->glLineWidthFn
#define vendorLinkProgram real_api_->glLinkProgramFn
#define vendorMapBuffer real_api_->glMapBufferFn
#define vendorMapBufferRange real_api_->glMapBufferRangeFn
#define vendorMatrixLoadfEXT real_api_->glMatrixLoadfEXTFn
#define vendorMatrixLoadIdentityEXT \
  real_api_->glMatrixLoadIdentityEXTFn
#define vendorMemoryBarrierEXT real_api_->glMemoryBarrierEXTFn
#define vendorObjectLabel real_api_->glObjectLabelFn
#define vendorObjectPtrLabel real_api_->glObjectPtrLabelFn
#define vendorPathCommandsNV real_api_->glPathCommandsNVFn
#define vendorPathParameterfNV real_api_->glPathParameterfNVFn
#define vendorPathParameteriNV real_api_->glPathParameteriNVFn
#define vendorPathStencilFuncNV real_api_->glPathStencilFuncNVFn
#define vendorPauseTransformFeedback \
  real_api_->glPauseTransformFeedbackFn
#define vendorPixelStorei real_api_->glPixelStoreiFn
#define vendorPointParameteri real_api_->glPointParameteriFn
#define vendorPolygonMode real_api_->glPolygonModeFn
#define vendorPolygonOffset real_api_->glPolygonOffsetFn
#define vendorPopDebugGroup real_api_->glPopDebugGroupFn
#define vendorPopGroupMarkerEXT real_api_->glPopGroupMarkerEXTFn
#define vendorPrimitiveRestartIndex \
  real_api_->glPrimitiveRestartIndexFn
#define vendorProgramBinary real_api_->glProgramBinaryFn
#define vendorProgramParameteri real_api_->glProgramParameteriFn
#define vendorProgramPathFragmentInputGenNV \
  real_api_->glProgramPathFragmentInputGenNVFn
#define vendorPushDebugGroup real_api_->glPushDebugGroupFn
#define vendorPushGroupMarkerEXT real_api_->glPushGroupMarkerEXTFn
#define vendorQueryCounter real_api_->glQueryCounterFn
#define vendorReadBuffer real_api_->glReadBufferFn
#define vendorReadnPixelsRobustANGLE \
  real_api_->glReadnPixelsRobustANGLEFn
#define vendorReadPixels real_api_->glReadPixelsFn
#define vendorReadPixelsRobustANGLE \
  real_api_->glReadPixelsRobustANGLEFn
#define vendorReleaseShaderCompiler \
  real_api_->glReleaseShaderCompilerFn
#define vendorRenderbufferStorageEXT \
  real_api_->glRenderbufferStorageEXTFn
#define vendorRenderbufferStorageMultisample \
  real_api_->glRenderbufferStorageMultisampleFn
#define vendorRenderbufferStorageMultisampleEXT \
  real_api_->glRenderbufferStorageMultisampleEXTFn
#define vendorRequestExtensionANGLE \
  real_api_->glRequestExtensionANGLEFn
#define vendorResumeTransformFeedback \
  real_api_->glResumeTransformFeedbackFn
#define vendorSampleCoverage real_api_->glSampleCoverageFn
#define vendorSamplerParameterf real_api_->glSamplerParameterfFn
#define vendorSamplerParameterfv real_api_->glSamplerParameterfvFn
#define vendorSamplerParameterfvRobustANGLE \
  real_api_->glSamplerParameterfvRobustANGLEFn
#define vendorSamplerParameteri real_api_->glSamplerParameteriFn
#define vendorSamplerParameterIivRobustANGLE \
  real_api_->glSamplerParameterIivRobustANGLEFn
#define vendorSamplerParameterIuivRobustANGLE \
  real_api_->glSamplerParameterIuivRobustANGLEFn
#define vendorSamplerParameteriv real_api_->glSamplerParameterivFn
#define vendorSamplerParameterivRobustANGLE \
  real_api_->glSamplerParameterivRobustANGLEFn
#define vendorScissor real_api_->glScissorFn
#define vendorSetFenceAPPLE real_api_->glSetFenceAPPLEFn
#define vendorSetFenceNV real_api_->glSetFenceNVFn
#define vendorShaderBinary real_api_->glShaderBinaryFn
#define vendorShaderSource real_api_->glShaderSourceFn
#define vendorStencilFillPathInstancedNV \
  real_api_->glStencilFillPathInstancedNVFn
#define vendorStencilFillPathNV real_api_->glStencilFillPathNVFn
#define vendorStencilFunc real_api_->glStencilFuncFn
#define vendorStencilFuncSeparate \
  real_api_->glStencilFuncSeparateFn
#define vendorStencilMask real_api_->glStencilMaskFn
#define vendorStencilMaskSeparate \
  real_api_->glStencilMaskSeparateFn
#define vendorStencilOp real_api_->glStencilOpFn
#define vendorStencilOpSeparate real_api_->glStencilOpSeparateFn
#define vendorStencilStrokePathInstancedNV \
  real_api_->glStencilStrokePathInstancedNVFn
#define vendorStencilStrokePathNV \
  real_api_->glStencilStrokePathNVFn
#define vendorStencilThenCoverFillPathInstancedNV \
  real_api_->glStencilThenCoverFillPathInstancedNVFn
#define vendorStencilThenCoverFillPathNV \
  real_api_->glStencilThenCoverFillPathNVFn
#define vendorStencilThenCoverStrokePathInstancedNV \
  real_api_->glStencilThenCoverStrokePathInstancedNVFn
#define vendorStencilThenCoverStrokePathNV \
  real_api_->glStencilThenCoverStrokePathNVFn
#define vendorTestFenceAPPLE real_api_->glTestFenceAPPLEFn
#define vendorTestFenceNV real_api_->glTestFenceNVFn
#define vendorTexBuffer real_api_->glTexBufferFn
#define vendorTexBufferRange real_api_->glTexBufferRangeFn
#define vendorTexImage2D real_api_->glTexImage2DFn
#define vendorTexImage2DRobustANGLE \
  real_api_->glTexImage2DRobustANGLEFn
#define vendorTexImage3D real_api_->glTexImage3DFn
#define vendorTexImage3DRobustANGLE \
  real_api_->glTexImage3DRobustANGLEFn
#define vendorTexParameterf real_api_->glTexParameterfFn
#define vendorTexParameterfv real_api_->glTexParameterfvFn
#define vendorTexParameterfvRobustANGLE \
  real_api_->glTexParameterfvRobustANGLEFn
#define vendorTexParameteri real_api_->glTexParameteriFn
#define vendorTexParameterIivRobustANGLE \
  real_api_->glTexParameterIivRobustANGLEFn
#define vendorTexParameterIuivRobustANGLE \
  real_api_->glTexParameterIuivRobustANGLEFn
#define vendorTexParameteriv real_api_->glTexParameterivFn
#define vendorTexParameterivRobustANGLE \
  real_api_->glTexParameterivRobustANGLEFn
#define vendorTexStorage2DEXT real_api_->glTexStorage2DEXTFn
#define vendorTexStorage3D real_api_->glTexStorage3DFn
#define vendorTexSubImage2D real_api_->glTexSubImage2DFn
#define vendorTexSubImage2DRobustANGLE \
  real_api_->glTexSubImage2DRobustANGLEFn
#define vendorTexSubImage3D real_api_->glTexSubImage3DFn
#define vendorTexSubImage3DRobustANGLE \
  real_api_->glTexSubImage3DRobustANGLEFn
#define vendorTransformFeedbackVaryings \
  real_api_->glTransformFeedbackVaryingsFn
#define vendorUniform1f real_api_->glUniform1fFn
#define vendorUniform1fv real_api_->glUniform1fvFn
#define vendorUniform1i real_api_->glUniform1iFn
#define vendorUniform1iv real_api_->glUniform1ivFn
#define vendorUniform1ui real_api_->glUniform1uiFn
#define vendorUniform1uiv real_api_->glUniform1uivFn
#define vendorUniform2f real_api_->glUniform2fFn
#define vendorUniform2fv real_api_->glUniform2fvFn
#define vendorUniform2i real_api_->glUniform2iFn
#define vendorUniform2iv real_api_->glUniform2ivFn
#define vendorUniform2ui real_api_->glUniform2uiFn
#define vendorUniform2uiv real_api_->glUniform2uivFn
#define vendorUniform3f real_api_->glUniform3fFn
#define vendorUniform3fv real_api_->glUniform3fvFn
#define vendorUniform3i real_api_->glUniform3iFn
#define vendorUniform3iv real_api_->glUniform3ivFn
#define vendorUniform3ui real_api_->glUniform3uiFn
#define vendorUniform3uiv real_api_->glUniform3uivFn
#define vendorUniform4f real_api_->glUniform4fFn
#define vendorUniform4fv real_api_->glUniform4fvFn
#define vendorUniform4i real_api_->glUniform4iFn
#define vendorUniform4iv real_api_->glUniform4ivFn
#define vendorUniform4ui real_api_->glUniform4uiFn
#define vendorUniform4uiv real_api_->glUniform4uivFn
#define vendorUniformBlockBinding \
  real_api_->glUniformBlockBindingFn
#define vendorUniformMatrix2fv real_api_->glUniformMatrix2fvFn
#define vendorUniformMatrix2x3fv real_api_->glUniformMatrix2x3fvFn
#define vendorUniformMatrix2x4fv real_api_->glUniformMatrix2x4fvFn
#define vendorUniformMatrix3fv real_api_->glUniformMatrix3fvFn
#define vendorUniformMatrix3x2fv real_api_->glUniformMatrix3x2fvFn
#define vendorUniformMatrix3x4fv real_api_->glUniformMatrix3x4fvFn
#define vendorUniformMatrix4fv real_api_->glUniformMatrix4fvFn
#define vendorUniformMatrix4x2fv real_api_->glUniformMatrix4x2fvFn
#define vendorUniformMatrix4x3fv real_api_->glUniformMatrix4x3fvFn
#define vendorUnmapBuffer real_api_->glUnmapBufferFn
#define vendorUseProgram real_api_->glUseProgramFn
#define vendorValidateProgram real_api_->glValidateProgramFn
#define vendorVertexAttrib1f real_api_->glVertexAttrib1fFn
#define vendorVertexAttrib1fv real_api_->glVertexAttrib1fvFn
#define vendorVertexAttrib2f real_api_->glVertexAttrib2fFn
#define vendorVertexAttrib2fv real_api_->glVertexAttrib2fvFn
#define vendorVertexAttrib3f real_api_->glVertexAttrib3fFn
#define vendorVertexAttrib3fv real_api_->glVertexAttrib3fvFn
#define vendorVertexAttrib4f real_api_->glVertexAttrib4fFn
#define vendorVertexAttrib4fv real_api_->glVertexAttrib4fvFn
#define vendorVertexAttribDivisorANGLE \
  real_api_->glVertexAttribDivisorANGLEFn
#define vendorVertexAttribI4i real_api_->glVertexAttribI4iFn
#define vendorVertexAttribI4iv real_api_->glVertexAttribI4ivFn
#define vendorVertexAttribI4ui real_api_->glVertexAttribI4uiFn
#define vendorVertexAttribI4uiv real_api_->glVertexAttribI4uivFn
#define vendorVertexAttribIPointer \
  real_api_->glVertexAttribIPointerFn
#define vendorVertexAttribPointer \
  real_api_->glVertexAttribPointerFn
#define vendorViewport real_api_->glViewportFn
#define vendorWaitSync real_api_->glWaitSyncFn
#define vendorWindowRectanglesEXT \
  real_api_->glWindowRectanglesEXTFn
  
#endif /* GPU_GLES_VENDOR_BINDINGS_H_ */