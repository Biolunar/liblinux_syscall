#include <liblinux/linux.h>

extern inline enum linux_error linux_getgroups16(int gidsetsize, linux_old_gid_t* grouplist, int* result);
