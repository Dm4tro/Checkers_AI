#pragma once
#include <cstddef>

class ConstantSet
{
	ConstantSet() {
		//Constraction preversion
		//TODO CONSIDER TO THROW EXEPTION 
	}

public:
	static inline const unsigned short COLOR_BLACK = 2;
	static inline const unsigned short COLOR_WHITE = 1;
	static inline const unsigned short COLOR_WHITE_KING= 10;
	static inline const unsigned short COLOR_BLACK_KING = 20;
};

