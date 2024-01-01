#pragma once
#include <iostream>
#include "Checker.h"
#include "BlackChecker.h"
#include "WhiteChecker.h"
#include "NoChecker.h"




class Cell
{
public:

	static inline NoChecker ONE =  NoChecker();
	
	Cell() {

	}

	//Cell(int Ypos, int Xpos) :y{ Ypos }, x{ Xpos }, checker{ ONE } {
	//	
	//}

	//Cell(int Ypos, int Xpos,const int symbol) :y{ Ypos }, x{ Xpos }, checker{ symbol } {

	//}

	Cell(int Ypos, int Xpos, int symbol, int _color) 
		:y{ Ypos }, x{ Xpos }, checker{ symbol }, color{_color} {
		
	}


	Cell(int Ypos, int Xpos, int _color) 
		:y{ Ypos }, x{ Xpos }, color{ _color }, checker{0} {

	}
	Cell& operator=(const Cell& other) {
		if (this != &other) {
			y = other.y;
			x = other.x;
			color = other.color;
			checker = other.checker;
		}
		return *this;
	}
	void setColor(int _color) {
		this->color = _color;
	}
	void setSymbol(int _symbol) {
		this->checker.setSymbol(_symbol);
	}
	int getSymbol() {
		return this->checker.getSymbol();
	}
	int getColor() {
		return this->color;
	}
	int getX() {
		return this->x;
	}
	int getY() {
		return this->y;
	}
	void setX(int _x) {
		checker.setX(_x);
	}
	void setY(int _y) {
		checker.setY(_y);
	}
	bool isWhite() {
		return color == 1;
	}
	bool isBlack() {
		return color == 2;
	}

	void recieve(Checker recieved) {
		checker = recieved;
	}

	Checker send() {
		return this->checker;
	}

	void removeChecker() {
		checker.setSymbol(0);
	}

private:
	
	Checker checker;
	int color;
	
	int x;
	int y;
};

