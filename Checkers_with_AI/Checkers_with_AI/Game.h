#pragma once
#include <iostream>

#include "Table.h"
#include "Move.h"


class Game {
    ChekerTable checkerTable;
    Move move;
    
public:
    Game() {
    }

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
};