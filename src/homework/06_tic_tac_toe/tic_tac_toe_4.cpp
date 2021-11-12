#include "tic_tac_toe_4.h"



bool TicTacToe4::check_column_win()
{ // rearrange the board structure to fit 4x4
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
        { return true; }
    else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
        { return true; }
    else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
        { return true; }
    if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
        { return true; }
    else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
        { return true; }
    else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
        { return true; }
    else
        { return false; }
}

bool TicTacToe4::check_row_win()
{ // rearrange the board structure to fit 4x4
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
        { return true; }
    else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
        { return true; }
    else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
        { return true; }
    if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
        { return true; }
    else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
        { return true; }
    else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
     { return true; }
    else 
        { return false; }
}

bool TicTacToe4::check_diagonal_win()
{ // rearrange the board structure to fit 4x4
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
        { return true;}
    else if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] == "X")
        { return true; }
    else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
        { return true; }
    else if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] == "O")
        { return true; }
    else 
        { return false; }
}