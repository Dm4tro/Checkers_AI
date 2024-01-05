#pragma once

#include <iostream> 
#include "Coordinate.h"
#include <list>
using namespace std;

class Move
{
public:

	Move(unsigned short _checkerColor) : checkerColor{ _checkerColor } { //:From(),To()
		
	}
	~ Move() { //:From(),To()
		path.clear();
	}

	//  2:3>5:7
	friend istream& operator>>(istream& in, Move& c)
	{
		cout << "Input: ";
		char checkInput=' ';
		while ( checkInput  != '\n')
		{
			in >> c.temporaray;
			c.path.push_back(c.temporaray);
			char arrow = in.get();
			//2:6<1:5
			if (arrow == '<')
				continue;
			else if (arrow == '\n') {
				break;
			}else {
				cout << "Error, '<' is missing!";
				exit(-1);
			}
			checkInput = in.peek();
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
	list<Coordinate> getPathFromSecond() const {
		std::list<Coordinate> pathFromSecond;

		auto it = path.begin();
		if (it != path.end()) {
			++it;
		}
		else {
			std::cout << "getPathFromSecond ERROR";
		}

		pathFromSecond.insert(pathFromSecond.end(), it, path.end());
		return pathFromSecond;
	}

	const list<Coordinate>& getPath() const {
		return path;
	}
		
	size_t getPathSize() {
		return path.size();
	}

	unsigned short getCheckerColor() {
		return checkerColor;
	}

private:
	list <Coordinate> path;
	/*list <Coordinate> pathFromSecond;*/
	Coordinate temporaray;
	unsigned short checkerColor;

};

