#ifndef _BSD_MACHINE_ENDIAN_MACHDEP_H_
#define _BSD_MACHINE_ENDIAN_MACHDEP_H_

#if defined (__i386__) || defined(__x86_64__)
#include "i386/endian_machdep.h"
#elif defined (__arm__) || defined (__arm64__) || defined (__aarch64__)
#include "arm/endian_machdep.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_ENDIAN_MACHDEP_H_ */
