#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include <string>


#ifndef TTT_3_H
#define TTT_3_H

class TicTacToe3 : public TicTacToe
{
    private:
        bool check_column_win() override; // "override" <-- because it's a virtual function
        bool check_row_win() override; // "override" <-- because it's a virtual function
        bool check_diagonal_win() override; // "override" <-- because it's a virtual function 
    public:
        TicTacToe3(): TicTacToe(3){} // creates constructor: ttt3, hooks parent with size 3
                                    // when you create ttt3, it says "the value is 'this.'"
        TicTacToe3(std::vector<std::string> p, std::string win) : TicTacToe(p, win){}
};

#endif