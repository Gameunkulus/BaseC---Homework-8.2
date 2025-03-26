#pragma once
#include "../Figure.h"
#include <iostream>;
using namespace std;


class fourangle : public figure {

protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	void getSidesCount() override;
	string getSides() override;
	fourangle(int a, int b, int c, int d, int A, int B, int C, int D);
};

