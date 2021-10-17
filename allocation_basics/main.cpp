//
// Created by user on 12.10.2021.
//

#include <iostream>

using namespace std;

int main()
{

    for (int i=0; i<5;i++)
    {
        cout << "JIPP" << endl;
    }

    int x, y, ** tab;
    cout << "Podaj ilosc wierszy:";
    cin >> y;
    tab = new int *[ y ];
    cout << "Podaj ilosc kolumn:";
    cin >> x;
    for( int i = 0; i < y; i++ ) {
        tab[ i ] = new int[ x ];
        for( int t = 0; t < x; t++ ) {
            tab[ i ][ t ] = 1;
            cout << tab[ i ][ t ] << " ";
        }
        cout << endl;
    }
    for( int i = 0; i < y; i++ )
        delete[] tab[ i ];
        delete[] tab;
}