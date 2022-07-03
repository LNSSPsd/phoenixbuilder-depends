#ifndef _BSD_MACHINE_PCI_CFGREG_H_
#define _BSD_MACHINE_PCI_CFGREG_H_

#if defined (__i386__)
#include "i386/pci_cfgreg.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/pci_cfgreg.h"
#elif defined (__arm__)
#include "arm/pci_cfgreg.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/pci_cfgreg.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_PCI_CFGREG_H_ */
