#include <liblinux/linux.h>

extern inline enum linux_error linux_io_uring_setup(uint32_t entries, struct linux_io_uring_params* params, linux_fd_t* result);
