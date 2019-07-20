Set WshShell = WScript.CreateObject("WScript.Shell")
obj = WshShell.Run("silenceJ.exe", 0)
set WshShell = Nothing