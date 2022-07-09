#ifndef _BSD_MACHINE_INTRDEFS_H_
#define _BSD_MACHINE_INTRDEFS_H_

#if defined (__i386__)
#include "i386/intrdefs.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/intrdefs.h"
#elif defined (__arm__)
#include "arm/intrdefs.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/intrdefs.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_INTRDEFS_H_ */
