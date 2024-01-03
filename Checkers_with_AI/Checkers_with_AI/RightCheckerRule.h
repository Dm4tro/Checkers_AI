#pragma once
#include "Move.h"
#include "ChekerTable.h"
class RightCheckerRule
{
public:

	RightCheckerRule() = default;
	bool validate(const Move& move, const ChekerTable& table) {
		return true;
	}
};

