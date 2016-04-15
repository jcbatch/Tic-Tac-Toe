//
//  Boad.hpp
//  Tic Tac Toe
//
//  Created by James Batchik on 4/14/16.
//  Copyright © 2016 James Batchik. All rights reserved.
//
#ifndef Board_h
#define Board_h
#include <string>
#include <iostream>
#include <fstream>
using namespace std; 

const int NUM_ROWS = 3;
const int NUM_COLS = 3;

enum playerPos {
    xPos, yPos, Empty
};

enum gameResult {
    Win, Tie, Draw
};



class Board {
public:
    Board();
    Board(string player1Name, string player2Name);
    gameResult makeMove(int row, int col);
    
private:
    playerPos data[NUM_ROWS][NUM_COLS];
    playerPos playerToMove;
    
    
    
};

#endif
