# 有关`git`的问题解决方法:

## 如何解决error: failed to push some refs to "`https://gitee.com/`":<br /><br />

出现错误的主要原因是`gitee(github)`中的`README.md`文件不在本地代码目录中此时我们要执行:`git pull --rebase origin master`命令README.md拉到本地，然后执行`git push origin master`
<br /><br />

## 记Git报错-`refusing to merge unrelated histories`
  
出现这个问题的最主要原因还是在于本地仓库和远程仓库实际上是独立的两个仓库。假如我之前是直接`clone`的方式在本地建立起远程`github`仓库的克隆本地仓库就不会有这问题了。
查阅了一下资料，发现可以在pull命令后紧接着使用--allow-unrelated-history选项来解决问题（该选项可以合并两个独立启动仓库的历史）。
命令：

```git pull origin master --allow-unrelated-histories```

<br /><br />
