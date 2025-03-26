#pragma once
#include "Triangle.h"
#include <iostream>;
using namespace std;


class RectTriangle : public Triangle {

public:
	void getSidesCount() override;
	RectTriangle(int a, int b, int c, int A, int B);
};
