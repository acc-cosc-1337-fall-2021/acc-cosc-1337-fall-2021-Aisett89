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

// 2. Make class variable pegs a protected variable, and change it to std::vector<std::string> pegs;
// 3) Make functions check_column_win, check_row_win, and check_diagonal_win protected virtual functions.
// 4. Modify the overloaded stream functions to work with TicTacToe 3 or 4



void TicTacToe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}
void TicTacToe::clear_board()
{ 
    for ( int i = 0; i < 9; i++ )
        pegs[i] = " ";
}
istream& operator>>(istream& input, TicTacToe & ttt) // cin , ttt_object
{  
    int position = 0;
    cout<<"Specify which space you would like to play by type a number (1-9): ";
    input>>position;
    ttt.mark_board(position); // <-- marks X or O depending on player.
    return input;
}

ostream& operator<<(ostream& output /*this is "cout" now */, const TicTacToe &TTT ) // displaying board. 
{
    if ( TTT.pegs.size() > 9)   
    {
    output<<TTT.pegs[0]<<" | "<<TTT.pegs[1]<<" | "<<TTT.pegs[2]<< TTT.pegs[3]<<"\n";
    output<<TTT.pegs[4]<<" | "<<TTT.pegs[5]<<" | "<<TTT.pegs[6]<< TTT.pegs[7]<<"\n";
    output<<TTT.pegs[8]<<" | "<<TTT.pegs[9]<<" | "<<TTT.pegs[10]<< TTT.pegs[11]<<"\n";
    output<<TTT.pegs[12]<<" | "<<TTT.pegs[13]<<" | "<<TTT.pegs[14]<< TTT.pegs[15]<<"\n";
    }
    else if ( TTT.pegs.size() < 10 ) 
    {
    output<<TTT.pegs[0]<<" | "<<TTT.pegs[1]<<" | "<<TTT.pegs[2]<< TTT.pegs[3]<<"\n";
    output<<TTT.pegs[4]<<" | "<<TTT.pegs[5]<<" | "<<TTT.pegs[6]<<TTT.pegs[7]<<"\n";
    output<<TTT.pegs[8]<<" | "<<TTT.pegs[9]<<" | "<<TTT.pegs[10]<<TTT.pegs[11]<<"\n";
    output<<TTT.pegs[12]<<" | "<<TTT.pegs[13]<<" | "<<TTT.pegs[14]<<TTT.pegs[15]<<"\n";
    }
    return output;
}
// void TicTacToe::display_board() const
// {
//         cout<<pegs[0]<<" | "<<pegs[1]<<" | "<<pegs[2]<<"\n";
//         cout<<pegs[3]<<" | "<<pegs[4]<<" | "<<pegs[5]<<"\n";
//         cout<<pegs[6]<<" | "<<pegs[7]<<" | "<<pegs[8]<<"\n";
// }
void TicTacToe::mark_board(int position)
{
    if (player == "X" || player == "x")
    { 
        player = "X";
        cout<<"\nPlayer 'X's Turn \n"; 
    }
    else
    {
        player = "O"; 
        cout<<"\nPlayer 'O's Turn \n";
    }

    int board = position - 1;
    pegs[board] = player;

    set_next_player();
}
void TicTacToe::set_next_player()
{
    if ( get_player() == "X")
        { player = "O"; }
    else
        { player = "X"; }
}
string TicTacToe::get_player() const
{
    return player;
}
bool TicTacToe::check_board_full() 
{ 
    for( auto peg : pegs ) 
    { 
        if (peg == " ") 
        { return false; } 
    }
    
    return true; // nice
}
bool TicTacToe::game_over()
{
    bool game_condition;
    game_condition = check_board_full();
   
    if ( check_column_win() == true || check_row_win() == true ||  
    check_diagonal_win() == true )
    {
        set_winner(); 
        cout<< "\nCongrats, " << winner << "! You won!\n";
        game_condition = true;
    
    }
    else if (check_board_full() == true )
    {

        winner = "C";
        cout<<"\n"<<winner<<"\n";
        game_condition = true;
    }
    return game_condition;
}
// ---
bool TicTacToe::check_column_win()
{
    { return false; }
}

bool TicTacToe::check_row_win()
{
    { return false; }
}

bool TicTacToe::check_diagonal_win()
{
    { return false; }
}
// ---
void TicTacToe::set_winner()
{
    if (player == "X")
        { winner = "O"; }
    else if (player == "O")
        { winner = "X"; }
}
