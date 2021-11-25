# `git`入门

目录：
[toc]

## 1.`git`初始化

### 用户信息

```git
    git config --global user.name "用户名"
    get config --global user.email "电子邮箱"
```

### 检查配置信息

```git
    git config --list
    q(按q退出查看配置信息)
```

检查 Git 的某一项配置:

```git
    git config user.name
```

### 获取帮助

打开Git命令的使用手册：

```git
    git help <verb>
    git <verb> --help
    man git-<verb>
```

获得config命令的手册：

```git
    git help config
```

## 2.`git`的基本操作命令

### 添加到Stage暂存区

```git
    git add 1.txt
    git add .
```

### 查看日志

```git
    git log
```

### 提交到`git`中

```git
    git commit -m “版本信息”
```

### 回退到上一个版本

```git
    git reset --hard HEAD~1
```

### 往上第2个版本

```git
    git reset --hard HEAD~2
```

### 回退后log中的最新的版本不见了

```git
    git reflog
    git reflog --oneline <简易版>
```

### 找到想恢复的版本的id

```git
    git reset --hard 8e24bfc
```

### 撤销修改

```git
    git checkout
```

## 3.`git`分支操作

### 创建新分支

```git
    git  branch 分支名 或 git  checkout -b 分支名
```

### 切换到新分支

```git
    git  checkout 分支名 或 git  checkout -b 分支名
```

### 合并分支

```git
    git  merge 分支名
```

### 查看分支

```git
    git  branch
```

### 删除某分支

```git
    git  branch -d 分支名
```

## 3.获取Git仓库

### 在现有目录中初始化仓库

```git
    git init
```

### 克隆现有的仓库

```git
    git clone 仓库地址
```

### 检查当前文件的状态

```git
    git status
```

## 4.Git远程操作

### 添加远程仓库地址

```git
    git remote add origin 仓库地址（https地址）
```

### 创建SSH Key

```git
    ssh-keygen -t rsa -C "youremail@example.com"
```

在`github`或`gitee`中添加公钥；

### 克隆远程仓库到本地

```git
    git clone git@github.com:fzhh612/gitrepo
```

### 本地向远程提交

```git
    git push origin master
```

### 从远程分支获取最新版本到本地

```git
    git pull origin master
```

注：首次需要先拉取远程仓库的文件；
<br>
