#pragma once
#include <iostream>;
using namespace std;

class Figure {
protected:

    int numSides = 0;

public:
    Figure();
    virtual string getSides();
    virtual void getSidesCount();
};
