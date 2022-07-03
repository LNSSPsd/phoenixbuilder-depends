#ifndef _BSD_MACHINE_RESOURCE_H_
#define _BSD_MACHINE_RESOURCE_H_

#if defined (__i386__)
#include "i386/resource.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/resource.h"
#elif defined (__arm__)
#include "arm/resource.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/resource.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_RESOURCE_H_ */
