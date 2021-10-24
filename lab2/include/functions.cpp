//
// Created by user on 24.10.2021.
//

#include <iostream>
#include "../include/functions.h"
#include <algorithm>

using namespace std;

double pole(double a,double b)
{
    return a*b;
}
int pole(int a, int b)
{
    return a*b;
}

int losowa(int a,int b)
{
    return (rand() % b) + a;
}

int max_element(int a)
{
    int * tab = new int[a];
    for(int i=0;i<a;++i)
    {
        tab[i]= rand() % 100 + 1;
    }
    int max=tab[0];
    for(int i=0;i<a;i++){
        if(max<tab[i])
            max = tab[i];
    }
    delete [] tab;
    return max;
}
void tablica(int tab[],int a)
{
    int t=a/2;
    for(int i=0;i<t;i++)
    {
     swap(tab[i],tab[a-1]);
     a--;
    }
}
