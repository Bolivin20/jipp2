//
// Created by user on 01.11.2021.
//

#include <iostream>

using namespace std;
class Student
{
public:
    string imie;
    string nazwisko;
    double liczba;
    double poprawne;
};
void wczytaj_licz()
{   Student dane;
    cin >> dane.imie >> dane.nazwisko >> dane.liczba >> dane.poprawne;
    cout << "wynik: "<< (dane.poprawne/dane.liczba )*100 << " %"<<endl;
}
class Figura
{public:
    int liczba;
    int * tablica;
public:
    void Fig();
};
void Figura::Fig()
{   cout << "Podaj liczbe" << endl;
    cin >> liczba;
    cout << "podaj wierzcholki:"<<endl;
    tablica = new int[liczba];
    for(int i=0;i<liczba;i++)
    {
        cin >> tablica[i];
    }
    for(int i=0;i<liczba;i++)
    {
        cout << tablica[i] << endl;
    }
    delete [] tablica;
}
class Klasa
{
public:
    int *tablica;
    Klasa();
    ~Klasa();
    void klasa();
    void pause();
};
void Klasa::pause()
{
    system ("PAUSE");
}
void Klasa::klasa() {
    tablica = new int[1024];
    for (int i = 0; i < 1024; i++) {
        tablica[i]=1;
    }

}