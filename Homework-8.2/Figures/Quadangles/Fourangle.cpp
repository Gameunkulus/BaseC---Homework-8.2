
#include <iostream>
#include "Fourangle.h"
#include <string>
#include "../FigureException.h"

using namespace std;

string ObjFourangle::getSides() {

    string text = "Стороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + " d = " + to_string(d) + "\n" +
        "Углы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C) + " D = " + to_string(D);
    return text;
};

void ObjFourangle::getSidesCount() {

    cout << "Четырехугольник: " << endl << getSides() << endl;
}

ObjFourangle::ObjFourangle(int a, int b, int c, int d, int A, int B, int C, int D) {

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        throw figureException("Ошибка, стороны четырехугольника не могут быть равны нулю.");
    }
    else if (A == 0 || B == 0 || C == 0 || D == 0) {
        throw figureException("Ошибка, углы четырехугольника не могут быть равны нулю.");
    }
    else if ((A + B + C + D) > 360) {
        throw figureException("Ошибка, сумма значений углов не могут быть больше 360.");
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
