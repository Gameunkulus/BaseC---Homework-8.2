
#include <iostream>;
#include "EquiTriangle.h"
#include <string>;
#include "../FigureException.h"

using namespace std;

void ObjEquiTriangle::getSidesCount() {

    cout << "�������������� �����������: " << endl << getSides() << endl;
}

ObjEquiTriangle::ObjEquiTriangle(int a, int b, int c, int A, int B, int C) : ObjTriangle(a, b, c, A, B, C) {

    numSides = 3;

    if (a == 0 || b == 0 || c == 0) {
        throw figureException ("������, ������� ������������ �� ����� ���� ����� ����.");
    }
    else if (A == 0 || B == 0 || C == 0) {
        throw figureException("������, ���� ������������ �� ����� ���� ����� ����.");
    }
    else if (a != b || b != c || c != a) {
        throw figureException("������, ������� ������������ �� ����� ���� �� �����");
    }
    else if ((A + B + C) > 180) {
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