#ifndef _BSD_MACHINE_SIGFRAME_H_
#define _BSD_MACHINE_SIGFRAME_H_

#if defined (__i386__)
#include "i386/sigframe.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/sigframe.h"
#elif defined (__arm__)
#include "arm/sigframe.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/sigframe.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_SIGFRAME_H_ */
