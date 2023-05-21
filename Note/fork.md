# 作用

构建一个新的进程，但是这个进程与原进程具有相同的：

- 代码
- 数据
- 文件描述符

# 代码例子

```c
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
```

输出：

```shell
This is the parent process
Parent process ID: 16278
Child process ID: 16284
This is the child process
Child process ID: 16284
```

注意事项：

- 子进程是在`pid=fork()`处开始执行的，此时`pid`的值是0