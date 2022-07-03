#ifndef _BSD_MACHINE_MP_WATCHDOG_H_
#define _BSD_MACHINE_MP_WATCHDOG_H_

#if defined (__i386__)
#include "i386/mp_watchdog.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/mp_watchdog.h"
#elif defined (__arm__)
#include "arm/mp_watchdog.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/mp_watchdog.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_MP_WATCHDOG_H_ */
