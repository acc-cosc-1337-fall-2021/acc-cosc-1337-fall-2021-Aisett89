#include "tic_tac_toe.h"
#include<iostream>
using std::cout; 
using std::cin; 
using std::string; 
using std::vector;


void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::clear_board()
<<<<<<< HEAD
    { pegs[0,8] = " "; }
=======
{
    pegs[0,8] = " ";
}
>>>>>>> 9b3604e1085377570d4ff6d1d4875f4daaacac64

void TicTacToe::display_board() const
{
        cout<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<"\n";
        cout<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<"\n";
        cout<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<"\n";
}

void TicTacToe::mark_board(int position)
{
    if (player == "X" || player == "x")
<<<<<<< HEAD
    { 
        cout<<"\nPlayer 'X's Turn \n"; 
    }
    else
    {
        player = "O"; 
=======
    {
        cout<<"\nPlayer 'X's Turn \n";
    }
    else
    {
        player == "O";
>>>>>>> 9b3604e1085377570d4ff6d1d4875f4daaacac64
        cout<<"\nPlayer 'O's Turn \n";
    }

    int board = position - 1;
    pegs[board] = player;

    set_next_player();
}

string TicTacToe::get_player() const
{
    return player;
}

void TicTacToe::set_next_player()
{
    if ( get_player() == "X")
<<<<<<< HEAD
        { player = "O"; }
    else
        { player = "X"; }
=======
         player = "O";
    else
        player = "X";
>>>>>>> 9b3604e1085377570d4ff6d1d4875f4daaacac64
}

bool TicTacToe::check_board_full() 
{ 
    for( auto peg : pegs ) 
    { 
        if (peg == " ") 
<<<<<<< HEAD
        { return false; } 
=======
        { 
            return false; 
        } 
>>>>>>> 9b3604e1085377570d4ff6d1d4875f4daaacac64
    } 
    return true; // nice
}

bool TicTacToe::game_over()
{
    bool game_condition;
    game_condition = check_board_full();
<<<<<<< HEAD

    if ( check_column_win() == true || check_row_win() == true ||  check_diagonal_win() == true )
    {
        set_winner(); 
        cout<<"\nCongrats, "<<winner<<"! You won!\n";
        game_condition = true;
    }

    return game_condition;
}

bool TicTacToe::check_column_win()
{
    if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
        { return true; }
    else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
        { return true; }
    else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
        { return true; }
    if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
        { return true; }
    else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
        { return true; }
    else if (pegs[2] == "O" && pegs[5] == "X" && pegs[8] == "O")
        { return true; }
    else
        { return false; }
}


bool TicTacToe::check_row_win()
{
    if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
        { return true; }
    else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
        { return true; }
    else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
        { return true; }
    if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
        { return true; }
    else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
        { return true; }
    else if (pegs[6] == "O" && pegs[7] == "X" && pegs[8] == "O")
     { return true; }
    else 
        { return false; }
}

bool TicTacToe::check_diagonal_win()
{
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

void TicTacToe::set_winner()
{
    if (player == "X")
        { winner = "O"; }
    else 
        { winner = "X"; }
}
=======
    return game_condition;
}
>>>>>>> 9b3604e1085377570d4ff6d1d4875f4daaacac64
