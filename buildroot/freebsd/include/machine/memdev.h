#ifndef _BSD_MACHINE_MEMDEV_H_
#define _BSD_MACHINE_MEMDEV_H_

#if defined (__i386__)
#include "i386/memdev.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/memdev.h"
#elif defined (__arm__)
#include "arm/memdev.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/memdev.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_MEMDEV_H_ */
