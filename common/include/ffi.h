#if !defined(__i386__) && defined(__x86_64__)
#include <ffi_x86_64.h>
#endif

#if !defined(__arm__) && defined(__i386__)
#include <ffi_i386.h>
#endif

#ifdef __arm__
#include <ffi_arm.h>
#endif