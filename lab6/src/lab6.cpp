//
// Created by user on 16.11.2021.
//
#include "../include/lab6.h"
#include <iostream>
#include <cmath>
using namespace std;
Vector::Vector() {
    x = 0;
    y = 0;
}
void Vector::print() {
    cout << "x: " << x << "\ty: " << y << endl;
}
Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() {
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}
double pointsDistance(Node a, Node b){
    return sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
}
Complex::Complex() {
    r = 0;
    im = 0;
}
Complex::Complex(double r, double im): r(r), im(im) {}
void Complex::print() {
    cout  << r <<" "<< im << "i"<<endl;
}
Vector operator*=(const Vector &lhs,const Vector &rhs){

    return {lhs.x*rhs.x+lhs.y*rhs.y,0};

}
ostream & operator <<( ostream & s, Vector & z ) {
    return s << "x: "<< z.x << " y: " << z.y;
}