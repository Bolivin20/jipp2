cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

include_directories(../firstLib/include)

add_executable(firstLib firstLib/include/lib.h firstLib/src/lib.cpp)

target_link_libraries(firstLibCall firstLib)

