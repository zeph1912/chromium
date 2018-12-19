// Copyright (c) 2018 University of California, Irvine. All rights reserved.
// Authors: Zhihao Yao, Ardalan Amiri Sani
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


#ifndef __milkomeda_chromium_gl_h_
#define __milkomeda_chromium_gl_h_

#include <stdlib.h>
#include <third_party/android_tools/ndk/platforms/android-21/arch-arm64/usr/include/android/log.h>

#define LIBNAME "milko_chromium_lib"
#define LOGINFO(...) ((void)__android_log_print(ANDROID_LOG_INFO, LIBNAME, __VA_ARGS__))
#define LOGWARN(...) ((void)__android_log_print(ANDROID_LOG_WARN, LIBNAME, __VA_ARGS__))
#define LOGERR(...) ((void)__android_log_print(ANDROID_LOG_ERROR, LIBNAME, __VA_ARGS__))

#define LOGDBG1(...) 
#define LOGDBG2(...) 
#define LOGDBG3(...) 
#define LOGDBG4(...) 

#undef GL_ERROR_DEBUGGING

#endif /*__milkomeda_chromium_gl_h_ */
