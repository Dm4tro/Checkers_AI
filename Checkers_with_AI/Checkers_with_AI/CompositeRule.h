#pragma once

#include "Rule.h"
#include "Move.h"
#include "ChekerTable.h"
#include <list>
#include "TakeRules.h"
#include "MoveForwardRule.h"
#include "FundamentalRules.h"
#include "KingMoveRule.h"


class CompositeRule : public Rule
{
private:

	
	FundamentalRules fundamentalRules;
	TakeRules takeRules;
	MoveForwardRule moveRules;
	KingMoveRule kingMoveRule;
	
public:
	CompositeRule() {}
	CompositeRule(const list<Rule*>& ruleSet) {}

	bool validate(const Move& move ,const ChekerTable& table){
		list <Coordinate> pathTemp = move.getPath();
		Cell tempCell = table.getACell(pathTemp.front().getY(), pathTemp.front().getX());

		if (!tempCell.isKing()&&fundamentalRules.validate(move, table) &&
			(takeRules.validate(move, table) || moveRules.validate(move, table)))
			return true;
		else if (tempCell.isKing()&&fundamentalRules.validate(move,table)&&
			(takeRules.validate(move, table) || kingMoveRule.validate(move, table)))
			return true;
		else
			return false;
		
	}
};

