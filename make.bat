@echo off
set TARGET="-t:Build"
if "%1" == "run" set TARGET="-t:Build;Run"
msbuild -p:Configuration=Release -v:m emptyExample.vcxproj %TARGET%
