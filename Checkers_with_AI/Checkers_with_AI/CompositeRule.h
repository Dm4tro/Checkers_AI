#pragma once

#include "Rule.h"
#include "Move.h"
#include "Table.h"
#include <list>


class CompositeRule : public Rule
{
private:

	const std::list<Rule*> ruleSet;

public:
	CompositeRule() {}
	CompositeRule(const list<Rule*>& ruleSet) {}

	bool validate(const Move& move ,const ChekerTable& table){}
};

