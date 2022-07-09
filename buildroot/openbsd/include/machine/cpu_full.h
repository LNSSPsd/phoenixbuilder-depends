#ifndef _BSD_MACHINE_CPU_FULL_H_
#define _BSD_MACHINE_CPU_FULL_H_

#if defined (__i386__)
#include "i386/cpu_full.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/cpu_full.h"
#elif defined (__arm__)
#include "arm/cpu_full.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/cpu_full.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_CPU_FULL_H_ */
