cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 17)

# Dodajemy pliki, które mają byc kompilowane

add_library(matrixLib STATIC matrixLib.cpp)