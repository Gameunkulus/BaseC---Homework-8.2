#pragma once
#include "Fourangle.h"
#include <iostream>;
using namespace std;

class Parallelogram : public Fourangle {

public:
	void getSidesCount() override;
	Parallelogram(int a, int b, int A, int B);
};
