#pragma once

#include "Checker.h"
#include "BlackChecker.h"
#include "WhiteChecker.h"
#include "NoChecker.h"



class Cell
{
public:

	static inline NoChecker const ONE =  NoChecker();
	

	Cell() {

	}

	//Cell(int Ypos, int Xpos) :y{ Ypos }, x{ Xpos }, checker{ ONE } {
	//	
	//}

	//Cell(int Ypos, int Xpos,const int symbol) :y{ Ypos }, x{ Xpos }, checker{ symbol } {

	//}

	Cell(int Ypos, int Xpos, const int symbol) :y{ Ypos }, x{ Xpos }, checker{ symbol } {
	 
	}

	void setX(int _x) {
		checker.setX(_x);
	}
	void setYint(int _y) {
		checker.setY(_y);
	}

private:
	
	Checker checker;
	int defaultValue = 0;
	int x, y;
};

