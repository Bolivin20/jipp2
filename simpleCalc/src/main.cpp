#include <iostream>
#include "../include/calc.h"

using namespace std;

int main(int argc, char *argv[]) {
    if(argc==1){
        cout << "error"<< endl;
        help();
        return -1;
    }

    if(strcmp(argv[1], "add") == 0) {
        if(argc==4)
            add(atoi(argv[2]),atoi(argv[3]));
        else
        {
            cout << "error" << endl;
            help();
        }
    }
    else if(strcmp(argv[1], "subtract") == 0){
        if(argc==4)
            subtruct(atoi(argv[2]),atoi(argv[3]));
        else
        {
            cout << "error" << endl;
            help();
        }
    }
    else if(strcmp(argv[1], "volume") == 0){
        if(argc==5)
            volume(atoi(argv[2]),atoi(argv[3]),atoi(argv[4]));
        else
        {
            cout << "error" << endl;
            help();
        }
    }
    else if(strcmp(argv[1], "help") == 0){
        help();
    }
    else{
        cout << "error"<< endl;
        help();
        return -1;
    }
    return 0;
}