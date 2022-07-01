#ifndef _BSD_MACHINE_ENDIAN_H_
#define _BSD_MACHINE_ENDIAN_H_

#if defined (__i386__) || defined(__x86_64__)
#include "i386/endian.h"
#elif defined (__arm__) || defined (__arm64__) || defined (__aarch64__)
#include "arm/endian.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_ENDIAN_H_ */
