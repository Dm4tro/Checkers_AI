#pragma once
class Game
{
public:
	Game(){}

	void run() {
		table.initializeGame();

		tabel.turnForWhite();
		readMove();
		tabble.doMove();
		table.turnForBlack();

	}

public:
	Table table;

};

