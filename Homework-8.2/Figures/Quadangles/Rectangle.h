#pragma once
#include <iostream>;
#include "Fourangle.h"

using namespace std;

class rectangle : public fourangle {

public:
	void getSidesCount() override;
	rectangle(int a, int b);
};