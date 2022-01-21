
#include "../quizLib/quiz.h"
#include "../quizLib/Pytania.h"
#include "../quizLib/Licznik.h"
#include "../quizLib/Odp.h"
#include "../quizLib/Arytmetyka.h"
#include "../quizLib/Prawdop.h"
#include "../quizLib/Geometria.h"
#include "sortowanie.cpp"
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>
#include <locale>
#include <conio.h>
#include <ctime>
#include <vector>
using namespace std;

int main(int argc,char * argv[]) {
    vector<int> licznik;
    int arytLicz=0;
    int geoLicz =0;
    int prawdopLicz=0;
    //int licz=0;
    int randomowa;
    double n = 3.0;
    cout<<"\nWitamy w quizie zadan z matury podstawowej z matematyki!"<<endl;
    //cout << "Nazwa uzytkownika: "<< argv[1];
    int iteracja =0;
    while(1){
    srand(time(NULL));
    if(iteracja!=0){
        help();
    }
    iteracja=1;
        cout <<"\nPytanie numer: "<< licznik.size()+1 << endl;
    if(licznik.size()>3)
    {
        int daneLicz[3]={arytLicz,geoLicz,prawdopLicz};
        bubbleSort<int>(daneLicz,n);
        if(daneLicz[0]==arytLicz)
        {
            randomowa = rand()%4 +0;
        }
        else if(daneLicz[0]==geoLicz)
        {
            randomowa = rand()%4 +5;
        }
        else
            randomowa = rand()%4 +9;
    }
    else
    randomowa = rand() % 12 + 0;
    Pytania *pytania = new Arytmetyka();
    Arytmetyka *arytmetyka = new Arytmetyka();

    Pytania *pytani = new Prawdop();
    Prawdop *prawdop = new Prawdop();

    Pytania *pytan = new Geometria();
    Geometria *geometria = new Geometria();

    if (randomowa < 5) {
        arytmetyka->print();
        pytania->czytajPytanie(randomowa);
        pytania->wprowadz();
    } else if (randomowa > 4 && randomowa < 9) {
        geometria->print();
        pytan->czytajPytanie(randomowa);
        pytan->wprowadz();
    } else {
        prawdop->print();
        pytani->czytajPytanie(randomowa);
        pytani->wprowadz();
    }
    Odp odp;
    string a;
    string line;
    cin >> a;
    try {
        if (a[1] != 0) {
            throw a;
        }
    }
    catch (string a) {
        cout << "Za duza liczba wprowadzonych znakow. Rozpatrywany tylko pierwszy: " << a[0] << endl;
    }
    line = odp.odpowiedzi(randomowa);
    char odpUsera = a[0];
    odpUsera = toupper(odpUsera);
    char klucz = line[0];
    if (klucz == odpUsera) {
        cout << "Brawo, dobra odp!!!\n" << endl;
        if(randomowa < 5)
            arytLicz++;
        else if(randomowa > 4 && randomowa < 9)
            geoLicz++;
        else
            prawdopLicz++;
    }
    else
        cout << "Nie udalo sie\n";
    cout << "Poprawna odp: " << odp.odpowiedzi(randomowa) << "\n\n" << endl;
    licznik.push_back(1);
    Licznik l(arytLicz,geoLicz,prawdopLicz);
    cout<<"Dobrych odp: "<< +l << endl;
    double liczba = (double)licznik.size();
    double *wsk =&liczba;
    double ulamek = (double)+l;
    double *wsk1 =&ulamek;
    cout << "Procent dobrych odp: "<<l.procent(*wsk1,*wsk)<< " %\n"<<endl;
}
    }
