# VK_VOLUME
外接的键盘没有Fn。。。也没有调音量的键😅于是想自己弄一个。可自定义键盘快捷键调节电脑音量
运行可执行文件后即可按ALT+小键盘除号静音或开启，ALT+小键盘减号降低音量，ALT+小键盘加号提高音量，然后编写VK_VOLUME.vbs脚本开机自启挂后台：

dir为编译后可执行文件(VK_VOLUME.exe)的目录，建议右键VK_VOLUME.exe属性设为管理员运行，否则在游戏内可能不会生效。
把该脚本命名为XXX.vbs，放到C:\ProgramData\Microsoft\Windows\Start Menu\Programs\StartUp路径下，即可开机自启。（第一次可以手动双击运行不用重启）
该脚本可能被360等杀毒软件认为是不必要的开机启动文件，注意别误删就行。
