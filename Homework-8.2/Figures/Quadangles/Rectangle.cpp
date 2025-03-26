
#include <iostream>
#include "Rectangle.h";
#include <string>

using namespace std;

void Rectangle::getSidesCount() {

    cout << "Прямоугольник: " << endl << getSides() << endl;
}

Rectangle::Rectangle(int a, int b) : Fourangle(a, b, a, b, 90, 90, 90, 90) {

    numSides = 4;
    if (a == 0 || b == 0 || c == 0 || d == 0) {
        cout << "Ошибка, стороны четырехугольника не могут быть равны нулю." << endl;
        return;
    }
    else {
        this->a = a;
        this->b = b;


    };
};