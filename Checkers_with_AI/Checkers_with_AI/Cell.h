#pragma once
#include <iostream>
#include "Checker.h"
#include "BlackChecker.h"
#include "WhiteChecker.h"
#include "NoChecker.h"
#include "ConstantSet.h"




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

	Cell(int Ypos, int Xpos, unsigned short symbol, unsigned short _color)
		:y{ Ypos }, x{ Xpos }, checker{ symbol }, color{_color} {
		
	}


	Cell(int Ypos, int Xpos, unsigned short _color)
		:y{ Ypos }, x{ Xpos }, color{ _color }, checker{(unsigned short)0} {

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
	void setColor(unsigned short _color) {
		this->color = _color;
	}
	void setSymbol(unsigned short _symbol) {
		this->checker.setSymbol(_symbol);
	}
	unsigned short getSymbol() {
		return this->checker.getSymbol();
	}
	unsigned short getColor() {
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
	void setToWhiteKing() {
		checker.setToWhiteKing();
	}
	void setToBlackKing() {
		checker.setToBlackKing();
	}
	bool isWhite() {
		return color == ConstantSet::COLOR_WHITE;
	}
	bool isWhite() const {
		return color == ConstantSet::COLOR_WHITE;
	}
	bool isBlack() {
		return color == ConstantSet::COLOR_BLACK;
	}
	bool isBlack() const{
		return color == ConstantSet::COLOR_BLACK;
	}
	bool isBlackChecker() {
		return checker.getSymbol() == ConstantSet::COLOR_BLACK;
	}
	bool isWhiteChecker() {
		return checker.getSymbol() == ConstantSet::COLOR_WHITE;
	}
	bool isWhiteKing() {
		return checker.getSymbol() == ConstantSet::COLOR_WHITE_KING;
	}
	bool isBlackKing() {
		return checker.getSymbol() == ConstantSet::COLOR_BLACK_KING;
	}

	bool isWhiteKing()const {
		return checker.getSymbol() == ConstantSet::COLOR_WHITE_KING;
	}
	bool isBlackKing()const {
		return checker.getSymbol() == ConstantSet::COLOR_BLACK_KING;
	}
	bool isBlackChecker()const {
		return checker.getSymbol() == ConstantSet::COLOR_BLACK;
	}
	bool isWhiteChecker()const {
		return checker.getSymbol() == ConstantSet::COLOR_WHITE;
	}
	bool isKing() {
		return checker.isKing();
	}
	bool isEmptyChecker() {
		return checker.getSymbol() == 0;
	}

	bool isEmptyChecker()const {
		return checker.getSymbol() == 0;
	}
	void recieve(Checker recieved) {

		checker.setSymbol(recieved.getSymbol());
	}

	Checker send() {
		return this->checker;
	}

	void removeChecker() {
		checker.setSymbol(0);
	}

private:
	
	Checker checker;
	unsigned short color;
	
	int x;
	int y;
};

