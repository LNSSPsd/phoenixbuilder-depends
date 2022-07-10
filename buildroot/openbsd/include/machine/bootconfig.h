#ifndef _BSD_MACHINE_BOOTCONFIG_H_
#define _BSD_MACHINE_BOOTCONFIG_H_

#if defined (__i386__)
#include "i386/bootconfig.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/bootconfig.h"
#elif defined (__arm__)
#include "arm/bootconfig.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/bootconfig.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_BOOTCONFIG_H_ */
