#ifndef _BSD_MACHINE_I8259_H_
#define _BSD_MACHINE_I8259_H_

#if defined (__i386__)
#include "i386/i8259.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/i8259.h"
#elif defined (__arm__)
#include "arm/i8259.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/i8259.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_I8259_H_ */
