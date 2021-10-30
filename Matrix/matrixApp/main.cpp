#include <iostream>
#include "../matrixLib/matrixLib.h"

using namespace std;

int main()
{
    help();
    int liczba;
    cout << "Podaj liczbe: "<< endl;
    cin >> liczba;
    if(liczba == 1)
    {
        cout << "Podaj liczbe wierszy:"<< endl;
        int w,k;
        cin >> w;
        cout << "Podaj liczbe kolumn:" << endl;
        cin >> k;
        cout << "Wprowadz macierz A wierszami:"<< endl;
        double **tabA;
        tabA = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabA[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabA[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {

            for( int t = 0; t < k; t++ ) {

                cout << tabA[ i ][ t ] << " ";
            }
            cout << endl;
        }
        cout << "Wprowadz macierz B wierszami:"<< endl;
        double **tabB;
        tabB = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabB[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabB[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {
            for( int t = 0; t < k; t++ ) {
                cout << tabB[ i ][ t ] << " ";
            }
            cout << endl;
        }
        double** tabC = addMatrix(tabA,tabB,w,k);

        cout << "Dodana macierz: "<< endl;
        for( int i = 0; i < w; i++ ) {
            for( int t = 0; t < k; t++ ) {
                cout << tabC[ i ][ t ] << " ";
            }
            cout << endl;
        }

        for( int i = 0; i < w; i++ )
            delete[] tabC[ i ];
        delete[] tabC;
    }
    else if(liczba == 2)
    {
        cout << "Podaj liczbe wierszy:"<< endl;
        int w,k;
        cin >> w;
        cout << "Podaj liczbe kolumn:" << endl;
        cin >> k;
        cout << "Wprowadz macierz A wierszami:"<< endl;
        double **tabA;
        tabA = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabA[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabA[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {

            for( int t = 0; t < k; t++ ) {

                cout << tabA[ i ][ t ] << " ";
            }
            cout << endl;
        }
        cout << "Wprowadz macierz B wierszami:"<< endl;
        double **tabB;
        tabB = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabB[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabB[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {

            for( int t = 0; t < k; t++ ) {

                cout << tabB[ i ][ t ] << " ";
            }
            cout << endl;
        }
        double** tabC = subtractMatrix(tabA,tabB,w,k);
        cout << "Odjeta macierz: "<< endl;
        for( int i = 0; i < w; i++ ) {
            for( int t = 0; t < k; t++ ) {
                cout << tabC[ i ][ t ] << " ";
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ )
            delete[] tabC[ i ];
        delete[] tabC;
    }
    else if(liczba == 3)
    {
        cout << "Podaj liczbe wierszy macierzy A:"<< endl;
        int w,k1,k2;
        cin >> w;
        cout << "Podaj liczbe kolumn macierzy A:" << endl;
        cin >> k1;
        cout << "Podaj liczbe kolumn macierzy B:" << endl;
        cin >> k2;
        cout << "Wprowadz macierz A wierszami:"<< endl;
        double **tabA;
        tabA = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabA[ i ] = new double[ k1 ];
            for( int t = 0; t < k1; t++ ) {
                cin >> tabA[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {
            for( int t = 0; t < k1; t++ ) {
                cout << tabA[ i ][ t ] << " ";
            }
            cout << endl;
        }
        cout << "Wprowadz macierz B wierszami:"<< endl;
        double **tabB;
        tabB = new double *[ k1 ];
        for( int i = 0; i < k1; i++ ) {
            tabB[ i ] = new double[ k2 ];
            for( int t = 0; t < k2; t++ ) {
                cin >> tabB[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < k1; i++ ) {
            for( int t = 0; t < k2; t++ ) {
                cout << tabB[ i ][ t ] << " ";
            }
            cout << endl;
        }
        double** tabC = multiplyMatrix(tabA,tabB,w,k1,k2);
        cout<<"Wynik mnozenia:" << endl;
        for(int i=0; i<w; i++)
        {
            for(int j=0; j<k2; j++)
                cout<<tabC[i][j]<<" ";
            cout<<endl;
        }
        for (int i = 0; i < w; i++)
            delete[] tabC[i];
        delete[] tabC;
    }
    else if(liczba ==4)
    {
        cout << "Podaj liczbe wierszy:"<< endl;
        int w,k;
        cin >> w;
        cout << "Podaj liczbe kolumn:" << endl;
        cin >> k;
        cout << "Wprowadz macierz A wierszami:"<< endl;
        double **tabA;
        tabA = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabA[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabA[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {
            for( int t = 0; t < k; t++ ) {
                cout << tabA[ i ][ t ] << " ";
            }
            cout << endl;
        }
        cout << "Podaj skalar" << endl;
        double skalar;
        cin >> skalar;
        double** tabC = multiplyByScalar(tabA,w,k,skalar);
        cout << "Pomnozona przez skalar macierz: " << endl;
        for (int i = 0; i < w; i++) {
            for (int t = 0; t < k; t++) {
                cout << tabC[i][t] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < w; i++)
            delete[] tabC[i];
        delete[] tabC;
    }
    else if(liczba == 5)
    {
        cout << "Podaj liczbe wierszy:"<< endl;
        int w,k;
        cin >> w;
        cout << "Podaj liczbe kolumn:" << endl;
        cin >> k;
        cout << "Wprowadz macierz A wierszami:"<< endl;
        double **tabA;
        tabA = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabA[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabA[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {
            for( int t = 0; t < k; t++ ) {
                cout << tabA[ i ][ t ] << " ";
            }
            cout << endl;
        }
        double** tabC = transpozeMatrix(tabA,w,k);
        cout<<"Macierz transponowana: "<<endl;
        for(int i=0;i<k;i++) {
            for(int j=0;j<w;j++) {
                cout<<tabC[i][j]<<" ";
            }
            cout << endl;
        }
        for (int i = 0; i < w; i++)
            delete[] tabC[i];
        delete[] tabC;
    }
    else if(liczba == 6)
    {
        cout << "Podaj liczbe wierszy:"<< endl;
        int w,k;
        cin >> w;
        cout << "Podaj liczbe kolumn:" << endl;
        cin >> k;
        if(w==k) {
            cout << "Wprowadz macierz A wierszami:" << endl;
            double **tabA;
            tabA = new double *[w];
            for (int i = 0; i < w; i++) {
                tabA[i] = new double[k];
                for (int t = 0; t < k; t++) {
                    cin >> tabA[i][t];
                }
                cout << endl;
            }
            for (int i = 0; i < w; i++) {
                for (int t = 0; t < k; t++) {
                    cout << tabA[i][t] << " ";
                }
                cout << endl;
            }
            cout << "Podaj stopien potegi" << endl;
            unsigned t;
            cin >> t;
            double** tabC = powerMatrix(tabA, w, k, t);
            for (int i = 0; i < w; i++) {
                for (int t = 0; t < k; t++) {
                    cout << tabC[i][t] << " ";
                }
                cout << endl;
            }
            for (int i = 0; i < w; i++)
                delete[] tabC[i];
            delete[] tabC;
        }
        else {
            cout << "Podaj macierz kwadratowa!" << endl;
            help();
        }
    }
    else if(liczba == 7)
    {
        cout << "Podaj liczbe wierszy:"<< endl;
        int w,k;
        cin >> w;
        cout << "Podaj liczbe kolumn:" << endl;
        cin >> k;
        cout << "Wprowadz macierz A wierszami:"<< endl;
        double **tabA;
        tabA = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabA[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabA[ i ][ t ] ;
            }
            cout << endl;
        }
        if(w != k)
        {
            cout << "Macierz musi być kwadratowa!"<< endl;
            help();
        }
        else
            cout << determinantMatrix(tabA,w,k);
    }
    else if(liczba == 8)
    {
        cout << "Podaj liczbe wierszy:"<< endl;
        int w,k;
        cin >> w;
        cout << "Podaj liczbe kolumn:" << endl;
        cin >> k;
        cout << "Wprowadz macierz A wierszami:"<< endl;
        double **tabA;
        tabA = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabA[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabA[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {
            for( int t = 0; t < k; t++ ) {
                cout << tabA[ i ][ t ] << " ";
            }
            cout << endl;
        }
        cout << "Czy macierz jest diagonalna?" << endl;
        if (matrixIsDiagonal(tabA,w,k))
            cout << "Tak" << endl;
        else
            cout << "Nie" << endl;
        return 0;

    }
    else if(liczba == 9)
    {   int a,b;
        cout << "Podaj liczbe a:"<<endl;
        cin >> a;
        cout << "Podaj liczbe b:"<<endl;
        cin >> b;
        swap(a,b);
    }
    else if(liczba == 10)
    {
    cout << "Podaj liczbe elementow tablicy: "<< endl;
    int i;
    cin >> i;
    double *tab = new double[i];
    cout << "Podaj elementy tablicy" << endl;
    for(int t=0;t<i;t++)
    {
        cin >> tab[t];
    }
    cout << "Posortowana tablica" << endl;
        double* tabA = sortRow(tab,i);
        for(int p=0;p<i;p++)
        {
            cout << tabA[p] << " ";
        }
        delete [] tabA;
    }
    else if(liczba == 11)
    {
        cout << "Podaj liczbe wierszy:"<< endl;
        int w,k;
        cin >> w;
        cout << "Podaj liczbe kolumn:" << endl;
        cin >> k;
        cout << "Wprowadz macierz A wierszami:"<< endl;
        double **tabA;
        tabA = new double *[ w ];
        for( int i = 0; i < w; i++ ) {
            tabA[ i ] = new double[ k ];
            for( int t = 0; t < k; t++ ) {
                cin >> tabA[ i ][ t ] ;
            }
            cout << endl;
        }
        for( int i = 0; i < w; i++ ) {
            for( int t = 0; t < k; t++ ) {
                cout << tabA[ i ][ t ] << " ";
            }
            cout << endl;
        }
        double** tabC = sortRowsInMatrix(tabA,w,k);
        cout << "Posortowana macierz" << endl;
        for(int p=0;p<w;p++) {
            for(int t=0;t<k;t++)
            {
                cout << tabC[p][t] << " ";
            }
            cout << endl;
        }
    }
    else
        help();
}
