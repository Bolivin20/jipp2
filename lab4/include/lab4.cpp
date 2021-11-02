//
// Created by user on 26.10.2021.
//
#include <iostream>
using namespace std;
struct bnowy{
    string marka;
    string model;
    int rok;
    string kolor;
    double cena;
};
int fun_sam(bnowy samochod[],int a)
{   int liczba=1;
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(samochod[i].marka == samochod[j].marka)
            {
                liczba++;
            }
            if(liczba > a/2)
                break;
        }
    }
    return liczba;
}
int fun_rok(bnowy samochod[],int a)
{   int min_rok;
     int min = samochod[0].rok;
    for(int i=0;i<a;i++){
        if(min > samochod[i].rok) {
            min = samochod[i].rok;
            min_rok = i;
        }
    }
    return min_rok;
}