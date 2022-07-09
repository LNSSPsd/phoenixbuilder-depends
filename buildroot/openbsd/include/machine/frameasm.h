#ifndef _BSD_MACHINE_FRAMEASM_H_
#define _BSD_MACHINE_FRAMEASM_H_

#if defined (__i386__)
#include "i386/frameasm.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/frameasm.h"
#elif defined (__arm__)
#include "arm/frameasm.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/frameasm.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_FRAMEASM_H_ */
