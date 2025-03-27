
#include <iostream>;
#include "Rhombus.h";
#include <string>;
#include "..\FigureException.h"

using namespace std;


void ObjRhombus::getSidesCount() {

    cout << "Ромб: " << endl << getSides() << endl;
}

ObjRhombus::ObjRhombus(int a, int b, int c, int d, int A, int B, int C, int D) : ObjFourangle(a, b, c, d, A, B, C, D) {

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        throw figureException("Ошибка, стороны ромба не могут быть равны нулю.");
    } 
    else if (a != b || b != c || c != d || d != a) {
        throw figureException("Ошибка, стороны ромба не могут быть не равны. ");
    }
    else if (A != C || B != D) {
        throw figureException("Ошибка, углы ромба не могут быть не равны. ");
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