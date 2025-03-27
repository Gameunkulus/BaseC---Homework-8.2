#pragma once
#include <iostream>;
#include "Fourangle.h";

using namespace std;

class ObjRectangle : public ObjFourangle {

public:
	void getSidesCount() override;
	ObjRectangle(int a, int b, int c, int d, int A, int B, int C, int D);
};