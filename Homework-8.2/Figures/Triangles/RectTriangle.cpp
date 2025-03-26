
#include <iostream>
#include "RectTriangle.h"
#include <string>

using namespace std;

void RectTriangle::getSidesCount() {

    cout << "Прямоугольный треугольник: " << endl << getSides() << endl;
}

RectTriangle::RectTriangle(int a, int b, int c, int A, int B): Triangle(a,b,c,A,B,90) {

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
        this->c = c;
        this->A = A;
        this->B = B;
    };
};