#pragma once
#include <iostream> 
#include <ostream>
#include <istream>

#include <stdlib.h>
#include <stdio.h>
using namespace std;

class Coordinate
{
public:

	Coordinate (int _x, int _y) :x{ _x }, y{ _y } {

	}

	Coordinate() {
		y = 0;
		x = 0;
	}
	Coordinate(Coordinate& rhs) {
		this->y = rhs.getY();
		this->x = rhs.getX();
	}

	friend istream& operator>>(istream& in, Coordinate& cl)
	{
		

	
		char c;
		int i = 0;
		cl.x = 0;
		while ((c = in.get()) != ':') {
			if (c >= '0' && c <= '9') {
				int digit = c - '0';
				cl.x = cl.x * 10 + digit;
				i++;
			}
			else if (i > 0) {
				// Convert the characters into an integer
				break;
			}
		}

		char d;
		int a = 0;
		cl.y = 0;
		while ( iswalnum((d = in.peek()))) {
			d = in.get();
			if (d >= '0' && d <= '9') {
				int digit = d - '0';
				cl.y = cl.y * 10 + digit;
				i++;
			}
			else if (i > 0) {
				// Convert the characters into an integer
				break;
			}
		}

		
		return in;
	}

	friend ostream& operator<<(ostream&, Coordinate& c)
	{
		cout  << c.x << ":" << c.y;
		return cout;
	}

	Coordinate& operator=(const Coordinate& rhs)
	{
		if (this != &rhs) {
			y = rhs.y;
			x = rhs.x;

		}
		
		return *this;
	}

	int getX() {

		return x;

	}

	int getY() {
		return y;
	}

	void setX(int _X) {
		x = _X;

	}

	void setY(int _Y) {
		y = _Y;
	}
private:
	int y, x;
};

