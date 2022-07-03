#ifndef _BSD_MACHINE_MINIDUMP_H_
#define _BSD_MACHINE_MINIDUMP_H_

#if defined (__i386__)
#include "i386/minidump.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/minidump.h"
#elif defined (__arm__)
#include "arm/minidump.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/minidump.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_MINIDUMP_H_ */
