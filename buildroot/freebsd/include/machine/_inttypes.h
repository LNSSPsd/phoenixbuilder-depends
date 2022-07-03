#ifndef _BSD_MACHINE__INTTYPES_H_
#define _BSD_MACHINE__INTTYPES_H_

#if defined (__i386__)
#include "i386/_inttypes.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/_inttypes.h"
#elif defined (__arm__)
#include "arm/_inttypes.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/_inttypes.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE__INTTYPES_H_ */
