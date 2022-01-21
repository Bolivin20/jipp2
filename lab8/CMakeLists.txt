cmake_minimum_required(VERSION 3.16)

project(lab8)
include_directories(include)

add_executable(lab8 src/main.cpp include/lab8.cpp include/lab8.h include/Stop.h include/Stop.cpp include/Line.h include/Line.cpp include/TimeMeasure.h src/TimeMeasure.cpp)