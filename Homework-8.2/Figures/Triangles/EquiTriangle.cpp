
#include <iostream>
#include "EquiTriangle.h"
#include <string>

using namespace std;

void EquiTriangle::getSidesCount() {

    cout << "�������������� �����������: " << endl << getSides() << endl;
}

EquiTriangle::EquiTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {

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
    };
};