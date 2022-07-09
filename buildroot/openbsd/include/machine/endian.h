#ifndef _BSD_MACHINE_ENDIAN_H_
#define _BSD_MACHINE_ENDIAN_H_

#if defined (__i386__)
#include "i386/endian.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/endian.h"
#elif defined (__arm__)
#include "arm/endian.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/endian.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_ENDIAN_H_ */
