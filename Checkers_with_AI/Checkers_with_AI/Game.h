#pragma once
#include <iostream>

#include "TurnController.h"
#include "CompositeRule.h"




class Game {

    ChekerTable checkerTable;
    
    CompositeRule compositeRule;
    TurnController turnController;

public:
    Game() {
    }

    void run() {
        checkerTable.initializeGame();
        checkerTable.showTable();

        while (true)
        {
            turnController.setTurnWhite();
            //readMove();
            Move move = Move(turnController.getCurrentTurnCheckerColor());
            cin >> move;
            

            compositeRule.validate(move, checkerTable);
            checkerTable.doMove(move);


            turnController.setTurnBlack();
        }
       
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

    /*void readMove() {
        Move move;
        cin >> move;
       
    }*/

   
    
};