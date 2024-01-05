#pragma once

#include "ConstantSet.h"

class Checker
{
public:
	Checker():color{ (unsigned short)0 }, x { -1 }, y{ -1 } { }

	Checker(int posX, int posY, unsigned short _symbol) : x{ posX }, y{ posY }, color{ _symbol } {
		
	}

	Checker(unsigned short _symbol) : color{ _symbol }, x{ -1 }, y{-1} {

	}

	Checker& operator=( const Checker& other) {
		this->color = other.color;
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
		return color;
	 }

	 int getSymbol() const {
		 return color;
	 }
	 void setSymbol(unsigned short _symbol) {
		 this->color = _symbol;
	 }
	 void setToWhiteKing() {
		 this->color = ConstantSet::COLOR_WHITE_KING;
	 }

	 void setToBlackKing() {
		 this->color = ConstantSet::COLOR_BLACK_KING;
	 }

	 bool isEmpty() {
		 return color == 0;
	 }

	 bool isWhite() {
		 return color == ConstantSet::COLOR_WHITE;
	 }
	
	 bool isBlack() {
		 return color == ConstantSet::COLOR_BLACK;
	 }
	 bool isKing() {
		 return this->color == ConstantSet::COLOR_BLACK_KING || this->color == ConstantSet::COLOR_WHITE_KING;
	 }
	

private:
	  unsigned short color;
	int x, y;
	
	 //white or black
};

