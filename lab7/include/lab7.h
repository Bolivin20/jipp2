//
// Created by user on 24.11.2021.
//

#ifndef NEW_LAB7_H
#define NEW_LAB7_H
#include <iostream>
#include <cmath>
using namespace std;

class Figure {
protected:
    string Name, color;
public:
    void pisz();
    virtual double getArea() = 0;

};
class Square : public Figure {
public:
    double a;

    Square(double a);
   double pole(double a);
   double obwod(double a);

};
class Circle : public Figure {
public:
    double a;
    Circle(double a);
    double pol(double a);
    //double obwod(double a);
    double getArea() {
        return a * a * 3.14;
    }
};
class Rectangle : public Figure {
public:
    double a, b;

    Rectangle(double a, double b);

    double pol(double a);

    //double obwod(double a);
    double getArea()  {
        return a * b;
    }
};
#endif //NEW_LAB7_H
