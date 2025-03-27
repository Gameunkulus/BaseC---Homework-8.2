#include <iostream>
#include "Square.h"
#include <string>
#include "..\FigureException.h"

using namespace std;

void ObjSquare::getSidesCount() {

    cout << "�������: " << endl << getSides() << endl;
}

ObjSquare::ObjSquare(int a, int b, int c, int d, int A, int B, int C, int D): ObjFourangle(a, b, c, d, A, B, C, D){

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        throw figureException("������, ������� �������� �� ����� ���� ����� ����.");
    }
    else if (a != b || b != c || c != d || d != a) {
        throw figureException("������, ������� �������� �� ����� ���� �� �����.");

    }
    else if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw figureException("������, ���� �������� �� ����� ���� �� ����� 90 ��������.");
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