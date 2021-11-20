//
// Created by user on 20.11.2021.
//

#ifndef NEW_TRIANGLE_H
#define NEW_TRIANGLE_H
#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
private:
    double x;
    double y;

    friend ostream & operator <<( ostream & s, Triangle & z );
public:
    string name;
    Triangle(double x, double y);
    Triangle();
    void display();

};
ostream & operator <<( ostream & s, Triangle & z );


#endif //NEW_TRIANGLE_H
