#ifndef _BSD_MACHINE_SOFTINTR_H_
#define _BSD_MACHINE_SOFTINTR_H_

#if defined (__i386__)
#include "i386/softintr.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/softintr.h"
#elif defined (__arm__)
#include "arm/softintr.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/softintr.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_SOFTINTR_H_ */
