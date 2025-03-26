#pragma once
#include "Triangle.h"
#include <iostream>;
using namespace std;


class IsoTriangle : public Triangle {

public:
	void getSidesCount() override;
	IsoTriangle(int a, int b, int A, int B);
};

