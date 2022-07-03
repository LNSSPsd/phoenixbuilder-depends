#ifndef _BSD_MACHINE__ALIGN_H_
#define _BSD_MACHINE__ALIGN_H_

#if defined (__i386__)
#include "i386/_align.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/_align.h"
#elif defined (__arm__)
#include "arm/_align.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/_align.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE__ALIGN_H_ */
