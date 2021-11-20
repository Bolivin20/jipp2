//
// Created by user on 20.11.2021.
//

#include "../include/Triangle.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    Triangle triangle;
    Triangle a, b(5,8), c(1, 16);

    triangle.name = "First";
    a.display();
    b.display();
    c.display();
    cout << a << b << c << endl;
}