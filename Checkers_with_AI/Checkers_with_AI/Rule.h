#pragma once
#include "Move.h"
#include "ChekerTable.h"
class Rule
{
public:
	virtual bool validate(const Move& move, const ChekerTable& table) = 0;

};

