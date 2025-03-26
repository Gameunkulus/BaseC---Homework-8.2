#pragma once
#include "Fourangle.h"
#include <iostream>;
using namespace std;

class Rectangle : public Fourangle {

public:
	void getSidesCount() override;
	Rectangle(int a, int b);
};