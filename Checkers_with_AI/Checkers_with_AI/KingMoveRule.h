#pragma once
#include "Move.h"
#include "ChekerTable.h"
#include <list>

class KingMoveRule
{
public:

	KingMoveRule() {

	}

	bool validate(const Move& move, const ChekerTable& table) {
		list <Coordinate> temp = move.getPath();

		return temp.front().getY() + 1 == temp.back().getY() || temp.front().getY() - 1 == temp.back().getY();
		
	}
};

