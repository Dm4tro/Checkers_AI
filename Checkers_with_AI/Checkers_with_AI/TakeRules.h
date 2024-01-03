#pragma once

#include "Move.h"
#include "ChekerTable.h"
#include "RangeTakeRule.h"
#include "TakeOppositeCheckerRule.h"
#include <list>

class TakeRules
{
public:

	TakeRules() {}
	bool validate(const Move& move, const ChekerTable& table) {
		return rangeTakeRule.validate(move, table)&& takeOppositeCheckerRule.validate(move, table);
	}

private:
	RangeTakeRule rangeTakeRule;
	TakeOppositeCheckerRule takeOppositeCheckerRule;
};

