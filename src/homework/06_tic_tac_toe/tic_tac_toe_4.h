#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include <string>


#ifndef TTT_4_H
#define TTT_4_H

class TicTacToe4 : public TicTacToe
{
    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
    public:
        TicTacToe4(): TicTacToe(4){} // creates constructor: ttt4, hooks parent with value 4
        // when you create ttt4, it says "the value is 'this.'"
};
// 1. Create a class that inherits from TicTacToe.
// 2. Create a default constructor (no parameters).
//     a. Create an initializer to initialize TicTacToe with a value of 4.
// 3. Create private functions  check_column_win, check_row_win, and check_diagonal_win   
//     with no parameters that return a bool.
// 4)  Modify check_column_win, check_row_win, and check_diagonal_win  
//      to detect if game is over or board is full, (account for a vector of  16 (4x4 board))


#endif