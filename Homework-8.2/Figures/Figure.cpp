
#include <iostream>
#include <string>
#include "Figure.h"
#include "FigureException.h"
using namespace std;

    ObjFigure::ObjFigure(){ 
        this->numSides = numSides;
        if (this->numSides != 0) { 
            throw figureException("Ошибка ввода данных."); 
        };
        
    }

    string ObjFigure::getSides(){ return to_string(numSides);}

    void ObjFigure::getSidesCount(){ cout << "Фигура" << endl << "Количество сторон: " << getSides() << endl; }