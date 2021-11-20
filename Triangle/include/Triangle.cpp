//
// Created by user on 20.11.2021.
//
#include "../include/Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;
Triangle::Triangle() {
    x = 0;
    y = 0;
}
Triangle::Triangle(double x, double y): x(x), y(y) {}
void Triangle::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

ostream & operator <<( ostream & s, Triangle & z ) {
    return s << "x: "<< z.x << " y: " << z.y<< z.name;
}