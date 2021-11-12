#include "tic_tac_toe.h"
#include <iostream>
#include <vector>
#include <string>


#ifndef TTT_3_H
#define TTT_3_H

class TicTacToe3 : public TicTacToe
{
    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
    public:
        TicTacToe3(): TicTacToe(3){} // creates constructor: ttt3, hooks parent with value 3
        // when you create ttt3, it says "the value is 'this.'"
};
// friend ostream &operator<<( ostream &output, const TicTacToe &ttt) {
// output << ttt.pegs;
// return output;
// }

#endif