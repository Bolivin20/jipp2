//
// Created by user on 21.01.2022.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


using namespace std;

template <class T>
void bubbleSort(T a[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

