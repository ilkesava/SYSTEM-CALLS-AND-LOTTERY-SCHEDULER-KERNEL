#include <linux/unistd.h>
#include <sys/syscall.h>
#include <errno.h>
#include <sys/types.h>
extern int errno;
_syscall1(int, black, int, flag);
