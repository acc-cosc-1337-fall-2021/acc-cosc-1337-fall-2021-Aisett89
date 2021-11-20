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
        TicTacToe4(std::vector<std::string> p, std::string win) : TicTacToe(p,win) {}
};


#endif 