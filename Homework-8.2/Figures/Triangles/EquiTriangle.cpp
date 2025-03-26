
#include <iostream>
#include "EquiTriangle.h"
#include <string>

using namespace std;

void EquiTriangle::getSidesCount() {

    cout << "Равносторонний треугольник: " << endl << getSides() << endl;
}

EquiTriangle::EquiTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {

    numSides = 3;

    if (a == 0 || b == 0 || c == 0) {
        cout << "Ошибка, стороны треугольника не могут быть равны нулю." << endl;
    }
    else if (A == 0 || B == 0) {
        cout << "Ошибка, углы треугольника не могут быть равны нулю." << endl;
    }
    else if ((a + b) < c || (b + c) < a || (c + a) < b) {
        cout << "Ошибка, недопустимые значения сторон треугольника." << endl;
    }
    else if ((A + B) > 90) {
        cout << "Ошибка, сумма значений углов не могут быть больше 180." << endl;
    }
    else {
        this->a = a;
    };
};