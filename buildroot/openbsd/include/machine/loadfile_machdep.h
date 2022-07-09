#ifndef _BSD_MACHINE_LOADFILE_MACHDEP_H_
#define _BSD_MACHINE_LOADFILE_MACHDEP_H_

#if defined (__i386__)
#include "i386/loadfile_machdep.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/loadfile_machdep.h"
#elif defined (__arm__)
#include "arm/loadfile_machdep.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/loadfile_machdep.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_LOADFILE_MACHDEP_H_ */
