//
// Created by user on 01.11.2021.
//

#include <iostream>
#include "../include/class.h"

using namespace std;

int main() {
    double a, b, c;
    cout << "podaj a,b,c:" << endl;
    cin >> a >> b >> c;
    Prostopadloscian pole;
    pole.podstawa = a * b;
    pole.sciana1 = a * c;
    pole.sciana2 = b * c;
    pole.pole = 2 * (pole.podstawa + pole.sciana1 + pole.sciana2);
    cout << "pole prostopadloscianu:" << pole.pole << endl;
    cout << "podaj promien kuli" << endl;
    Kula obj;
    cin >> obj.r;
    double V = 4. / 3. * 3.14 * pow((obj.r), 3);
    cout << "objetosc kuli:" << V << endl;
    FunckjaKwadratowa f;
    cout << "Podaj wspolczynniki a,b,c" << endl;
    cin >> f.a >> f.b >> f.c;
    cout << "f(x)= " << f.a << "x^2 + " << f.b << "x + " << f.c << endl;
    cout << "podaj imie,nazwisko,liczbe pytan, liczbe poprawnych:" << endl;
    wczytaj_licz();
    Figura fi;
    fi.Fig();
    Klasa kl;
    kl.klasa();
    string stop;
    cout<< "nacisnij 'a' by przerwac" << endl;
    cin >> a;
    if(stop == "a")
    kl.pause();

}
Klasa::Klasa()
{
    cout << "=> Konstruktor nie wywolany!" << endl;
}
Klasa::~Klasa()
{
    cout << "=> Destruktor wywolany!" << endl;
    delete [] tablica;
}