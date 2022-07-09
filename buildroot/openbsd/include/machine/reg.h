#ifndef _BSD_MACHINE_REG_H_
#define _BSD_MACHINE_REG_H_

#if defined (__i386__)
#include "i386/reg.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/reg.h"
#elif defined (__arm__)
#include "arm/reg.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/reg.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_REG_H_ */
