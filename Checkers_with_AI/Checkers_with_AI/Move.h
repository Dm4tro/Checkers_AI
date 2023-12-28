#pragma once

#include <iostream> 
#include "Coordinate.h"
using namespace std;

class Move
{
public:

	Move()  { //:From(),To()

	}
	//  2:3>5:7
	friend istream& operator>>(istream& cin, Move& c)
	{
		cout << "1 Input ";
			cin >> c.From ;
			cout << "2 Input ";
			cin >> c.To;

		return cin;
	}

	friend ostream& operator<<(ostream&, Move& c)
	{
		cout << c.From<< "<" <<c.To;

		return cout;
	}
	

private:
	Coordinate From;
	Coordinate To;


};

