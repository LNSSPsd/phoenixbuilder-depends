#ifndef _BSD_MACHINE_I82489VAR_H_
#define _BSD_MACHINE_I82489VAR_H_

#if defined (__i386__)
#include "i386/i82489var.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/i82489var.h"
#elif defined (__arm__)
#include "arm/i82489var.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/i82489var.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_I82489VAR_H_ */
