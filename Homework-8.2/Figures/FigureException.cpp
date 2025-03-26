
#include <iostream>
#include <exception>
#include <string>
#include "FigureException.h"
using namespace std;


figureException::figureException(const string& msg) : exceptmsg(msg){}

const char* figureException::what() const noexcept{
	return exceptmsg.c_str();
};