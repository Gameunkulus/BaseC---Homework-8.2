#pragma once
#include "Triangle.h"
#include <iostream>;
using namespace std;


class EquiTriangle : public Triangle {

public:
	void getSidesCount() override;
	EquiTriangle(int a);
};

