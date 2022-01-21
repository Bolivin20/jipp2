//
// Created by user on 19.01.2022.
//
#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>

#ifndef NEW_WYBOR_H
#define NEW_WYBOR_H
using namespace std;
class Licznik{
    int arytm;
    int geo;
    int prawdop;
public:
    /**
     * Konstruktor
     * @param arytm
     * @param geo
     * @param prawdop
     */
    Licznik(int arytm, int geo,int prawdop);

    /**
     * Przeciążenie operatora "+"
     * @param s
     * @return liczba poprawnych odp
     */
    friend int operator+(Licznik &s);

    /**
     * funkcja oblicza procent prawidlowych odp
     * @param a  liczba poprawnych
     * @param b  liczba wszystkich
     * @return
     */
    int procent(int a,int b);

    /** funkcja przeciążona
     *
     * @param a
     * @param b
     * @return
     */
    double procent(double a, double b);
};
#endif //NEW_WYBOR_H
