#ifndef _BSD_MACHINE_APM_BIOS_H_
#define _BSD_MACHINE_APM_BIOS_H_

#if defined (__i386__)
#include "i386/apm_bios.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/apm_bios.h"
#elif defined (__arm__)
#include "arm/apm_bios.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/apm_bios.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_APM_BIOS_H_ */
