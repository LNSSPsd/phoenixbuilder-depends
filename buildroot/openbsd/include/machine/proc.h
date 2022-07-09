#ifndef _BSD_MACHINE_PROC_H_
#define _BSD_MACHINE_PROC_H_

#if defined (__i386__)
#include "i386/proc.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/proc.h"
#elif defined (__arm__)
#include "arm/proc.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/proc.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_PROC_H_ */
