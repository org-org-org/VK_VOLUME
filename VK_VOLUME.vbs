set obj = getobject("winmgmts:\\.\root\cimv2")
set v = obj.execquery("select ProcessID from win32_process where name='VK_VOLUME.exe'")
if v.Count > 0 then 
    for each i in v
        i.terminate()
    next
end if
dir = "D:\FileRecv\batFolder\"
CreateObject("wscript.shell").run dir + "VK_VOLUME.exe", 0