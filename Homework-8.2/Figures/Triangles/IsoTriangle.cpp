
#include <iostream>
#include "IsoTriangle.h"
#include <string>

using namespace std;

void IsoTriangle::getSidesCount() {

    cout << "�������������� �����������: " << endl << getSides() << endl;
}

IsoTriangle::IsoTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {

    numSides = 3;

    if (a == 0 || b == 0 || c == 0) {
        cout << "������, ������� ������������ �� ����� ���� ����� ����." << endl;
    }
    else if (A == 0 || B == 0) {
        cout << "������, ���� ������������ �� ����� ���� ����� ����." << endl;
    }
    else if ((a + b) < c || (b + c) < a || (c + a) < b) {
        cout << "������, ������������ �������� ������ ������������." << endl;
    }
    else if ((A + B) > 90) {
        cout << "������, ����� �������� ����� �� ����� ���� ������ 180." << endl;
    }
    else {
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;
    };
};