#pragma once
#include <iostream>

#include "Table.h"


using namespace std;

class Game {
public:
    Game() {}

//    void run() {
//        GameTable.initializeGame();
//        GameTable.showTable();
//
//        readMoveForWhite();
//        // Uncomment the lines below once the functions are defined
//        GameTable.inspectAndDoMoveWhite(move.getFrom(), move.getTo());
//
//        // readMoveForBlack();
//        // table.inspectAndDoMoveBlack();
//    }
//
//    void readMoveForWhite() {
//        cin >> move;
//    }
//
//    void readMoveForBlack() {
//        cin >> move;
//    }
//
//private:
//     Table GameTable;
    
    Move move;
};