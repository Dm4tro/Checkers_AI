#pragma once
#include "Move.h"
#include "ChekerTable.h"
#include "list"
#include "TakeBottomRightCheckerRule.h"
#include "TakeTopLeftCheckerRule.h"
#include "TakeBottomLeftCheckerRule.h"
#include "TakeTopRightCheckerRule.h"

class TakeOppositeCheckerRule
{
public:

	TakeOppositeCheckerRule() {

	}
	bool validate(const Move& move, const ChekerTable& table) {
		unsigned short oppositeCollor = theOppositeCheckerColor(move,table);
		if (oppositeCollor== ConstantSet::COLOR_BLACK)
		{
			list <Coordinate> temp = move.getPath();
			

			auto it = temp.begin();
			Coordinate& coordinate1 = *it;
			if (it != temp.end()) {
				 
				
				++it;
			}

			for (; it != temp.end(); ++it) {
				Coordinate& coordinate2 = *it;
				if (!takeTopRightCheckerRule.inspect(coordinate1, coordinate2, table, ConstantSet::COLOR_BLACK))
				{//tr
					return false;
				}
				else if (!takeTopLeftCheckerRule.inspect(coordinate1, coordinate2, table, ConstantSet::COLOR_BLACK)) {
					//tl
					return false;
				}
				else if (!takeBottomLeftCheckerRule.inspect(coordinate1, coordinate2, table, ConstantSet::COLOR_BLACK))
				{//bl
					return false;
				}
				else if(!takeBottomRightCheckerRule.validate(coordinate1, coordinate2, table, ConstantSet::COLOR_BLACK))
				{//br
					return false;
				}
				

				coordinate1 = *it;
			}

			return true;
		}
		else {
			list <Coordinate> temp = move.getPath();


			auto it = temp.begin();
			Coordinate& coordinate1 = *it;
			if (it != temp.end()) {


				++it;
			}

			for (; it != temp.end(); ++it) {
				Coordinate& coordinate2 = *it;

				if (!takeTopRightCheckerRule.inspect(coordinate1, coordinate2, table, ConstantSet::COLOR_WHITE))
				{
					return false;
				}
				else if (!takeTopLeftCheckerRule.inspect(coordinate1, coordinate2, table, ConstantSet::COLOR_WHITE)) {
					
					return false;
				}
				else if (!takeBottomLeftCheckerRule.inspect(coordinate1, coordinate2, table, ConstantSet::COLOR_WHITE))
				{
					return false;
				}
				else if (!takeBottomRightCheckerRule.validate(coordinate1, coordinate2, table, ConstantSet::COLOR_WHITE))
				{
					return false;
				}


				coordinate1 = *it;
			}

			return true;
		}
	}

	unsigned short theOppositeCheckerColor  (const Move& move, const ChekerTable& table) const {
		list <Coordinate> temp2 = move.getPath();
		const Cell temp1 = table.getACell(temp2.front().getY() - 8, temp2.front().getX() - 1);

		if (temp1.isWhite()) return ConstantSet::COLOR_BLACK;
		else return ConstantSet::COLOR_WHITE;
		
	}

private:
	TakeBottomRightCheckerRule takeBottomRightCheckerRule;
	TakeTopLeftCheckerRule takeTopLeftCheckerRule;
	TakeBottomLeftCheckerRule takeBottomLeftCheckerRule;
	TakeTopRightCheckerRule takeTopRightCheckerRule;
};

