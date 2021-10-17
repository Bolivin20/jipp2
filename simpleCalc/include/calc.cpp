#include "iostream"
#include "calc.h"

using namespace std;

void add(int a,int b)
{
    cout << a+b << endl;
}
void subtruct(int a,int b)
{
    cout << a-b << endl;
}
void volume(int a,int b,int c)
{
    cout << a*b*c << endl;
}
void help()
{
    cout << "Simple calculatur\n"
            "simpleCalc [nazwa działania]\n"
            "\n"
            "Działania:\n"
            "add [a] [b]\n"
            "    Dodawanie dwóch liczb ([a] i [b]) całkowitych. \n"
            "subtract [a] [b]\n"
            "Odejmowanie dwóch liczb ([a] i [b]) całkowitych\n"
            "volume [a] [b] [c]\n"
            "Oblicza objętość graniastosłupa."<<endl;

}
