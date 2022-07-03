#ifndef _BSD_MACHINE_CSAN_H_
#define _BSD_MACHINE_CSAN_H_

#if defined (__i386__)
#include "i386/csan.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/csan.h"
#elif defined (__arm__)
#include "arm/csan.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/csan.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_CSAN_H_ */
