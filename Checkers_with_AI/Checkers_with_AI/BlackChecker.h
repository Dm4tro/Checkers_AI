#pragma once
#include "Checker.h"
class BlackChecker: public Checker
{
public:

	BlackChecker():Checker(value) {
		 
	}
private:
	static inline const int value= 2;

};