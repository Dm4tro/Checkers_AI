#pragma once
#include <iostream>


#include "CompositeRule.h"




class Game {
    Cheker
        
        
        checkerTable;
    Move move;
    CompositeRule compositeRule;

    
public:
    Game() {
    }

    void run() {
        checkerTable.initializeGame();
        checkerTable.showTable();

        readMoveForWhite();
        compositeRule.validate(move, checkerTable);
        // Uncomment the lines below once the functions are defined
        /*checkerTable.inspectAndDoMoveWhite(move.getFrom(), move.getTo());*/
        //& peredavaty po & // turnController 
        // move ask 1 by one
        // move have list if coordinates 
        // move taken checkers controlled by table
        //  
        // readMoveForBlack();
        // table.inspectAndDoMoveBlack();
    }

    void readMoveForWhite() {
        cin >> move;
    }

    void readMoveForBlack() {
        cin >> move;
    }
};