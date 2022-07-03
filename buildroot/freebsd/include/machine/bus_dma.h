#ifndef _BSD_MACHINE_BUS_DMA_H_
#define _BSD_MACHINE_BUS_DMA_H_

#if defined (__i386__)
#include "i386/bus_dma.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/bus_dma.h"
#elif defined (__arm__)
#include "arm/bus_dma.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/bus_dma.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_BUS_DMA_H_ */
