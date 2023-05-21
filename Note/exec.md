# 作用

exec函数是一个**系统调用**，用于在当前进程中执行一个新的程序。

它是一种进程替换（process replacement）机制，通过**加载并执行一个新的可执行文件**来替换当前进程的内容。

演示例子：

```c
#include <stdio.h>
#include <unistd.h>

int main() {
    // 创建一个参数数组，包含要执行的程序名和参数列表
    char *args[] = { "ls", "-l", NULL };

    // 执行新程序
    execvp(args[0], args);

    // 如果execvp()函数返回，说明发生了错误
    perror("execvp");
    return 1;
}

```