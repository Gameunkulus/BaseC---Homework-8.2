#pragma once
#include "Fourangle.h"
#include <iostream>;
using namespace std;

class ObjRhombus : public ObjFourangle {

public:
	void getSidesCount() override;
	ObjRhombus(int a, int b, int c, int d, int A, int B, int C, int D);
};
