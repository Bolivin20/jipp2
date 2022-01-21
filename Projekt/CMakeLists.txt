cmake_minimum_required(VERSION 3.16)

project(Projekt)
include_directories(quizLib)

add_executable(Projekt quizApp/main.cpp quizApp/quiz.cpp quizLib/quiz.h quizApp/dane.txt quizLib/Pytania.h quizApp/Pytania.cpp quizLib/Odp.h quizApp/Odp.cpp quizLib/Licznik.h quizApp/Licznik.cpp quizApp/Arytmetyka.cpp quizLib/Arytmetyka.h quizApp/Pradwop.cpp quizLib/Prawdop.h quizLib/Geometria.h quizApp/Geometria.cpp quizApp/sortowanie.cpp)
