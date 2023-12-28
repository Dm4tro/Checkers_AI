#pragma once
#include "Checker.h"
class BlackChecker: public Checker
{
public:

	BlackChecker():Checker(value) {
		 
	}
private:
	const int value= 2;

};