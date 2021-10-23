#include "tic_tac_toe.h"
#include<iostream>
using std::cout; 
using std::cin; 
using std::string; 
using std::vector;

vector<string> TicTacToe::pegs (9," ");


void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::clear_board()
{
    pegs[0,8] = " ";
}

void TicTacToe::display_board() const
{
        cout<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<"\n";
        cout<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<"\n";
        cout<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<"\n";
}

void TicTacToe::mark_board(int position)
{
    if (player == "X" || player == "x")
    {
        cout<<"\nPlayer 'X's Turn \n";
    }
    else
    {
        player == "O";
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
         player = "O";
    else
        player = "X";
}

bool TicTacToe::check_board_full() 
{ 
    for( auto peg : pegs ) 
    { 
        if (peg == " ") 
        { 
            return false; 
        } 
    } 
    return true; // nice
}

bool TicTacToe::game_over()
{
    bool game_condition;
    game_condition = check_board_full();
    return game_condition;
}
