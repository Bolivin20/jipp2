//
// Created by user on 01.11.2021.
//
using namespace std;

#ifndef NEW_CLASS_H
#define NEW_CLASS_H

class Prostopadloscian
{
public:
    double podstawa;
    double sciana1;
    double sciana2;
    double pole;
};
class Kula
{
public:
    double r;
};
class FunckjaKwadratowa
{
public:
    double a;
    double b;
    double c;
};
class Student
{
public:
    string imie;
    string nazwisko;
    double liczba;
    double poprawne;
};
void wczytaj_licz();
class Figura
{public:
    int liczba;
    int * tablica;
public:
void Fig();
};
void Fig();

class Klasa
{
public:
    int *tablica;
    Klasa();
    ~Klasa();
    void klasa();
    void pause();
};

#endif //NEW_CLASS_H
