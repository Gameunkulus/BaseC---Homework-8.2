#pragma once
#include "../Figure.h"
#include <iostream>;
using namespace std;


class ObjTriangle : public ObjFigure {

protected:
	int a, b, c;
	int A, B, C;
public:
	void getSidesCount() override;
	string getSides() override;
	ObjTriangle(int a, int b, int c, int A, int B, int C);
};


