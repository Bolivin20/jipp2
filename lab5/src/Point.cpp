//
// Created by user on 09.11.2021.
//
#include "../include/Point.h"
/*
Point::Point(double x, double y, string name) : name(name) {
    *this->x = x;
    *this->y = y;
}

Point::Point(string name) : name(name) {
    *x = *y = 0;
}

double Point::getX() {
    return *x;
}

void Point::setX(double x) {
    *this->x = x;
}

double Point::getY() {
    return *y;
}

void Point::setY(double y) {
    *this->y = y;
}

void Point::printData() const {
    cout << "Point " << name << " (x = " << *x << ", y = " << *y << ")\n";
}

void Point::setName(string name) {
    this->name = name;
}

bool Point::operator==(const Point &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           name == rhs.name;
}

bool Point::operator!=(const Point &rhs) const {
    return !(rhs == *this);
}

const string &Point::getName() const {
    return name;
}

Point::~Point(){
    delete x;
    delete y;
}
Point::Point(Point &point){
    name = point.name;
    *x = *point.x;
    *y = *point.y;
}
*/
Pojazd::Pojazd(int rejestracja, string marka,int miejsca) : marka(marka) {
    this->rejestracja = rejestracja;
    this->miejsca = miejsca;
}
void Pojazd::czytaj(string tab)
{
    for(int i=0;i<miejsca;i++){
        cout << tab[i]<< endl;
    }
}
void Pojazd::osoby(int pasazer,int miejsca)
{
    cout << "Podaj pasazerow: "<<endl;
    string * tab= new string [miejsca];
    for(int i=0;i<miejsca;i++)
    {
        tab[i]="puste";
    }
    for(int i=0;i<pasazer;i++){
        cin >> tab[i];
    }
    cout << "Pasazerowie"<<endl;
    for(int i=0;i<miejsca;i++)
    {
        cout << tab[i]<<endl;
    }
}