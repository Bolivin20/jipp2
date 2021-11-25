//
// Created by user on 24.11.2021.
//
#include "../include/lab7.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    /*Square a(3);
    cout <<"Pole: "<< a.pole(3)<< endl << "Obwod: "<<a.obwod(3)<< endl;
    Circle r(3);
    cout << "Pole: "<< r.pol(3)<<endl;
    a.pisz();*/

    Figure *circle = new Circle(5);
    Figure *rectangle = new Rectangle(5, 18);

    cout << "Circle area: " << circle->getArea() << endl;
    cout << "Rectangle area: " << rectangle->getArea() << endl;


}
