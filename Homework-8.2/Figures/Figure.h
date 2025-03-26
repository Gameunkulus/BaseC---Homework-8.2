#pragma once
#include <iostream>;
using namespace std;

class figure {
protected:

    int numSides = 0;

public:
    figure();
    virtual string getSides();
    virtual void getSidesCount();
};
