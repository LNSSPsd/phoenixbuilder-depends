#ifndef _BSD_MACHINE_SF_BUF_H_
#define _BSD_MACHINE_SF_BUF_H_

#if defined (__i386__)
#include "i386/sf_buf.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/sf_buf.h"
#elif defined (__arm__)
#include "arm/sf_buf.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/sf_buf.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_SF_BUF_H_ */
