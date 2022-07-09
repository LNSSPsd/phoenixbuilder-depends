#ifndef _BSD_MACHINE_HIBERNATE_H_
#define _BSD_MACHINE_HIBERNATE_H_

#if defined (__i386__)
#include "i386/hibernate.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/hibernate.h"
#elif defined (__arm__)
#include "arm/hibernate.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/hibernate.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_HIBERNATE_H_ */
