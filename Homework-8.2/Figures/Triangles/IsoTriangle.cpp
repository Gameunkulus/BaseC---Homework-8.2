
#include <iostream>
#include "IsoTriangle.h"
#include <string>

using namespace std;

void IsoTriangle::getSidesCount() {

    cout << "Равнобедренный треугольник: " << endl << getSides() << endl;
}

IsoTriangle::IsoTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {

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
        this->b = b;
        this->A = A;
        this->B = B;
    };
};