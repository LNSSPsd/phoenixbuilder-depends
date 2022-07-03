#ifndef _BSD_MACHINE_VMM_H_
#define _BSD_MACHINE_VMM_H_

#if defined (__i386__)
#include "i386/vmm.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/vmm.h"
#elif defined (__arm__)
#include "arm/vmm.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/vmm.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_VMM_H_ */
