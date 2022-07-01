#ifndef _BSD_MACHINE_BYTE_SWAP_H_
#define _BSD_MACHINE_BYTE_SWAP_H_

#if defined (__i386__) || defined(__x86_64__)
#include "i386/byte_swap.h"
#elif defined (__arm__) || defined (__arm64__) || defined (__aarch64__)
#include "arm/byte_swap.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_BYTE_SWAP_H_ */
