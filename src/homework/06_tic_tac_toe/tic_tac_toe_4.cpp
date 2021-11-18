#include "tic_tac_toe_4.h"

// 4. From TicTacToe copy the code from  functions check_column_win, check_row_win, and 
//     check_diagonal_win to the functions in TicTacToe3.

bool TicTacToe4::check_column_win()
{ // rearrange the board structure to fit 4x4
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X" && pegs[12] == "X")
        { return true; }
    else if (pegs[1] == "X" && pegs[5] == "X" && pegs[9] == "X" && pegs[13] == "X")
        { return true; }
    else if (pegs[2] == "X" && pegs[6] == "X" && pegs[10] == "X" && pegs[14] == "X")
        { return true; }
    else if (pegs[3] == "X" && pegs[7] == "X" && pegs[11] == "X" &&pegs[15] == "X")
        { return true; }
    if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O" && pegs[12] == "O")
        { return true; }
    else if (pegs[1] == "O" && pegs[5] == "O" && pegs[9] == "O" && pegs[13] == "O")
        { return true; }
    else if (pegs[2] == "O" && pegs[6] == "O" && pegs[10] == "O" && pegs[14] == "O")
        { return true; }
    else if (pegs[3] == "O" && pegs[7] == "O" && pegs[11] == "O" && pegs[15] == "O")
        { return true; }
    else
        { return false; }
}

bool TicTacToe4::check_row_win()
{ // rearrange the board structure to fit 4x4
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X" && pegs[3] == "X")
        { return true; }
    else if (pegs[4] == "X" && pegs[5] == "X" && pegs[6] == "X" && pegs[7] == "X")
        { return true; }
    else if (pegs[8] == "X" && pegs[9] == "X" && pegs[10] == "X" && pegs[11] == "X")
        { return true; }
    else if (pegs[12] == "X" && pegs[13] == "X" && pegs[14] == "X" && pegs[15] == "X")
        { return true; }
    if (pegs[0] == "0" && pegs[1] == "0" && pegs[2] == "0" && pegs[3] == "0")
        { return true; }
    else if (pegs[4] == "0" && pegs[5] == "0" && pegs[6] == "0" && pegs[7] == "0")
        { return true; }
    else if (pegs[8] == "0" && pegs[9] == "0" && pegs[10] == "0" && pegs[11] == "0")
        { return true; }
    else if (pegs[12] == "0" && pegs[13] == "0" && pegs[14] == "0" && pegs[15] == "0")
        { return true; }
    else 
        { return false; }
}

bool TicTacToe4::check_diagonal_win()
{ // rearrange the board structure to fit 4x4
    if (pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X")
        { return true;}
    else if (pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X")
        { return true; }
    if (pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O")
        { return true;}
    else if (pegs[3] == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "O")
        { return true; }
    else 
        { return false; }
}