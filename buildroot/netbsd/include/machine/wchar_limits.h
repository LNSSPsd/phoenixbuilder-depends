#ifndef _BSD_MACHINE_WCHAR_LIMITS_H_
#define _BSD_MACHINE_WCHAR_LIMITS_H_

#if defined (__i386__) || defined(__x86_64__)
#include "i386/wchar_limits.h"
#elif defined (__arm__) || defined (__arm64__) || defined (__aarch64__)
#include "arm/wchar_limits.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_WCHAR_LIMITS_H_ */
