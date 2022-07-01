#ifndef _MACHINE_TRAP_H
#define _MACHINE_TRAP_H

#if defined (__i386__) || defined (__x86_64__)
#include "i386/trap.h"
#elif defined (__arm__) || defined (__arm64__) || defined (__aarch64__)
#include "arm/trap.h"
#else
#error architecture not supported
#endif

#endif /* _MACHINE_TRAP_H */
