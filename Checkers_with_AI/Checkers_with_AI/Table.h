#pragma once
#include "Game.h"
#include "Cell.h"
#include "Coordinate.h"
#include <ios>
#include <iomanip>
class Table
{
public:
	Table() {

	}
	void inspectAndDoMoveWhite(Coordinate From, Coordinate To) {
		
	}
	void inspectAndDoMoveBlack(Coordinate From, Coordinate To) {

	}

	void doMove(Coordinate From, Coordinate To) {
		//send checker to Cell and the Cell should recieve checker and replatece, while the first Cell should have NOCHECKER
		WholeTable[To.getX() - 1][To.getY() - 8].recieve(WholeTable[From.getX() - 1][From.getY() - 8].send());
		WholeTable[From.getX() - 1][From.getY() - 8].removeChecker();
	}

	void initializeGame() {
		

		

		//Cells

			for (int i = 0; i < 8;i=i+2) {
				for (int j = 0; j < 8; j=j+2)
				{
					WholeTable[i][j] = Cell(8 - i, j + 1, 2);
					WholeTable[i][j + 1] = Cell(8 - i , j + 2, 1);

				}
			}
			//lines when starting with Black Cell

			for (int i = 1; i < 8; i = i + 2) {
				for (int j = 0; j < 8; j = j + 2)
				{
					WholeTable[i][j] = Cell(8 - i, j + 1, 1);
					WholeTable[i][j + 1] = Cell(8 - i , j + 2, 2);

				}
			}
			//lines when starting with White Cell

			//Checkers
			//Black
			
				for (int b = 0; b < 8;b=b+2) {
					WholeTable[0][b].setSymbol(2);
				}
				for (int b = 0; b < 8; b = b + 2) {
					WholeTable[2][b].setSymbol(2);
				}
				
				for (int b = 1; b < 8; b = b + 2) {
					WholeTable[1][b].setSymbol(2);
				}
				//White
				for (int b = 1; b < 8; b = b + 2) {
					WholeTable[5][b].setSymbol(1);
				}

				for (int b = 1; b < 8; b = b + 2) {
					WholeTable[7][b].setSymbol(1);
				}

				for (int b = 0; b < 8; b = b + 2) {
					WholeTable[6][b].setSymbol(1);
				}
				
			
	}

	void showTable() {

		for (int i = 0; i < 8; i++)
		{
			cout << i + 1 << setw(6);
			for (int j = 0; j < 8; j++)
			{//test different symbols
				
				if (WholeTable[i][j].getSymbol() == 0 && WholeTable[i][j].getColor() == 1) {
					cout << "  ";
				}
				else if(WholeTable[i][j].getSymbol() == 0 && WholeTable[i][j].getColor() == 2){
					cout << "B ";
				}
				else if (WholeTable[i][j].getSymbol() == 1)
				{
					cout << "1 ";
				}
				else  if (WholeTable[i][j].getSymbol() == 2)
				{
					cout << "2 ";
				}
				
			}
			cout <<endl;

		}
		cout << endl;

		cout <<setw(6);
		for (size_t i = 1; i <= 8; i++)
		{
			cout << i<<" ";
		}
		cout << endl;
		
	}
private:

    Cell WholeTable[8][8];  // Array of MyClass objects

	
};