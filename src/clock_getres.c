#include <liblinux/linux.h>

extern inline enum linux_error linux_clock_getres(linux_clockid_t which_clock, struct linux_kernel_timespec* tp);
