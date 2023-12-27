#pragma once
#include "Checker.h"

class Cell
{
public:

	Cell() {

	}
	Cell(int Ypos, int Xpos) :y{ Ypos }, x {Xpos} {
		
	}

	


private:
	Checker one;
	int defaultVal = 0;
	int x, y;
};

