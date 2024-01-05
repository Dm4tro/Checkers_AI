#pragma once
#include "Move.h"
#include "ChekerTable.h"
#include <list>

class MoveForwardRule
{
public:
	MoveForwardRule() {

	}

	bool validate(const Move& move, const ChekerTable& table) {
		list <Coordinate> temp = move.getPath();
		if (table.getACell(temp.front().getY(), temp.front().getX()).isWhiteChecker())
		{
			return temp.front().getY() + 1 == temp.back().getY();
		}
		else
		{
			return temp.front().getY() -1 == temp.back().getY();
		}

		
		
	}
};

