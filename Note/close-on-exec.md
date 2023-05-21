# 作用

就是在程序执行`exec`函数时，关闭该文件。

# 原因

- 安全性：子进程会继承父进程的文件描述符，设置这个标志后，就可以自动关闭该文件。（当然子进程是否可以访问原本的文件就看权限那里了。）
- 减少资源：当子进程需要的文件描述符很少，并不需要全部的父进程的文件描述符时，就可以通过这个减少。