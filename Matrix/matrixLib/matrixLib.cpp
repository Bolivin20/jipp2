
#include <iostream>
#include "../matrixLib/matrixLib.h"

using namespace std;

void help()
{
    cout << "Program wykonuje obliczenia na macierzach.\n"
            "Podaj liczbe wybranego typu dzialania: \n"
            "1 - dodawanie macierzy\n"
            "2 - odejmowanie macierzy\n"
            "3 - mnozenie macierzy\n"
            "4 - mnozenie przez skalar\n"
            "5 - transponowanie macierzy\n"
            "6 - potegowanie macierzy\n"
            "7 - wyznacznik macierzy\n"
            "8 - sprawdzanie czy macierz jest diagonalna\n"
            "9 - zmiana dwoch wartosci miejscami\n"
            "10 - sortowanie tablicy\n"
            "11 - sortowanie wierszy macierzy rosnaco"<< endl;
}

int** addMatrix(int **tabA,int **tabB,int w,int k)
{
    int **tabC;
    tabC = new int *[ w ];
    for( int i = 0; i < w; i++ ) {
        tabC[ i ] = new int[ k ];
        for( int t = 0; t < k; t++ ) {
            tabC[i][t] = tabA[i][t] + tabB[i][t];
        }
    }

    for( int i = 0; i < w; i++ )
        delete[] tabA[ i ];
    delete[] tabA;

    for( int i = 0; i < w; i++ )
        delete[] tabB[ i ];
    delete[] tabB;
    return tabC;
}

