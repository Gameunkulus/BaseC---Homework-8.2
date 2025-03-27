
#include <iostream>
#include "Triangle.h"
#include "../FigureException.h"
#include <string>

using namespace std;

string ObjTriangle::getSides() {
    
    string text = "�������: a = " + to_string(a) + " b = " + to_string(b) + " c = " + to_string(c) + "\n" +
        "���� : A = " + to_string(A) + " B = " + to_string(B) + " C = " + to_string(C);
    return text;
};

void ObjTriangle::getSidesCount() {
    
    cout << "�����������: " << endl << getSides() << endl;
}

ObjTriangle::ObjTriangle(int a, int b, int c, int A, int B, int C) {

    numSides = 3;
    if (a == 0 || b == 0 || c == 0) {
        throw figureException("������, ������� ������������ �� ����� ���� ����� ����.");
    }
    else if (A == 0 || B == 0 || C == 0) {
        throw figureException("������, ���� ������������ �� ����� ���� ����� ����.");
    }
    else if ((a + b) < c || (b + c) < a || (c + a) < b){
        throw figureException("������, ������������ �������� ������ ������������.");
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
