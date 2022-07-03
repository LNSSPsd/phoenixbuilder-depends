#ifndef _BSD_MACHINE_MD_VAR_H_
#define _BSD_MACHINE_MD_VAR_H_

#if defined (__i386__)
#include "i386/md_var.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/md_var.h"
#elif defined (__arm__)
#include "arm/md_var.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "aarch64/md_var.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_MD_VAR_H_ */
