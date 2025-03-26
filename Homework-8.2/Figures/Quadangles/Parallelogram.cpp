
#include <iostream>
#include "Parallelogram.h"
#include <string>

using namespace std;

void Parallelogram::getSidesCount() {

    cout << "Параллелограм: " << endl << getSides() << endl;
}

Parallelogram::Parallelogram(int a, int b, int A, int B) : Fourangle(a, b, a, b, A, B, A, B) {

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        cout << "Ошибка, стороны четырехугольника не могут быть равны нулю." << endl;
        return;
    }
    else {
        this->a = a;
        this->b = b;
        this->A = A;
        this->B = B;

    };
};