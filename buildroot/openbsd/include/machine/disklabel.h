#ifndef _BSD_MACHINE_DISKLABEL_H_
#define _BSD_MACHINE_DISKLABEL_H_

#if defined (__i386__)
#include "i386/disklabel.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/disklabel.h"
#elif defined (__arm__)
#include "arm/disklabel.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/disklabel.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_DISKLABEL_H_ */
