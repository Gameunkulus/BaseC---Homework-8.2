#pragma once
#include "Fourangle.h"
#include <iostream>;
using namespace std;

class ObjSquare : public ObjFourangle {

public:
	void getSidesCount() override;
	ObjSquare(int a, int b, int c, int d, int A, int B, int C, int D);
};