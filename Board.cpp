//
//  Boad.cpp
//  Tic Tac Toe
//
//  Created by James Batchik on 4/14/16.
//  Copyright © 2016 James Batchik. All rights reserved.
//

#include "Board.h"
#include <string>
#include <iostream>

using namespace std;

Board::Board(string player1Name, string player2Name) {
    cout << endl << "Good luck " << player1Name << "  and " << player2Name << "!" << endl << endl;
    
    // Sets array to all empty for beginning of game
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            data[i][j] = Empty;
        }
    }
    cout << "   |   |   " << endl;
    cout << "___________" << endl;
    cout << "   |   |   " << endl;
    cout << "___________" << endl;
    cout << "   |   |   " << endl << endl;
    
    
}