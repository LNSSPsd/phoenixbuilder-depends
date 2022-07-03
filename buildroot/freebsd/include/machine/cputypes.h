#ifndef _BSD_MACHINE_CPUTYPES_H_
#define _BSD_MACHINE_CPUTYPES_H_

#if defined (__i386__)
#include "i386/cputypes.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/cputypes.h"
#elif defined (__arm__)
#include "arm/cputypes.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/cputypes.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_CPUTYPES_H_ */
