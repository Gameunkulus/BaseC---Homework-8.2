#pragma once
#include <iostream>;
using namespace std;

class ObjFigure {
protected:

    int numSides = 0;

public:
    ObjFigure();
    virtual string getSides();
    virtual void getSidesCount();
};
