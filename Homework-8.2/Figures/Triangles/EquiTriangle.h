#pragma once;
#include "Triangle.h";
#include <iostream>;
using namespace std;


class ObjEquiTriangle : public ObjTriangle {

public:
	void getSidesCount() override;
	ObjEquiTriangle(int a, int b, int c, int A, int B, int C);
};

