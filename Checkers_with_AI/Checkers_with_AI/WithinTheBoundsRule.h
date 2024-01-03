#pragma once
#include "Move.h"
#include "ChekerTable.h"
class WithinTheBoundsRule
{
public:

	WithinTheBoundsRule() {}
	bool validate(const Move& move, const ChekerTable& table) {
		list <Coordinate> temp = move.getPath();


		for (const Coordinate& coordianate : temp) {
			
			
			if (coordianate.getY() > 8 || coordianate.getY() < 0)
			{
				return false;
			}
			if (coordianate.getX() > 8 || coordianate.getX() < 0)
			{
				return false;
			}

		}
		return true;
	}
};

