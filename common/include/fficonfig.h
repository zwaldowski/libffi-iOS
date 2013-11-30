#if !defined(__i386__) && defined(__x86_64__)
#include <fficonfig_x86_64.h>
#endif

#if !defined(__arm__) && defined(__i386__)
#include <fficonfig_i386.h>
#endif

#ifdef __arm__
#include <fficonfig_arm.h>
#endif