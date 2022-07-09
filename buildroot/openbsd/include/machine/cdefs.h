#ifndef _BSD_MACHINE_CDEFS_H_
#define _BSD_MACHINE_CDEFS_H_

#if defined (__i386__)
#include "i386/cdefs.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/cdefs.h"
#elif defined (__arm__)
#include "arm/cdefs.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/cdefs.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_CDEFS_H_ */
