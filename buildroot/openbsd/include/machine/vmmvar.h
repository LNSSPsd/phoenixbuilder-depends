#ifndef _BSD_MACHINE_VMMVAR_H_
#define _BSD_MACHINE_VMMVAR_H_

#if defined (__i386__)
#include "i386/vmmvar.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/vmmvar.h"
#elif defined (__arm__)
#include "arm/vmmvar.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/vmmvar.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_VMMVAR_H_ */
