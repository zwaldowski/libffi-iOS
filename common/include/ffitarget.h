#if !defined(__i386__) && defined(__x86_64__)
#include <ffitarget_x86_64.h>
#endif

#if !defined(__arm__) && defined(__i386__)
#include <ffitarget_i386.h>
#endif

#ifdef __arm__
#include <ffitarget_arm.h>
#endif