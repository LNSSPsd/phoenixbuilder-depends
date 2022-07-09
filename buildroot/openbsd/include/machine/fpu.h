#ifndef _BSD_MACHINE_FPU_H_
#define _BSD_MACHINE_FPU_H_

#if defined (__i386__)
#include "i386/fpu.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/fpu.h"
#elif defined (__arm__)
#include "arm/fpu.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/fpu.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_FPU_H_ */
