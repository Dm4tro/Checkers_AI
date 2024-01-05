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
            Move moveWhite = Move(turnController.getCurrentTurnCheckerColor());
            cout << "White ";
            cin >> moveWhite;
            

            if (!compositeRule.validate(moveWhite, checkerTable)) {
                cout << "Validate error";
                exit(-1);
            }
            checkerTable.doMove(moveWhite);
            checkerTable.showTable();
           
            if (checkerTable.isWhiteAWinner()) break;





            turnController.setTurnBlack();
            Move moveBlack = Move(turnController.getCurrentTurnCheckerColor());
            cout << "Black ";
            cin >> moveBlack;


            if (!compositeRule.validate(moveBlack, checkerTable)) {
                cout << "Validate error";
                exit(-1);
            }
            checkerTable.doMove(moveBlack);
            checkerTable.showTable();
           
            if (checkerTable.isBlackAWinner()) break;
            //damku
            //move damka+ rules
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