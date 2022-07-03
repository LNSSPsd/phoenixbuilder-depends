#ifndef _BSD_MACHINE_NPX_H_
#define _BSD_MACHINE_NPX_H_

#if defined (__i386__)
#include "i386/npx.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/npx.h"
#elif defined (__arm__)
#include "arm/npx.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/npx.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_NPX_H_ */
