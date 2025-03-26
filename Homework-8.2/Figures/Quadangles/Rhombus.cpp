
#include <iostream>
#include "Rhombus.h";
#include <string>

using namespace std;


void Rhombus::getSidesCount() {

    cout << "����: " << endl << getSides() << endl;
}

Rhombus::Rhombus(int a, int A, int B) : Fourangle(a, a, a, a, A, B, A, B) {

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        cout << "������, ������� ���������������� �� ����� ���� ����� ����." << endl;
        return;
    }
    else {
        this->a = a;
        this->A = A;
        this->B = B;

    };
};