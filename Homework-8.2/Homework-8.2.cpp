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

    ObjFigure objfigure;
    objfigure.getSidesCount();
    ObjTriangle objtriangle(10, 10, 10, 60, 60, 60);
    objtriangle.getSidesCount();
    ObjTriangle objwrongTriangle(10,10,10,90,90,90);
    ObjRectTriangle objrectTriangle(10, 25, 90, 15, 25, 65);
    objrectTriangle.getSidesCount();
    ObjRectTriangle objWrongRectTriangle(10, 25, 180, 15, 25, 65);
    ObjIsoTriangle objIsoTriangle(15, 10, 10, 60, 20, 20);
    objIsoTriangle.getSidesCount();
    ObjEquiTriangle objEquiTriangle(15, 15, 15, 60, 60, 60);
    objEquiTriangle.getSidesCount();
    ObjFourangle objfourangle(10, 10, 10, 10, 90, 90, 90, 90);
    objfourangle.getSidesCount();
    ObjSquare objsquare(10, 10, 10, 10, 90, 90, 90, 90);
    objsquare.getSidesCount();
    ObjRectangle objrectangle(15, 15, 15, 15, 20, 20, 20, 20);
    objrectangle.getSidesCount();
    ObjParallelogram objparallelogram(10, 15, 10, 15, 30, 50, 30, 50);
    objparallelogram.getSidesCount();
    ObjRhombus objrhombus(15, 15, 15, 15, 20, 30, 20,30);
    objrhombus.getSidesCount();

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
