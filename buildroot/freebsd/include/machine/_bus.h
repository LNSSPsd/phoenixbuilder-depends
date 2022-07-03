#ifndef _BSD_MACHINE__BUS_H_
#define _BSD_MACHINE__BUS_H_

#if defined (__i386__)
#include "i386/_bus.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/_bus.h"
#elif defined (__arm__)
#include "arm/_bus.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/_bus.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE__BUS_H_ */
