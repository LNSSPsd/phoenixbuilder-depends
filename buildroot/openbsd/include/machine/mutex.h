#ifndef _BSD_MACHINE_MUTEX_H_
#define _BSD_MACHINE_MUTEX_H_

#if defined (__i386__)
#include "i386/mutex.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/mutex.h"
#elif defined (__arm__)
#include "arm/mutex.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/mutex.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_MUTEX_H_ */
