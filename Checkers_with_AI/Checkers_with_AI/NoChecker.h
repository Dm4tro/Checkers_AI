#pragma once
#include "Checker.h"
class NoChecker: public Checker
{
public:


	NoChecker() :Checker(symbol) {
	
	}
	static inline int symbol=0;
};
