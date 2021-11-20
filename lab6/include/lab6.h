//
// Created by user on 16.11.2021.
//

#ifndef NEW_LAB6_H
#define NEW_LAB6_H
#include <iostream>
#include <cmath>
using namespace std;
class Vector {
private:
    double x, y;
    friend Vector operator*=(const Vector &lhs,const Vector &rhs);
    friend ostream & operator <<( ostream & s, Vector & z );
public:

    Vector();

    Vector(double x, double y) : x(x), y(y) {}

    double length() {
        return sqrt(x * x + y * y);
    }
    void print();
    Vector operator+(const Vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }
    Vector operator-(const Vector &rhs) const {
        return {x - rhs.x, y - rhs.y};
    }
    Vector operator*(const Vector &rhs) const {
        return {x * rhs.x, y * rhs.y};
    }
    Vector operator%(const Vector &rhs) const {
        return {x -2* rhs.x, y -2*rhs.y};
    }


    Vector &operator+=(const Vector &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }
};

Vector operator*=(const Vector &lhs,const Vector &rhs);
ostream & operator <<( ostream & s, Vector & z );
void print();
class Node {
private:
    double x, y;
    friend double pointsDistance( Node a,Node b);
public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);

};
double pointsDistance(Node a, Node b);

class Complex{
private:
    double r;
    double im;

public:
    Complex();
    Complex(double r,double im);
    void print();
    Complex &operator+(Complex &rhs)const{
        Complex num;
        num.r = r + rhs.im;
        num.im = im + rhs.r;
        return num;
    }
};

#endif //NEW_LAB6_H
