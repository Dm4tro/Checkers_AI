#pragma once

#include "Cell.h"
#include "ContantSet.h"
#include "Coordinate.h"
#include "ContantSet.h"
#include <ios>
#include <iomanip>
class ChekerTable
{
public:
	ChekerTable() : amountOfWhiteCheckers{ 12 }, amountOfBlackCheckers{12 } {
		
	}
	//void inspectAndDoMoveWhite(Coordinate From, Coordinate To) {
	//	if (cellArray[To.getY() - 8][To.getX() - 1].getColor() == 2 && cellArray[To.getY() - 8][To.getX() - 1].getSymbol() == 1 && cellArray[To.getY() - 8][To.getX() - 1].getSymbol() == 0)
	//		//if from checker==White if cell To == Black if To Cell empty
	//	{
	//		if (cellArray[To.getY() - 8][To.getX() - 1].getY() == cellArray[From.getY() - 8][From.getX() - 1].getY() + 1)
	//			//only if forward
	//		{
	//			doMove(From, To);
	//		}
	//		else if ((cellArray[To.getY() - 8][To.getX() - 1].getY() == cellArray[From.getY() - 8][From.getX() - 1].getY() + 2 || cellArray[To.getY() - 8][To.getX() - 1].getY() == cellArray[From.getY() - 8][From.getX() - 1].getY() - 2)&&
	//			(cellArray[To.getY() - 8][To.getX() - 1].getX()== cellArray[From.getY() - 8][From.getX() - 1].getX()+2|| cellArray[To.getY() - 8][To.getX() - 1].getX() == cellArray[From.getY() - 8][From.getX() - 1].getX() -2)) {
	//				doMove(From, To);
	//				//removing the taken pawn
	//				if (cellArray[To.getY() - 8][To.getX() - 1].getY() > cellArray[From.getY() - 8][From.getX() - 1].getY()&& cellArray[To.getY() - 8][To.getX() - 1].getX() > cellArray[From.getY() - 8][From.getX() - 1].getX())
	//				{//tr
	//					removeTakenChecker(cellArray[To.getY() - 8][To.getX() - 1].getY()-1, cellArray[To.getY() - 8][To.getX() - 1].getX()-1);
	//				}
	//				else if (cellArray[To.getY() - 8][To.getX() - 1].getY() > cellArray[From.getY() - 8][From.getX() - 1].getY() && cellArray[To.getY() - 8][To.getX() - 1].getX() < cellArray[From.getY() - 8][From.getX() - 1].getX()) {
	//					//tl
	//					removeTakenChecker(cellArray[To.getY() - 8][To.getX() - 1].getY() - 1, cellArray[To.getY() - 8][To.getX() - 1].getX() + 1);
	//				}
	//				else if (cellArray[To.getY() - 8][To.getX() - 1].getY() < cellArray[From.getY() - 8][From.getX() - 1].getY() && cellArray[To.getY() - 8][To.getX() - 1].getX() < cellArray[From.getY() - 8][From.getX() - 1].getX()) {
	//					//bl
	//					removeTakenChecker(cellArray[To.getY() - 8][To.getX() - 1].getY() + 1, cellArray[To.getY() - 8][To.getX() - 1].getX() + 1);
	//				}
	//				else if (cellArray[To.getY() - 8][To.getX() - 1].getY() < cellArray[From.getY() - 8][From.getX() - 1].getY() && cellArray[To.getY() - 8][To.getX() - 1].getX() > cellArray[From.getY() - 8][From.getX() - 1].getX()) {
	//					//br
	//					removeTakenChecker(cellArray[To.getY() - 8][To.getX() - 1].getY() + 1, cellArray[To.getY() - 8][To.getX() - 1].getX() -1);
	//				}
	//				

	//				// if u can take twice
	//			 if (To.getY() + 2 + To.getX() + 2 < 17 || To.getY() - 2 + To.getX() - 2 > 1 || (To.getY() - 2 > 0 && To.getX() + 2 < 9) || (To.getX() - 2 > 0 && To.getY() + 2 < 9)
	//					&& (cellArray[To.getY() - 8-1][To.getX() - 1+1].isBlackChecker() && cellArray[To.getY() - 8 - 2][To.getX() - 1 + 2].isEmptyChecker())||(cellArray[To.getY() - 8 - 1][To.getX() - 1 - 1].isBlackChecker() && cellArray[To.getY() - 8 - 2][To.getX() - 1 - 2].isEmptyChecker())
	//					||(cellArray[To.getY() - 8 + 1][To.getX() - 1 - 1].isBlackChecker() && cellArray[To.getY() - 8 + 2][To.getX() - 1 - 2].isEmptyChecker())||
	//					(cellArray[To.getY() - 8 + 1][To.getX() - 1 + 1].isBlackChecker() && cellArray[To.getY() - 8 + 2][To.getX() - 1 + 2].isEmptyChecker()))
	//				{//if not bigger than 16 and not smaller than 2 or if not smaller than 1 and not bigger than 8
	//					//than all taking possibilities(tr, tl, bl, br)


