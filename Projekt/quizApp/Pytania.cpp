//
// Created by user on 19.01.2022.
//
#include "../quizLib/Pytania.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;


void Pytania::czytajPytanie(int randomowa){
    ifstream odczyt("C:\\Users\\user\\CLionProjects\\jipp2\\Projekt\\quizApp\\dane.txt");
    int numerLini = 1 + randomowa * 3;
    string line;

    if (odczyt.is_open()) {
        cout << "\n";
        for(int i=0;i<numerLini-1;i++)
        {
            getline(odczyt,line);
        }
        for(int i = numerLini-1;i<numerLini+2;i++) {
            getline(odczyt, line);
            cout << line << endl;
        }
    }
    else
        cout << "Nie udało się otworzyć pliku";
}

void Pytania :: wprowadz(){
    cout << "Wprowadz odpowiedz: "<< endl;
}