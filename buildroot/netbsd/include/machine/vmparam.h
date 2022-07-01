#ifndef _BSD_MACHINE_VMPARAM_H_
#define _BSD_MACHINE_VMPARAM_H_

#if defined (__i386__) || defined(__x86_64__)
#include "i386/vmparam.h"
#elif defined (__arm__) || defined (__arm64__) || defined (__aarch64__)
#include "arm/vmparam.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_VMPARAM_H_ */
