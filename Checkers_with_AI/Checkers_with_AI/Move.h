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
	friend istream& operator>>(istream& in, Move& c)
	{
		cout << "Input";
		//cout << "1 Input ";
			in >> c.From ;
			
			char arrow = in.get();
			
			if (arrow == '<') in >> c.To;
			//cout << "2 Input ";
			else cout << " ERROR";

		return in;
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

