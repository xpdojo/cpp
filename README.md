# C++

## 준비

## Ubuntu 20.04

```sh
sudo snap install cmake
sudo apt install g++
```

## Windows 11

```ps1
# https://cmake.org/download/
> get-command cmake
CommandType     Name                                               Version    Source
-----------     ----                                               -------    ------
Application     cmake.exe                                          3.24.1.0   C:\Program Files\CMake\bin\cmake.exe
```

```ps1
# http://gnuwin32.sourceforge.net/packages/make.htm
> get-command mingw32-make
CommandType     Name                                               Version    Source
-----------     ----                                               -------    ------
Application     mingw32-make.exe                                   0.0.0.0    C:\msys64\mingw64\bin\mingw32-make.exe
```

```ps1
cmake -DCMAKE_CXX_COMPILER=g++ -DCMAKE_MAKE_PROGRAM=mingw32-make -G "MinGW Makefiles" .
# remove-Item -recurse -force ./CMakeFiles
```

## Mac OS X

```sh
brew install cmake
```

## 테스트

```sh
ctest --extra-verbose
```

## 빌드

```sh
mkdir demo
cd demo
```

```sh
touch CMakeLists.txt
cmake ..
# main.cpp 작성
cd build
make
```

## 실행

```sh
./build/app
# Hello, World!
```

## 정리

```sh
rm -rf CMakeCache.txt Makefile CMakeFiles/ Testing/ build/ *.cmake
```
