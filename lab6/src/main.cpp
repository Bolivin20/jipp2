//
// Created by user on 16.11.2021.
//

#include "../include/lab6.h"
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    Node A(2,1);
    Node B(3,1);
   cout <<  pointsDistance(A,B);
    Vector v1(1,1), v2(5,10);
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);
    //Vector v4 = v1.operator *= (v2);
    //v4.print();
    Vector v4 = operator*=(v1,v2);
    v4.print();

    Complex n1(3,5);
    n1.print();
    cout << v1;
}