#pragma once

#include "Cell.h"

class Checker : public Cell
{
public:
	Checker () {}

	Checker(int posX, int posY,int sym) : x{ posX }, y{ posY }, symbol{sym} {

		
	}

	Checker(int symb): symbol{ symb } {

	}

	void changeX(int newX) {
		x = newX;
	}

	void changeY(int newY) {
		y = newY;
	}

	int getY() {
		return y;
	}

	int getX() {
		return x;
	}
	int getSymbol() {
		return symbol;
	}
	void setSymbol(int newS) {
		symbol = newS;
	}

	

private:
	int symbol;
	int x, y;
	 //white or black
};

