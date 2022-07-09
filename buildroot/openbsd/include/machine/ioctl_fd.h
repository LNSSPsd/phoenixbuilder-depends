#ifndef _BSD_MACHINE_IOCTL_FD_H_
#define _BSD_MACHINE_IOCTL_FD_H_

#if defined (__i386__)
#include "i386/ioctl_fd.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/ioctl_fd.h"
#elif defined (__arm__)
#include "arm/ioctl_fd.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/ioctl_fd.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_IOCTL_FD_H_ */
