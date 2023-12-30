#pragma once
#include <iostream>
#include "Move.h"
#include "Table.h"
class Game
{
public:
	Game(){}

	void run() {
		table.initializeGame();
		table.showTable();

		
		readMoveForWhite();
		tabble.inspectAndDoMoveWhite();

		readMoveForBlack();
		tabble.inspectAndDoMoveBlack();

	}
	void readMoveForWhite() {
		cin >> move;
	}

public:
	Table table;
	Move move;

};

