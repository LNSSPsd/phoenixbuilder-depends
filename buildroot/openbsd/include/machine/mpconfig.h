#ifndef _BSD_MACHINE_MPCONFIG_H_
#define _BSD_MACHINE_MPCONFIG_H_

#if defined (__i386__)
#include "i386/mpconfig.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/mpconfig.h"
#elif defined (__arm__)
#include "arm/mpconfig.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/mpconfig.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_MPCONFIG_H_ */
