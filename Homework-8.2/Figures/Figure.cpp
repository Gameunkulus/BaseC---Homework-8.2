
#include <iostream>
#include <string>
#include "Figure.h"
#include "FigureException.h"
using namespace std;

    Figure::Figure(){ 
        this->numSides = numSides;
        if (this->numSides != 0) { 
            throw figureException("������ ����� ������."); 
        };
        
    }

    string Figure::getSides(){ return to_string(numSides);}

    void Figure::getSidesCount(){ cout << "������" << endl << "���������� ������: " << getSides() << endl; }