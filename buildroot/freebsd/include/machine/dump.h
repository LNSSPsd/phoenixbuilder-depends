#ifndef _BSD_MACHINE_DUMP_H_
#define _BSD_MACHINE_DUMP_H_

#if defined (__i386__)
#include "i386/dump.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/dump.h"
#elif defined (__arm__)
#include "arm/dump.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/dump.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_DUMP_H_ */
