cmake_minimum_required(VERSION 3.16)#指定最低版本
project(MyProject CXX)#项目名称-语言

set(CMAKE_CXX_STANDARD 17)#C++标准
set(CMAKE_CXX_STANDARD_REQUIRED ON)#强制执行

include_directories(${PROJECT_SOURCE_DIR}/include)#头文件搜索文件路径

add_executable(demo
	src/Hello.cpp
	src/main.cpp
)#可执行文件

