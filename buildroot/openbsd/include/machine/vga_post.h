#ifndef _BSD_MACHINE_VGA_POST_H_
#define _BSD_MACHINE_VGA_POST_H_

#if defined (__i386__)
#include "i386/vga_post.h"
#elif defined (__amd64__) || defined (__x86_64__)
#include "amd64/vga_post.h"
#elif defined (__arm__)
#include "arm/vga_post.h"
#elif defined (__arm64__) || defined (__aarch64__)
#include "arm64/vga_post.h"
#else
#error architecture not supported
#endif

#endif /* _BSD_MACHINE_VGA_POST_H_ */
