#include <liblinux/linux.h>

extern inline LINUX_DECLARE_SYSCALL2_NORET(lstat64, char const*, filename, struct linux_stat64*, statbuf);
