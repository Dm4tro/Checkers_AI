#pragma once
#include "Move.h"
#include "Table.h"
class Rule
{
public:
	virtual bool validate(const Move& move, const ChekerTable& table) = 0;
};

