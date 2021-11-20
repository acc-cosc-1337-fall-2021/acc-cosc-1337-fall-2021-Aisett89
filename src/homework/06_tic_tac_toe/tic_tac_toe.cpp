#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <utility>      
#include <string>
#include "math.h"
#include <vector>
#include <algorithm>
#include <fstream>
using std::vector;
using std::pair;
using std::string;
using std::make_pair;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;



bool TicTacToe::game_over()
{
    if(check_diagonal_win() || check_row_win() || check_column_win())
    {
        set_winner();
        return true;
    }
    else if (check_board_full())
    {
        player = "C";
        return true;
    }

    return false;
}

void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

std::string TicTacToe::get_player()const
{
    return player;
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player =  "X";
    }
}

bool TicTacToe::check_board_full()
{
    for(std::size_t i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
    }

    return true;
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
    {
        winner = "X";
    }
}

std::string TicTacToe::get_winner() const
{
    return winner;
}

bool TicTacToe::check_diagonal_win()
{
    return false;
}

bool TicTacToe::check_row_win()
{
    return false;
}

bool TicTacToe::check_column_win()
{
    return false;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    for(std::size_t i=0; i < game.pegs.size(); i+= sqrt(game.pegs.size()))
    {
        out<<game.pegs[i]<<"|"<<game.pegs[i+1]<<"|"<<game.pegs[i+2];
        
        if(game.pegs.size() == 16) {out<<"|"<<game.pegs[i+3];}
        
        out<<"\n";
    }    

    return out;
}

istream& operator >> ( istream& in, TicTacToe& game )
{
    auto position = 0;
    
    while( position < 1 || position > game.pegs.size() )
    {
        cout<<"Enter a position from 1-"<<game.pegs.size()<<": ";
        in>>position;
    }
    game.mark_board(position);

    return in;
}

// HW-10
