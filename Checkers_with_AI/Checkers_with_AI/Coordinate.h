#pragma once
#include <iostream> 
#include <ostream>
#include <istream>
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

	friend istream& operator>>(istream& cin, Coordinate& c)
	{
		
		cin >> c.x;
		cout << ":";
		cin>>c.y;

		return cin;
	}

	friend ostream& operator<<(ostream&, Coordinate& c)
	{
		cout  << c.x << ":" << c.y<<endl;
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

