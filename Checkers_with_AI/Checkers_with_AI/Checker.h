#pragma once


class Checker
{
public:
	Checker():symbol {0}{ }

	Checker(int posX, int posY, const int sym) : x{ posX }, y{ posY }, symbol{sym} {
		
		
	}

	Checker(const int symb): symbol{ symb } {

	}

	void setX(int newX) {
		x = newX;
	}

	void setY(int newY) {
		y = newY;
	}

	int getY() {
		return y;
	}

	int getX() {
		return x;
	}
	const int getSymbol() {
		return symbol;
	}
	

	

private:
	const int symbol;
	int x, y;
	 //white or black
};

