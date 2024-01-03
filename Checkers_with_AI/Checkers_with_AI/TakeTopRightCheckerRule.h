#pragma once
#include "Move.h"
#include "ChekerTable.h"
#include "list"
class TakeTopRightCheckerRule
{
public:

	TakeTopRightCheckerRule() = default;

	bool inspect(Coordinate& coordinate1, Coordinate& coordinate2, const ChekerTable& table, unsigned short oppositeCheckerColor) {
		if (oppositeCheckerColor == ConstantSet::COLOR_BLACK)
		{
			if (coordinate1.getX() + 2 == coordinate2.getX() && coordinate1.getY() + 2 == coordinate2.getY()
				&& table.getACell(coordinate2.getY() - 1 - 8, coordinate2.getX() - 1 - 1).isBlackChecker()) return true;
			else return false;
		}

		else
		{
			if (coordinate1.getX() + 2 == coordinate2.getX() && coordinate1.getY() + 2 == coordinate2.getY()
				&& table.getACell(coordinate2.getY() - 1 - 8, coordinate2.getX() - 1 - 1).isWhiteChecker()) return true;
			else return false;
		}
	}
};

