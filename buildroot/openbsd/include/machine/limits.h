#ifndef _BSD_MACHINE_LIMITS_H_
#define _BSD_MACHINE_LIMITS_H_

#if defined (__i386__)
#include "i386/limits.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/limits.h"
#elif defined (__arm__)
#include "arm/limits.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/limits.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_LIMITS_H_ */
