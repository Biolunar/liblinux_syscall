#include <liblinux/linux.h>

extern inline enum linux_error linux_inotify_add_watch(linux_fd_t fd, char const* pathname, uint32_t mask, linux_wd_t* result);
