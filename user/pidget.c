#include "user.h"

int main(void) {
    int pid_syscall = getpid();
    int pid_fast = ugetpid();

    printf("getpid() = %d\n", pid_syscall);
    printf("ugetpid() = %d\n", pid_fast);
    if (pid_syscall == pid_fast) {
        printf("PID matches!\n");
    } else {
        printf("PID does NOT match!\n");
    }
    return 0;
}