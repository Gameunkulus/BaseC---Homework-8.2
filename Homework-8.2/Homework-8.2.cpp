// Homework-8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "Figures/Figure.h"
#include "Figures/Triangles/Triangle.h"
#include "Figures/Triangles/RectTriangle.h"
#include "Figures/Triangles/IsoTriangle.h"
#include "Figures/Triangles/EquiTriangle.h"
#include "Figures/Quadangles/Fourangle.h"
#include "Figures/Quadangles/Square.h"
#include "Figures/Quadangles/Rectangle.h"
#include "Figures/Quadangles/Parallelogram.h"
#include "Figures/Quadangles/Rhombus.h"
using namespace std;


int main(int argc, char** argv)
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure figure;
    figure.getSidesCount();
    Triangle triangle(10, 10, 10, 60, 60, 60);
    triangle.getSidesCount();
    Triangle wrongTriangle(10,10,10,90,90,90);
    RectTriangle rectTriangle(10, 25, 15, 25, 65);
    rectTriangle.getSidesCount();
    IsoTriangle IsoTriangle(15, 10, 60, 20);
    IsoTriangle.getSidesCount();
    EquiTriangle EquiTriangle(15);
    EquiTriangle.getSidesCount();
    Fourangle fourangle(10, 10, 10, 10, 90, 90, 90, 90);
    fourangle.getSidesCount();
    Square square(10);
    square.getSidesCount();
    Rectangle rectangle(15, 20);
    rectangle.getSidesCount();
    Parallelogram parallelogram(10, 15, 30, 50);
    parallelogram.getSidesCount();
    Rhombus rhombus(15, 20, 30);
    rhombus.getSidesCount();

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
