#pragma once
#include "ContantSet.h"

class TurnController
{
public:

	TurnController() {

	}

	void setTurnWhite() {
		chckerTurn = ConstantSet::COLOR_WHITE;

	}

	void setTurnBlack() {
		chckerTurn == ConstantSet::COLOR_BLACK;
	}

	unsigned short getCurrentTurnCheckerColor() {
		return chckerTurn;
	}

private:
	unsigned short chckerTurn;
};

