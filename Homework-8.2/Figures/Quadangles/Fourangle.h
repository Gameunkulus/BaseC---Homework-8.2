#pragma once
#include "../Figure.h"
#include <iostream>;
using namespace std;


class Fourangle : public Figure {

protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	void getSidesCount() override;
	string getSides() override;
	Fourangle(int a, int b, int c, int d, int A, int B, int C, int D);
};

