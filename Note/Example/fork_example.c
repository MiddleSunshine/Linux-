#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    // 创建子进程
    pid = fork();

    if (pid < 0) {
        // fork() 失败
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        // 子进程代码
        printf("This is the child process\n");
        printf("Child process ID: %d\n", getpid());
    } else {
        // 父进程代码
        printf("This is the parent process\n");
        printf("Parent process ID: %d\n", getpid());
        printf("Child process ID: %d\n", pid);
    }

    return 0;
}
