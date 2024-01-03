#pragma once

#include <iostream> 
#include "Coordinate.h"
#include <list>
using namespace std;

class Move
{
public:

	Move()  { //:From(),To()
		
	}
	~ Move() { //:From(),To()
		path.clear();
	}

	//  2:3>5:7
	friend istream& operator>>(istream& in, Move& c)
	{
		cout << "Input: ";
		char checkInput;
		while ( (checkInput =in.peek()) != '\n')
		{
			in >> c.temporaray;
			c.path.push_back(c.temporaray);
			char arrow = in.get();

			if (arrow == '<')
				continue;
			else {
				cout << "Error, '<' is missing!";
				break;
			}
		}
		//cout << "1 Input ";peek provirjaty
			//in >> c.From ;
			//
			//char arrow = in.get();
			//
			//if (arrow == '<') in >> c.To;
			////cout << "2 Input ";
			//else cout << "ERROR";

		return in;
	}

	//friend ostream& operator<<(ostream&, Move& c)
	//{
	//	cout << c.From<< "<" <<c.To;

	//	return cout;
	//}

	void coutFront() {
		cout << path.front().getY() <<" " << path.front().getX();
	}
	const list<Coordinate>& getPathFromSecond() const {
		auto it = path.begin();
		if (it != path.end()) {
			++it; 
		}

		
		return list<Coordinate>(it, path.end());
	}

	const list<Coordinate>& getPath() const {
		return path;
	}


private:
	list <Coordinate> path;
	Coordinate temporaray;

};

