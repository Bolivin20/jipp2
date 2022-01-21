cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

include_directories(../matrixLib)

add_executable(Matrix main.cpp ../matrixLib/matrixLib.cpp ../matrixLib/matrixLib.h ../../Projekt/quizLib/quiz.h ../../Projekt/quziApp/main.cpp ../../Projekt/quziApp/quiz.cpp ../../Projekt/quizApp/main.cpp ../../Projekt/quizApp/quiz.cpp)

