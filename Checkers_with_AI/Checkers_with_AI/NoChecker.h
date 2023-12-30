#pragma once
#include "Checker.h"
class NoChecker: public Checker
{
public:


	NoChecker() :Checker(symbol) {
	
	}
	static inline const int symbol=0;
};
