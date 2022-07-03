#ifndef _BSD_MACHINE_INTR_MACHDEP_H_
#define _BSD_MACHINE_INTR_MACHDEP_H_

#if defined (__i386__)
#include "i386/intr_machdep.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/intr_machdep.h"
#elif defined (__arm__)
#include "arm/intr_machdep.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/intr_machdep.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_INTR_MACHDEP_H_ */
