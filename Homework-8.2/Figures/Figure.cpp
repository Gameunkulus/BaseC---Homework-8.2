
#include <iostream>
#include <string>
#include "Figure.h"
#include "FigureException.h"
using namespace std;

    figure::figure(){ 
        this->numSides = numSides;
        if (this->numSides != 0) { 
            throw figureException("Ошибка ввода данных."); 
        };
        
    }

    string figure::getSides(){ return to_string(numSides);}

    void figure::getSidesCount(){ cout << "Фигура" << endl << "Количество сторон: " << getSides() << endl; }