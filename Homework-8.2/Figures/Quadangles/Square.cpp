#include <iostream>
#include "Square.h"
#include <string>

using namespace std;

void Square::getSidesCount() {

    cout << " вадрат: " << endl << getSides() << endl;
}

Square::Square(int a): Fourangle(a,a,a,a,90,90,90,90){

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        cout << "ќшибка, стороны четырехугольника не могут быть равны нулю." << endl;
        return;
    }
    else {
        this->a = a;
    };
};