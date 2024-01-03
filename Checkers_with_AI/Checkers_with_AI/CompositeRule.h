#pragma once

#include "Rule.h"
#include "Move.h"
#include "ChekerTable.h"
#include <list>
#include "TakeRules.h"
#include "MoveForwardRule.h"
#include "FundamentalRules.h"


class CompositeRule : public Rule
{
private:

	
	FundamentalRules fundamentalRules;
	TakeRules takeRules;
	MoveForwardRule moveRules;
	
public:
	CompositeRule() {}
	CompositeRule(const list<Rule*>& ruleSet) {}

	bool validate(const Move& move ,const ChekerTable& table){
		if (fundamentalRules.validate(move, table) &&
			(takeRules.validate(move, table) || moveRules.validate(move, table)))
			return true;
		else
			return false;
		
	}
};

