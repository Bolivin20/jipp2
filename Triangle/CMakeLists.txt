cmake_minimum_required(VERSION 3.16)

project(Triangle)
include_directories(include)

add_executable(Triangle src/main.cpp include/Triangle.h include/Triangle.cpp)