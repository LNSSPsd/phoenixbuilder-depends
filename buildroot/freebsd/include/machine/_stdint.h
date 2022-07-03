#ifndef _BSD_MACHINE__STDINT_H_
#define _BSD_MACHINE__STDINT_H_

#if defined (__i386__)
#include "i386/_stdint.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/_stdint.h"
#elif defined (__arm__)
#include "arm/_stdint.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/_stdint.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE__STDINT_H_ */
