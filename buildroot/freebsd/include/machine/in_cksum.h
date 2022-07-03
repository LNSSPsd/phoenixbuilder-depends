#ifndef _BSD_MACHINE_IN_CKSUM_H_
#define _BSD_MACHINE_IN_CKSUM_H_

#if defined (__i386__)
#include "i386/in_cksum.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/in_cksum.h"
#elif defined (__arm__)
#include "arm/in_cksum.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/in_cksum.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_IN_CKSUM_H_ */
