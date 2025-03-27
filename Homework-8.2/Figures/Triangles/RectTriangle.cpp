
#include <iostream>
#include "RectTriangle.h"
#include <string>
#include "../FigureException.h"

using namespace std;

void ObjRectTriangle::getSidesCount() {

    cout << "������������� �����������: " << endl << getSides() << endl;
}

ObjRectTriangle::ObjRectTriangle(int a, int b, int c, int A, int B, int C): ObjTriangle(a, b, c, A, B, C) {

    numSides = 3;

    if (a == 0 || b == 0 || c == 0) {
        throw figureException("������, ������� ������������ �� ����� ���� ����� ����.");
    }
    else if (A == 0 || B == 0 || C == 0) {
        throw figureException("������, ���� ������������ �� ����� ���� ����� ����.");
    }
    else if ((a + b) < c || (b + c) < a || (c + a) < b) {
        throw figureException("������, ������������ �������� ������ ������������.");
    }
    else if (C != 90) {
        throw figureException("������, ����� �������� ����� �� ����� ���� ������ 180.");
    }
    else if ((A + B) > 90) {
        throw figureException("������, ����� �������� ����� �� ����� ���� ������ 180.");
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