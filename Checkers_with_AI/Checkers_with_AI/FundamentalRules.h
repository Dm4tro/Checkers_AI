#pragma once
#include "Move.h"
#include "ChekerTable.h"
#include "SimpleMoveToEmptyRule.h"
#include "ToBlackCellRule.h"
#include "WithinTheBoundsRule.h"
#include "RightCheckerRule.h"


class FundamentalRules
{
public:

	FundamentalRules() {

	}
	bool validate(const Move& move, const ChekerTable& table) {
		
		return simpleMoveToEmptyRule.validate(move, table) && toEmptyBlackCellRule.validate(move, table)&&
			withinTheBoundsRule.validate(move, table)&&rightCheckerRule.validate(move, table);
	}
private:
	SimpleMoveToEmptyRule simpleMoveToEmptyRule;
	ToBlackCellRule toEmptyBlackCellRule;
	WithinTheBoundsRule withinTheBoundsRule;
	RightCheckerRule rightCheckerRule;

	
};

