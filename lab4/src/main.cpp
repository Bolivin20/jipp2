//
// Created by user on 26.10.2021.
//

#include <iostream>
#include "../include/lab4.h"

using namespace std;

int main() {
    int a;
    cout << "podaj liczbe samochodow" <<endl;
    cin >> a;
    bnowy samochod[10];
     cout << "podaj marke, model, rok, kolor, cene:"<<endl;
    for (int i = 0; i < a; i++)
    {
        cin >> samochod[i].marka >> samochod[i].model >> samochod[i].rok >> samochod[i].kolor >> samochod[i].cena;
    }
    cout << "Marka\tModel \tRok \tKolor \t Cena" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < a; i++)
    {
        cout << samochod[i].marka << "\t" << samochod[i].model << "\t" << samochod[i].rok << "\t" << samochod[i].kolor << "\t"<< samochod[i].cena<< endl;
    }
    cout <<"Aut tej samej marki:" << fun_sam(samochod,a) << endl;
    cout << "Najmlodsze auto:" << fun_rok(samochod,a) << endl;
}