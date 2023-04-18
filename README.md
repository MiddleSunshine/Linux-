# Linux-
The Linux Programming Interface 的源码

# Start

先编译基础库

```bash
cd ./SourceCode/tlpi-book/lib
make all
```

之后再到所需目录去编译所需要的文件

```bash
cd $到指定目录
make $c文件
# 编译所有
make all
```

Ubuntu 下可能缺少的依赖：

```bash
sudo apt-get install libcap-dev
```
