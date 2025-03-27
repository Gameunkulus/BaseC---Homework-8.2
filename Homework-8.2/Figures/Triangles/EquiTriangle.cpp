
#include <iostream>;
#include "EquiTriangle.h"
#include <string>;
#include "../FigureException.h"

using namespace std;

void ObjEquiTriangle::getSidesCount() {

    cout << "Равносторонний треугольник: " << endl << getSides() << endl;
}

ObjEquiTriangle::ObjEquiTriangle(int a, int b, int c, int A, int B, int C) : ObjTriangle(a, b, c, A, B, C) {

    numSides = 3;

    if (a == 0 || b == 0 || c == 0) {
        throw figureException ("Ошибка, стороны треугольника не могут быть равны нулю.");
    }
    else if (A == 0 || B == 0 || C == 0) {
        throw figureException("Ошибка, углы треугольника не могут быть равны нулю.");
    }
    else if (a != b || b != c || c != a) {
        throw figureException("Ошибка, стороны треугольника не могут быть не равны");
    }
    else if ((A + B + C) > 180) {
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