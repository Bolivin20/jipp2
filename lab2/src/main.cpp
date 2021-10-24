//
// Created by user on 24.10.2021.
//

#include <iostream>
#include "../include/functions.h"

using namespace std;

int main()
{
    int tab[] = {1,2,3,4,5};
    tablica(tab,5);

    for(int i=0;i<5;i++)
    {
        cout << tab[i] << endl;
    }
    double a,b;
    cin >> a ;
    cin >> b;
    double *c= &a;
    double *d= &b;
    double srednia= (*c+*d)/2;
    cout << srednia<< endl;

    double dzielenie= a/b;
    if(dzielenie == (int) dzielenie)
        cout << dzielenie << endl;
    else
        cout << "ulamek";

}