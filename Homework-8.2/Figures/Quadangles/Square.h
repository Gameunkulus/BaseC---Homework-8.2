#pragma once
#include "Fourangle.h"
#include <iostream>;
using namespace std;

class Square : public Fourangle {

public:
	void getSidesCount() override;
	Square(int a);
};