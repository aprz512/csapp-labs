# csapp-labs

## 环境搭建

1. Ubuntu环境可参考文章：[Windows 与 Mac 下的 Ubuntu 开发环境构建](https://lyldalek.notion.site/Windows-Mac-Ubuntu-2aec0376faf3413cb2f90ed3e1bcb5c2)

2. csapp labs 需要的实验资料下载可参考文章：[CSAPP一键环境配置、完成8个lab总结](https://zhuanlan.zhihu.com/p/505497911)

不愿看上面文章的，只需要完成两步即可：
- 搞一个 Ubuntu 环境
- 执行下面的命令：
```terminal
wget https://gitee.com/lin-xi-269/csapplab/raw/origin/installAll.sh # 下载脚本
bash installAll.sh # 运行脚本
```
csapplabs目录下就是所有的实验资料了。

## 目录介绍
拿 datalab 举例，其目录如下：
```
datalab
    |- datalab-handout
    |- datalab-handout.tar
    |- datalab.pdf
    |- README-datalab
```
这几个文件其实就是原网站上面的文件，只不过帮你下载好了。
原网站的datalab相关内容在这里：http://csapp.cs.cmu.edu/3e/labs.html

由于我们没有教育邮箱，所以不能登录（点 Data Lab 会提示登录），但是这个网站也提供了直接下载链接（点 Data Lab 后面的文件可以直接下载，设计的很奇葩）。

- datalab-handout：这个是 datalab-handout.tar 解压后的产物
- datalab-handout.tar：这个里面有许多东西，包含了我们需要做的实验的各种文件
- datalab.pdf：这个在做实验之前需要读，介绍了实验内容，以及说了一些做实验的要求
- README-datalab：这个文件是给导师看的，导师根据这个文件说明来生成 datalab-handout.tar，然后发给给学生做实验。


