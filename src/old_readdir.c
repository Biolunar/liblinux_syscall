#include <liblinux/linux.h>

extern inline enum linux_error linux_old_readdir(linux_fd_t fd, struct linux_old_linux_dirent* dirent, unsigned int count);
