
#include <iostream>;
#include "Rectangle.h";
#include <string>;
#include "../FigureException.h"

using namespace std;

void ObjRectangle::getSidesCount() {

    cout << "Прямоугольник: " << endl << getSides() << endl;
};

ObjRectangle::ObjRectangle(int a, int b, int c, int d, int A, int B, int C, int D) : ObjFourangle(a, b, c, d, A, B, C, D) {

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        throw figureException("Ошибка, стороны прямоугольника не могут быть равны нулю.");
    }
    else if (a != c || b != d) {
        throw figureException("Ошибка, стороны прямоугольника не могут быть не равны друг другу.");
    }
    else if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw figureException("Ошибка, углы прямоугольника не могут быть не равны 90 градусам.");
    }
    else {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    };
};