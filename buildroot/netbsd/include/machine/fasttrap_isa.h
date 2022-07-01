#ifndef _BSD_MACHINE_FASTTRAP_ISA_H_
#define _BSD_MACHINE_FASTTRAP_ISA_H_

#if defined (__i386__) || defined(__x86_64__)
#include "i386/fasttrap_isa.h"
#elif defined (__arm__) || defined (__arm64__) || defined (__aarch64__)
#include "arm/fasttrap_isa.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_FASTTRAP_ISA_H_ */