	//				}
	//		}
	//	}
	//	else
	//	{
	//		cout << "Error with Input of Coordinates";
	//		exit(-1);
	//	}
	//}

	/*void inspectAndDoMoveBlack(Coordinate From, Coordinate To) {

	}*/

	void doMove(Move move) {
		//send checker to Cell and the Cell should recieve checker and replatece, while the first Cell should have NOCHECKER
		cellArray[To.getX() - 1][To.getY() - 8].recieve(cellArray[From.getX() - 1][From.getY() - 8].send());
		cellArray[From.getX() - 1][From.getY() - 8].removeChecker();

	}

	void removeTakenChecker(int x, int y) {
		//add how to calculate it also
		cellArray[x - 1][y - 8].removeChecker();
	}
	 
	


	void initializeGame() {
		

		

		//Cells
		
			for (int i = 0; i < 8;i=i+2) {
				for (int j = 0; j < 8; j=j+2)
				{
					cellArray[i][j] = Cell(8 - i, j + 1, ConstantSet::COLOR_BLACK);
					cellArray[i][j + 1] = Cell(8 - i , j + 2, ConstantSet::COLOR_WHITE);

				}
			}
			//lines when starting with Black Cell

			for (int i = 1; i < 8; i = i + 2) {
				for (int j = 0; j < 8; j = j + 2)
				{
					cellArray[i][j] = Cell(8 - i, j + 1, ConstantSet::COLOR_WHITE);
					cellArray[i][j + 1] = Cell(8 - i , j + 2, ConstantSet::COLOR_BLACK);

				}
			}
			//lines when starting with White Cell

			//Checkers
			//Black
			
				for (int b = 0; b < 8;b=b+2) {
					cellArray[0][b].setSymbol(ConstantSet::COLOR_BLACK);
				}
				for (int b = 0; b < 8; b = b + 2) {
					cellArray[2][b].setSymbol(ConstantSet::COLOR_BLACK);
				}
				
				for (int b = 1; b < 8; b = b + 2) {
					cellArray[1][b].setSymbol(ConstantSet::COLOR_BLACK);
				}
				//White
				for (int b = 1; b < 8; b = b + 2) {
					cellArray[5][b].setSymbol(ConstantSet::COLOR_WHITE);
				}

				for (int b = 1; b < 8; b = b + 2) {
					cellArray[7][b].setSymbol(ConstantSet::COLOR_WHITE);
				}

				for (int b = 0; b < 8; b = b + 2) {
					cellArray[6][b].setSymbol(ConstantSet::COLOR_WHITE);
				}
				
			
	}

	void showTable() {

		for (int i = 0; i < 8; i++)
		{
			cout << i + 1 << setw(6);
			for (int j = 0; j < 8; j++)
			{//test different symbols
				
				if (cellArray[i][j].getSymbol() == 0 && cellArray[i][j].getColor() == ConstantSet::COLOR_WHITE) {
					cout << "W ";
				}
				else if(cellArray[i][j].getSymbol() == 0 && cellArray[i][j].getColor() == ConstantSet::COLOR_BLACK){
					cout << "B ";
				}
				else if (cellArray[i][j].getSymbol() == ConstantSet::COLOR_WHITE)
				{
					cout << "+ ";
				}
				else  if (cellArray[i][j].getSymbol() == ConstantSet::COLOR_BLACK)
				{
					cout << "- ";
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




	const Cell getACell(int y, int x) const  {
		return cellArray[y][x];
	}

	void removeOneFromWhiteCheckerCounter() {
		amountOfWhiteCheckers -= 1;
	}
	void removeOneFromBlackCheckerCounter() {
		amountOfBlackCheckers -= 1;
	}
private:
	unsigned short amountOfWhiteCheckers ;
	unsigned short amountOfBlackCheckers ;
	Cell cellArray[8][8]; 

	
};