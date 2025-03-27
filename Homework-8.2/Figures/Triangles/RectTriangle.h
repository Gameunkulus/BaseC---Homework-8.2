#pragma once;
#include "Triangle.h";
#include <iostream>;
using namespace std;


class ObjRectTriangle : public ObjTriangle {

public:
	void getSidesCount() override;
	ObjRectTriangle(int a, int b, int c, int A, int B, int C);
};
