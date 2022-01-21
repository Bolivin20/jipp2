//
// Created by user on 19.01.2022.
//

#include "../quizLib/Odp.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

string Odp::odpowiedzi(int randomowa) {
    ifstream odczyt("C:\\Users\\user\\CLionProjects\\jipp2\\Projekt\\quizApp\\odp.txt");
    string line;
    if (odczyt.is_open()) {
        for (int i = 0; i < randomowa; i++) {
            getline(odczyt, line);
        }
        getline(odczyt, line);
    }
    return line;
}