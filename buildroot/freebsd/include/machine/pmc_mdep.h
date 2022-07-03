#ifndef _BSD_MACHINE_PMC_MDEP_H_
#define _BSD_MACHINE_PMC_MDEP_H_

#if defined (__i386__)
#include "i386/pmc_mdep.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/pmc_mdep.h"
#elif defined (__arm__)
#include "arm/pmc_mdep.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/pmc_mdep.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_PMC_MDEP_H_ */
