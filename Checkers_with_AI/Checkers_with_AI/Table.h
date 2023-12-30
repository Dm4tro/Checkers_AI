#pragma once
#include "Game.h"
#include "Cell.h"
class Table: public Game
{
public:
	Table() {

	}
	void inspectAndDoMoveWhite() {

	}
	void inspectAndDoMoveBlack() {

	}
	void initializeGame() {
		for (size_t i = 0; i < 8; i++)
		{
			

			for (size_t j = 0; j < 8; j++)
			{


			}

		}
	}
	void showTable() {

	}
private:
	Cell AllCells[8][8];
	Cell cell;
};

