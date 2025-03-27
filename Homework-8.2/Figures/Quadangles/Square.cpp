#include <iostream>
#include "Square.h"
#include <string>
#include "..\FigureException.h"

using namespace std;

void ObjSquare::getSidesCount() {

    cout << " вадрат: " << endl << getSides() << endl;
}

ObjSquare::ObjSquare(int a, int b, int c, int d, int A, int B, int C, int D): ObjFourangle(a, b, c, d, A, B, C, D){

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        throw figureException("ќшибка, стороны квадрата не могут быть равны нулю.");
    }
    else if (a != b || b != c || c != d || d != a) {
        throw figureException("ќшибка, стороны квадрата не могут быть не равны.");

    }
    else if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw figureException("ќшибка, углы квадрата не могут быть не равны 90 градусам.");
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