#ifndef _BSD_MACHINE_ATOMIC_H_
#define _BSD_MACHINE_ATOMIC_H_

#if defined (__i386__)
#include "i386/atomic.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/atomic.h"
#elif defined (__arm__)
#include "arm/atomic.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/atomic.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_ATOMIC_H_ */
