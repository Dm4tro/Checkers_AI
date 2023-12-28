#pragma once

#include "Checker.h"
#include "BlackChecker.h"
#include "WhiteChecker.h"
#include "NoChecker.h"



class Cell
{
public:

	static inline  NoChecker const ONE =  NoChecker();

	Cell() {

	}

	Cell(int Ypos, int Xpos) :y{ Ypos }, x{ Xpos }, one{ ONE } {
		
	}

private:
	Checker one;
	int defaultValue = 0;
	int x, y;
};

