#pragma once
#include "Checker.h"
class WhiteChecker : public Checker
{
public:
	WhiteChecker() :Checker(value) {
		 
	}
private:
	static inline  int value = 1;
};

