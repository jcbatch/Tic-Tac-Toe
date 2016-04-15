//
//  gamePlay.cpp
//  Tic Tac Toe
//
//  Created by James Batchik on 4/15/16.
//  Copyright © 2016 James Batchik. All rights reserved.
//

#include "gamePlay.h"
#include "board.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main () {
    cout << "WELCOME TO TIC TAC TOE!" << endl << endl << "Press any key to continue: ";
    char continueChar;
    cin >> continueChar;
    cout << endl; 
    cout << "Enter 1 for a 1-player game or 2 for a 2-player game: ";
    int choice;
    cin >> choice;
    while (!cin.good() || (choice != 1 && choice != 2)) {
        cout << "Bad entry. Please input either 1 or 2 for one or two player game: ";
        cin.clear();
        cin >> choice;
    }
    if (choice == 1) {
        cout << "Computer play under construction-Sorry!" << endl;
    } else if (choice == 2) {
        cout << "Player 1, enter your name: ";
        string player1Name;
        cin >> player1Name;
        cout << "Player 2, enter your name: ";
        string player2Name;
        cin >> player2Name;
    }
    
    
    
    
    
    
    
}