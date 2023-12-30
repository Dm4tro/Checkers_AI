#pragma once


class Checker
{
public:
	Checker():symbol{ (const int)0 } { }

	Checker(int posX, int posY, const int _symbol) : x{ posX }, y{ posY }, symbol{ _symbol } {
		
		
	}

	Checker(const int _symbol): symbol{ _symbol } {

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

