#include "quiz.h"
#include <iostream>
#include <cmath>
using namespace std;

void help(){
    cout<< "Dokonaj wyboru: "<<endl;
    cout<< "1- Nastepne pytanie "<<endl;
    cout<< "2- Wyjscie"<<endl;
    cout<<"Wprowadz cyfre: "<<endl;

    string wybor;
    cin >> wybor;
    try {
        if (wybor[1] != 0) {
            throw wybor;
        }
    }
    catch (string wybor) {
        cout << "Za duza liczba wprowadzonych znakow. Rozpatrywany tylko pierwszy: " << wybor[0] << endl;
    }
    if(wybor[0]=='2')
        exit(1);
    else if(wybor[0]=='1');
    else{
     cout<<"Niepoprawnie wprowadzone znaki."<<endl;
     help();
    }
}
