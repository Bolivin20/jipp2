//
// Created by user on 24.10.2021.
//

#ifndef PROJECTNAME_MATRIXLIB_H
#define PROJECTNAME_MATRIXLIB_H

void help();
/**
 *funkcja addMatrix
 * @param tabA ;macierz a
 * @param tabB ;macierz b
 * @param w ;ilość wierszy
 * @param k ;ilość kolumn
 */
int** addMatrix(int **tabA,int **tabB,int w,int k);
double** addMatrix(double **tabA,double **tabB,int w,int k);
/**
 *funkcja subtractMatrix
 * @param tabA ;macierz A
 * @param tabB ;macierz B
 * @param w ;ilość wierszy
 * @param k ;ilość kolumn
 */
int** subtractMatrix(int **tabA,int **tabB,int w,int k);
double** subtractMatrix(double **tabA,double **tabB,int w,int k);
/**
 *funkcja multiplyMatrix
 * @param tabA ;macierz A
 * @param tabB ;macierz B
 * @param w ;ilość wierszy obu macierzy
 * @param k1 ;ilość kolumn macierzy A
 * @param k2 ;ilość kolumn macierzy B
 */
int** multiplyMatrix(int **tabA,int **tabB,int w,int k1,int k2);
double** multiplyMatrix(double **tabA,double **tabB,int w,int k1,int k2);
/**
 *funkcja multiplyByScalar
 * @param tabA ;macierz A
 * @param w ;ilość wierszy
 * @param k ;ilość kolumn
 * @param skalar ;podany skalar
 */
int** multiplyByScalar(int **tabA, int w, int k, int skalar);
double** multiplyByScalar(double **tabA,int w,int k,double skalar);
/**
 * funkcja transpozeMatrix
 * @param tabA ;macierz A
 * @param w ;ilość wierszy
 * @param k ;ilość kolumn
 */
int** transpozeMatrix(int **tabA,int w,int k);
double** transpozeMatrix(double **tabA,int w,int k);
/**
 * funkcja powerMatrix
 * @param tabA ;macierz A
 * @param w ;ilość wierszy
 * @param k ;ilość kolumn
 * @param t ;stopień potęgi
 */
int** powerMatrix(int **tabA,int w,int k,unsigned t);
double** powerMatrix(double **tabA,int w,int k,unsigned t);
/**
 * funckja determinantMatrix
 * @param tabA ;macierz A
 * @param w ;ilość wierszy
 * @param k ;ilość kolumn
 * @return ;wartość wyznacznika
 */
int determinantMatrix(int **tabA,int w,int k);
double determinantMatrix(double **tabA,int w,int k);
/**
 * funkcja matrisIsDiagonal
 * @param tabA ;macierz A
 * @param w ;ilość wierszy
 * @param k ;ilość kolumn
 * @return ;zwraca false or true
 */
bool matrixIsDiagonal(int **tabA,int w,int k);
bool matrixIsDiagonal(double **tabA,int w,int k);
/**
 * funkcja swap
 * @param a ;liczba a
 * @param b ;liczba b
 */
void swap(double &a, double &b);
void swap(int &a, int &b);
/**
 * funkcja rowSort
 * @param tab ;podana tablica
 * @param i ;ilość kolumn
 */
int* sortRow(int tab[],int i);
double* sortRow(double tab[],int i);
/**
 * funkcja sortRowInMatrix
 * @param tabA ;macierz A
 * @param w ;ilość wierszy
 * @param k ;ilość kolumn
 */
int** sortRowsInMatrix(int **tabA,int w,int k);
double** sortRowsInMatrix(double **tabA,int w,int k);
#endif //PROJECTNAME_MATRIXLIB_H
