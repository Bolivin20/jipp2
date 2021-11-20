cmake_minimum_required(VERSION 3.16)

project(e1NoCopyingConstructor)
include_directories(include)

add_executable(e1NoCopyingConstructor src/main.cpp src/Point.cpp ../lab6/src/main.cpp ../lab6/include/lab6.h ../lab6/src/lab6.cpp)