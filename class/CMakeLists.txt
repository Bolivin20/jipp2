cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

add_executable(class include/class.h include/class.cpp src/main.cpp ../class/src/main.cpp ../class/include/class.h ../class/include/class.cpp)