double** addMatrix(double **tabA,double **tabB,int w,int k)
{
    double **tabC;
    tabC = new double *[ w ];
    for( int i = 0; i < w; i++ ) {
        tabC[ i ] = new double[ k ];
        for( int t = 0; t < k; t++ ) {
            tabC[i][t] = tabA[i][t] + tabB[i][t];
        }
    }

    for( int i = 0; i < w; i++ )
        delete[] tabA[ i ];
    delete[] tabA;

    for( int i = 0; i < w; i++ )
        delete[] tabB[ i ];
    delete[] tabB;
    return tabC;
}
int ** subtractMatrix(int **tabA,int **tabB,int w,int k)
{
    int **tabC;
    tabC = new int *[ w ];
    for( int i = 0; i < w; i++ ) {
        tabC[ i ] = new int[ k ];
        for( int t = 0; t < k; t++ ) {
            tabC[i][t] = tabA[i][t] - tabB[i][t];
        }
    }

    for( int i = 0; i < w; i++ )
        delete[] tabA[ i ];
    delete[] tabA;

    for( int i = 0; i < w; i++ )
        delete[] tabB[ i ];
    delete[] tabB;

    return tabC;
}
double ** subtractMatrix(double **tabA,double **tabB,int w,int k)
{
    double **tabC;
    tabC = new double *[ w ];
    for( int i = 0; i < w; i++ ) {
        tabC[ i ] = new double[ k ];
        for( int t = 0; t < k; t++ ) {
            tabC[i][t] = tabA[i][t] - tabB[i][t];
        }
    }

    for( int i = 0; i < w; i++ )
        delete[] tabA[ i ];
    delete[] tabA;

    for( int i = 0; i < w; i++ )
        delete[] tabB[ i ];
    delete[] tabB;

    return tabC;
}
double** multiplyMatrix(double **tabA,double **tabB,int w,int k1,int k2) {
    double **tabC;
    tabC = new double *[w];
    for (int i = 0; i < w; i++) {
        tabC[i] = new double[k2];
    }
    for (int i = 0; i < w; i++) {
        for (int j = 0; j < k2; j++) {
            double s = 0;
            for (int p = 0; p < k1; p++)
                s = s + (tabA[i][p] * tabB[p][j]);
            tabC[i][j] = s;
        }
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    return tabC;
}
int** multiplyMatrix(int **tabA,int **tabB,int w,int k1,int k2) {
    int **tabC;
    tabC = new int *[w];
    for (int i = 0; i < w; i++) {
        tabC[i] = new int[k2];
    }
    for( int i=0; i<w; i++)
    {
        for(int j=0; j<k2; j++)
        {
            int s = 0;
            for(int p=0; p<k1; p++)
                s = s + (tabA[i][p] * tabB[p][j]);
            tabC[i][j] = s;
        }
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    return tabC;
}
int** multiplyByScalar(int **tabA, int w, int k, int skalar) {
    int **tabC;
    tabC = new int *[w];
    for (int i = 0; i < w; i++) {
        tabC[i] = new int[k];
        for (int t = 0; t < k; t++) {
            tabC[i][t] = tabA[i][t] * skalar;
        }
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    return tabC;
}
    double** multiplyByScalar(double **tabA, int w, int k, double skalar) {
        double **tabC;
        tabC = new double *[w];
        for (int i = 0; i < w; i++) {
            tabC[i] = new double[k];
            for (int t = 0; t < k; t++) {
                tabC[i][t] = tabA[i][t] * skalar;
            }
        }
        for (int i = 0; i < w; i++)
            delete[] tabA[i];
        delete[] tabA;
        return tabC;
    }
int** transpozeMatrix(int **tabA,int w,int k)
{   int **tabC;
    tabC = new int *[k];
    for (int i = 0; i < k; i++) {
        tabC[i] = new int[w];
    }
    for(int i = 0; i<w; i++){
        for(int j = 0; j<k; j++){
            tabC[j][i] = tabA[i][j];
        }
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    return tabC;
}
double** transpozeMatrix(double **tabA,int w,int k)
{   double **tabC;
    tabC = new double *[k];
    for (int i = 0; i < k; i++) {
        tabC[i] = new double[w];
    }
    for(int i = 0; i<w; i++){
        for(int j = 0; j<k; j++){
            tabC[j][i] = tabA[i][j];
        }
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    return tabC;
}
int** powerMatrix(int **tabA,int w,int k,unsigned t){
    int s;
    int **tabC;
    tabC = new int *[w];
    for (int i = 0; i < w; i++) {
        tabC[i] = new int[k];
    }
    int **tabB;
    tabB = new int *[w];
    for (int i = 0; i < w; i++) {
        tabB[i] = new int[k];
    }
    if (t == 0) {
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < k; j++) {
                tabC[i][j] = 0;
                tabC[i][i] = 1;
            }
        }
    }
    else if(t==1)
    {
        tabC=tabA;
    }
    else {
        for (int d = 1; d < t; d++) {
            if(d==1) {
                for (int i = 0; i < w; i++) {
                    for (int j = 0; j < k; j++) {
                        s = 0;
                        for (int p = 0; p < k; p++)
                            s = s + (tabA[i][p] * tabA[p][j]);
                        tabC[i][j] = s;
                    }
                }
            }
            else
            {   for (int i = 0; i<w; i++){
                    for(int j = 0; j<w; j++){
                        tabB[i][j]=tabC[i][j];
                    }
                }
                for (int i = 0; i < w; i++) {
                    for (int j = 0; j < k; j++) {
                        s = 0;
                        for (int p = 0; p < k; p++)
                            s = s + (tabB[i][p] * tabA[p][j]);
                        tabC[i][j] = s;
                    }
                }
            }
        }
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    for (int i = 0; i < w; i++)
        delete[] tabB[i];
    delete[] tabB;
    return tabC;
}
double** powerMatrix(double **tabA,int w,int k,unsigned t) {
    double s;
    double **tabC;
    tabC = new double *[w];
    for (int i = 0; i < w; i++) {
        tabC[i] = new double[k];
    }
    double **tabB;
    tabB = new double *[w];
    for (int i = 0; i < w; i++) {
        tabB[i] = new double[k];
    }
    if (t == 0) {
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < k; j++) {
                tabC[i][j] = 0;
                tabC[i][i] = 1;
            }
        }
    }
    else if(t==1)
    {
        tabC=tabA;
    }
    else {
    for (int d = 1; d < t; d++) {
        if(d==1) {
            for (int i = 0; i < w; i++) {
                for (int j = 0; j < k; j++) {
                     s = 0;
                    for (int p = 0; p < k; p++)
                        s = s + (tabA[i][p] * tabA[p][j]);
                    tabC[i][j] = s;
                }
            }
        }
        else
        {   for (int i = 0; i<w; i++){
                for(int j = 0; j<w; j++){
                    tabB[i][j]=tabC[i][j];
                }
            }
            for (int i = 0; i < w; i++) {
                for (int j = 0; j < k; j++) {
                     s = 0;
                    for (int p = 0; p < k; p++)
                        s = s + (tabB[i][p] * tabA[p][j]);
                    tabC[i][j] = s;
                }
            }
        }
        }
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    for (int i = 0; i < w; i++)
        delete[] tabB[i];
    delete[] tabB;
    return tabC;
}
int determinantMatrix(int **tabA,int w,int k) {
    int det = 1;
    for(int r=0; r<w-1;r++) {
        int div = tabA[r][r];
        if (div == 0) {
            for (int i = r + 1; i < w; i++) {
                if (tabA[i][i] == 0) continue;
                for (int j = 0; j < w; j++) {
                    tabA[r][j] = tabA[r][j] + tabA[i][j];
                }
            }
        }
        det *= div;
        for (int i = r; i < w; i++) {
            tabA[r][i] = tabA[r][i] / div;
        }
        for (int i = r + 1; i < w; i++) {
            int x = tabA[i][r];
            for (int j = 0; j < w; j++) {
                tabA[i][j] = tabA[i][j] - tabA[r][j] * x;
            }
        }
    }
    for(int i=0; i<w; i++){
        det*=tabA[i][i];
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    return det;
}
double determinantMatrix(double **tabA,int w,int k) {
    double det = 1;
    for(int r=0; r<w-1;r++) {
        double div = tabA[r][r];
        if (div == 0) {
            for (int i = r + 1; i < w; i++) {
                if (tabA[i][i] == 0) continue;
                for (int j = 0; j < w; j++) {
                    tabA[r][j] = tabA[r][j] + tabA[i][j];
                }
            }
        }
        det *= div;
        for (int i = r; i < w; i++) {
            tabA[r][i] = tabA[r][i] / div;
        }
        for (int i = r + 1; i < w; i++) {
            double x = tabA[i][r];
            for (int j = 0; j < w; j++) {
                tabA[i][j] = tabA[i][j] - tabA[r][j] * x;
            }
        }
    }
    for(int i=0; i<w; i++){
        det*=tabA[i][i];
    }
    for (int i = 0; i < w; i++)
        delete[] tabA[i];
    delete[] tabA;
    return det;
}
bool matrixIsDiagonal(int **tabA,int w,int k)
{
    for (int i = 0; i < w; i++)
        for (int j = 0; j < k; j++)
            if ((i != j) && (tabA[i][j] != 0))
                return false;
    return true;
}
 bool matrixIsDiagonal(double **tabA,int w,int k)
 {
     for (int i = 0; i < w; i++)
         for (int j = 0; j < k; j++)
             if ((i != j) && (tabA[i][j] != 0))
                 return false;
     return true;
 }
void swap(double &a, double &b) {
    double p;
    p = a;
    a = b;
    b = p;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
void swap(int &a, int &b) {
    int p;
    p = a;
    a = b;
    b = p;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int* sortRow(int *tab,int i)
{
    for(int p=0;p<i;p++) {
        for (int t = 1; t < i - p; t++) {
            if (tab[t - 1] > tab[t])
                swap(tab[t - 1], tab[t]);
        }
    }
    return tab;
}
double* sortRow(double *tab,int i)
{
    for(int p=0;p<i;p++) {
        for (int t = 1; t < i - p; t++) {
            if (tab[t - 1] > tab[t])
                swap(tab[t - 1], tab[t]);
        }
    }
      return tab;
}
int** sortRowsInMatrix(int **tabA,int w,int k)
{
    int **tabC;
    tabC = new int *[w];
    for(int p=0;p<w;p++) {
        tabC[p] = sortRow(tabA[p],k);
    }
    return tabC;
}
double** sortRowsInMatrix(double **tabA,int w,int k)
{
    double **tabC;
    tabC = new double *[w];
    for(int p=0;p<w;p++) {
            tabC[p] = sortRow(tabA[p],k);
        }
    return tabC;
}