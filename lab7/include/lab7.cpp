//
// Created by user on 24.11.2021.
//

#include "lab7.h"
#include <iostream>
#include <cmath>
using namespace std;
/*void Figure::pisz()
{
    Figure name;
    cin >>name.Name;
    cout << name.Name;
}*/
Square::Square(double a) : a(a) {}
double Square:: pole(double a){
    return a * a;
}
double Square:: obwod(double a){
    return 4.0 * a;
}
Circle::Circle(double a) : a(a) {}
double Circle::pol(double a){
    return a*a*3.14;
}
Rectangle :: Rectangle(double a, double b): a(a) ,b(b){}