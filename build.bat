@echo off

set demoName=Demo.exe

if "%1"=="clean" (
    rd /s /q bin
    exit /b
)

mkdir bin

:: Compile the demo
gcc -Wall demo/demo.c -I. -o bin/%demoName%