
#include <iostream>;
#include "Rhombus.h";
#include <string>;
#include "..\FigureException.h"

using namespace std;


void ObjRhombus::getSidesCount() {

    cout << "����: " << endl << getSides() << endl;
}

ObjRhombus::ObjRhombus(int a, int b, int c, int d, int A, int B, int C, int D) : ObjFourangle(a, b, c, d, A, B, C, D) {

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        throw figureException("������, ������� ����� �� ����� ���� ����� ����.");
    } 
    else if (a != b || b != c || c != d || d != a) {
        throw figureException("������, ������� ����� �� ����� ���� �� �����. ");
    }
    else if (A != C || B != D) {
        throw figureException("������, ���� ����� �� ����� ���� �� �����. ");
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