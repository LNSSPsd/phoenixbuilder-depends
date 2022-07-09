#ifndef _BSD_MACHINE_TIMETC_H_
#define _BSD_MACHINE_TIMETC_H_

#if defined (__i386__)
#include "i386/timetc.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/timetc.h"
#elif defined (__arm__)
#include "arm/timetc.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/timetc.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_TIMETC_H_ */
