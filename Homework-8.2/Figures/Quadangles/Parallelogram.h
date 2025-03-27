#pragma once
#include "Fourangle.h";
#include <iostream>;
using namespace std;

class ObjParallelogram : public ObjFourangle {

public:
	void getSidesCount() override;
	ObjParallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
};
