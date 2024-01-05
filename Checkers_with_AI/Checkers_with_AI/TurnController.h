#pragma once
#include "ConstantSet.h"

class TurnController
{
public:

	TurnController() : chckerTurn{100} {

	}

	void setTurnWhite() {
		chckerTurn = ConstantSet::COLOR_WHITE;

	}

	void setTurnBlack() {
		chckerTurn = ConstantSet::COLOR_BLACK;
	}

	unsigned short getCurrentTurnCheckerColor() {
		return chckerTurn;
	}

private:
	unsigned short chckerTurn;
};

