
#include <iostream>
#include "RectTriangle.h"
#include <string>
#include "../FigureException.h"

using namespace std;

void ObjRectTriangle::getSidesCount() {

    cout << "Прямоугольный треугольник: " << endl << getSides() << endl;
}

ObjRectTriangle::ObjRectTriangle(int a, int b, int c, int A, int B, int C): ObjTriangle(a, b, c, A, B, C) {

    numSides = 3;

    if (a == 0 || b == 0 || c == 0) {
        throw figureException("Ошибка, стороны треугольника не могут быть равны нулю.");
    }
    else if (A == 0 || B == 0 || C == 0) {
        throw figureException("Ошибка, углы треугольника не могут быть равны нулю.");
    }
    else if ((a + b) < c || (b + c) < a || (c + a) < b) {
        throw figureException("Ошибка, недопустимые значения сторон треугольника.");
    }
    else if (C != 90) {
        throw figureException("Ошибка, сумма значений углов не могут быть больше 180.");
    }
    else if ((A + B) > 90) {
        throw figureException("Ошибка, сумма значений углов не могут быть больше 180.");
    }
    else {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    };
};