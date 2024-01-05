#pragma once
#include "Move.h"
#include "ChekerTable.h"
#include "list"

class SimpleMoveToEmptyRule
{
public:

    SimpleMoveToEmptyRule() {

    }
    bool validate(const Move& move, const ChekerTable& table) {
		list <Coordinate> temp = move.getPathFromSecond();


		for (const Coordinate& coordianate : temp) {
			/*coordianate.getX();
			coordianate.getY();*/
			const Cell temp = table.getACell(coordianate.getY(), coordianate.getX());
			if (!temp.isEmptyChecker())
			{

				return false;

			}

		}
		return true;
    }
	
	
};

