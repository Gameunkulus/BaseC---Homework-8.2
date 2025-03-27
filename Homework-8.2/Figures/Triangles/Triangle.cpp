
#include <iostream>
#include "Triangle.h"
#include "../FigureException.h"
#include <string>

using namespace std;

string ObjTriangle::getSides() {
    
    string text = "Стороны: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + "\n" +
        "Углы : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C);
    return text;
};

void ObjTriangle::getSidesCount() {
    
    cout << "Треугольник: " << endl << getSides() << endl;
}

ObjTriangle::ObjTriangle(int a, int b, int c, int A, int B, int C) {

    numSides = 3;
    if (a == 0 || b == 0 || c == 0) {
        throw figureException("Ошибка, стороны треугольника не могут быть равны нулю.");
    }
    else if (A == 0 || B == 0 || C == 0) {
        throw figureException("Ошибка, углы треугольника не могут быть равны нулю.");
    }
    else if ((a + b) < c || (b + c) < a || (c + a) < b){
        throw figureException("Ошибка, недопустимые значения сторон треугольника.");
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
