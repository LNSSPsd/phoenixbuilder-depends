#ifndef _BSD_MACHINE_PCPU_AUX_H_
#define _BSD_MACHINE_PCPU_AUX_H_

#if defined (__i386__)
#include "i386/pcpu_aux.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/pcpu_aux.h"
#elif defined (__arm__)
#include "arm/pcpu_aux.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/pcpu_aux.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_PCPU_AUX_H_ */
