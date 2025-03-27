#pragma once;
#include "Triangle.h";
#include <iostream>;
using namespace std;


class ObjIsoTriangle : public ObjTriangle {

public:
	void getSidesCount() override;
	ObjIsoTriangle(int a, int b, int c, int A, int B, int C);
};

