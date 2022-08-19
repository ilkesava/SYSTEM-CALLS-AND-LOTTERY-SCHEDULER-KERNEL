#include <linux/black.h>
#include <linux/sched.h>
#include <asm/current.h>
#include <asm/uaccess.h>
int globalvar=0;
asmlinkage int sys_black (int flag){
    globalvar=flag;
    if (globalvar==0)
    {
        return 0;
    }
    else if (globalvar==1)
    {
        return 1;
    }
}
