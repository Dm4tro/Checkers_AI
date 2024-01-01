#pragma once


class Checker
{
public:
	Checker():symbol{ ( int)0 } { }

	Checker(int posX, int posY,  int _symbol) : x{ posX }, y{ posY }, symbol{ _symbol } {
		
		
	}

	Checker( int _symbol): symbol{ _symbol } {

	}

	Checker& operator=( const Checker& other) {
		this->symbol = other.symbol;
		this->x = other.x;
		this->y = other.y;

		return *this;
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
	 int getSymbol() {
		return symbol;
	}

	 void setSymbol(int _symbol) {
		 this->symbol = _symbol;
	 }

	 bool isEmpty() {
		 return symbol == 0;
	 }

	 bool isWhite() {
		 return symbol == 1;
	 }
	
	 bool isBlack() {
		 return symbol == 2;
	 }

	

private:
	  int symbol;
	int x, y;
	 //white or black
};

