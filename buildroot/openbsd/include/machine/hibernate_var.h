#ifndef _BSD_MACHINE_HIBERNATE_VAR_H_
#define _BSD_MACHINE_HIBERNATE_VAR_H_

#if defined (__i386__)
#include "i386/hibernate_var.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/hibernate_var.h"
#elif defined (__arm__)
#include "arm/hibernate_var.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/hibernate_var.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_HIBERNATE_VAR_H_ */
