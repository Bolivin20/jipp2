//
// Created by user on 26.10.2021.
//

#include <iostream>

using namespace std;

using namespace std;

struct bnowy{
    string marka;
    string model;
    int rok;
    string kolor;
};

int main() {
    bnowy samochod[] = {{"opel","astra",1999,"szary"},
                        {"opel","corsa",2003,"bialy"},
                        {"opel","meriva",2001,"szary"},
                        {"opel","forsa",2010,"czrany"}
                        };
    cout << "Marka\tModel \tRok \tKolor" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << samochod[i].marka << "\t" << samochod[i].model << "\t" << samochod[i].rok << "\t" << samochod[i].kolor << endl;
    }

}