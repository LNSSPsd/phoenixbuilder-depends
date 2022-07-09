#ifndef _BSD_MACHINE_TCB_H_
#define _BSD_MACHINE_TCB_H_

#if defined (__i386__)
#include "i386/tcb.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/tcb.h"
#elif defined (__arm__)
#include "arm/tcb.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/tcb.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_TCB_H_ */
