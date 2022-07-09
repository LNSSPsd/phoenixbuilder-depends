#ifndef _BSD_MACHINE_PIC_H_
#define _BSD_MACHINE_PIC_H_

#if defined (__i386__)
#include "i386/pic.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/pic.h"
#elif defined (__arm__)
#include "arm/pic.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/pic.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_PIC_H_ */
