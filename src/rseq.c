#include <liblinux/linux.h>

extern inline LINUX_DECLARE_SYSCALL4_NORET(rseq, struct linux_rseq*, rseq, uint32_t, rseq_len, int, flags, uint32_t, sig);
