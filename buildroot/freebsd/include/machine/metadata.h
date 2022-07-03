#ifndef _BSD_MACHINE_METADATA_H_
#define _BSD_MACHINE_METADATA_H_

#if defined (__i386__)
#include "i386/metadata.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/metadata.h"
#elif defined (__arm__)
#include "arm/metadata.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/metadata.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_METADATA_H_ */
