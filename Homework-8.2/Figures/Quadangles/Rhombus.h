#pragma once
#include "Fourangle.h"
#include <iostream>;
using namespace std;

class Rhombus : public Fourangle {

public:
	void getSidesCount() override;
	Rhombus(int a, int A, int B);
};
