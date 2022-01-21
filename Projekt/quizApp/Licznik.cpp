//
// Created by user on 19.01.2022.
//

#include "../quizLib/Licznik.h"

using namespace std;

Licznik::Licznik(int arytm, int geo,int prawdop):arytm(arytm),geo(geo),prawdop(prawdop){}
int operator+ (Licznik &s) {
    return (s.arytm +  s.geo + s.prawdop);
}
int Licznik::procent(int a, int b) {
    return (a*100)/b;
}
double Licznik::procent(double a, double b) {
    return (a*100)/b;
}