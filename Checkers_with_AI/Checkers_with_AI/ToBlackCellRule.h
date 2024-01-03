#pragma once
#include "Move.h"
#include "ChekerTable.h"
#include "list"

class ToBlackCellRule
{
public:

	ToBlackCellRule() = default;
	bool validate(const Move& move, const ChekerTable& table) {

		list <Coordinate> temp = move.getPathFromSecond();
		
		
		for (const Coordinate& coordianate : temp) {
			/*coordianate.getX();
			coordianate.getY();*/
			const Cell temp1 = table.getACell(coordianate.getY()-8,coordianate.getX()-1);
			if (!temp1.isBlack())
			{
				return false;
			}

		}
		return true;
	}
};

