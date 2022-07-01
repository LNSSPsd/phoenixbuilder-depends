#if defined (__i386__) || defined(__x86_64__)
#include <i386/limits.h>
#elif defined (__arm__) || defined (__arm64__) || defined (__aarch64__)
#include <arm/limits.h>
#else
#error architecture not supported
#endif
