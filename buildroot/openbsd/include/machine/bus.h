#ifndef _BSD_MACHINE_BUS_H_
#define _BSD_MACHINE_BUS_H_

#if defined (__i386__)
#include "i386/bus.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/bus.h"
#elif defined (__arm__)
#include "arm/bus.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/bus.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_BUS_H_ */
