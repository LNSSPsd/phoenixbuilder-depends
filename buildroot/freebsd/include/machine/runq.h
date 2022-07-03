#ifndef _BSD_MACHINE_RUNQ_H_
#define _BSD_MACHINE_RUNQ_H_

#if defined (__i386__)
#include "i386/runq.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/runq.h"
#elif defined (__arm__)
#include "arm/runq.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/runq.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_RUNQ_H_ */
