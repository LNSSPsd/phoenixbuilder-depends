#ifndef _BSD_MACHINE_PVCLOCK_H_
#define _BSD_MACHINE_PVCLOCK_H_

#if defined (__i386__)
#include "i386/pvclock.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/pvclock.h"
#elif defined (__arm__)
#include "arm/pvclock.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/pvclock.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_PVCLOCK_H_ */
