#pragma once
#include "Checker.h"
class WhiteChecker : public Checker
{
public:
	WhiteChecker() :Checker(value) {
		 
	}
private:
	static inline const int value = 1;
};

