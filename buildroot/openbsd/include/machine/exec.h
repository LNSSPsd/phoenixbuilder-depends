#ifndef _BSD_MACHINE_EXEC_H_
#define _BSD_MACHINE_EXEC_H_

#if defined (__i386__)
#include "i386/exec.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/exec.h"
#elif defined (__arm__)
#include "arm/exec.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/exec.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_EXEC_H_ */
