#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <utility>      
#include <string>
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
    output<<TTT.pegs[0]<<" | "<<TTT.pegs[1]<<" | "<<TTT.pegs[2]<<"\n";
    output<<TTT.pegs[3]<<" | "<<TTT.pegs[4]<<" | "<<TTT.pegs[5]<<"\n";
    output<<TTT.pegs[6]<<" | "<<TTT.pegs[7]<<" | "<<TTT.pegs[8]<<"\n";
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
        cout<<"\nCongrats, "<<winner<<"! You won!\n";
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
bool TicTacToe::check_column_win()
{
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
bool TicTacToe::check_row_win()
{
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
    else if (player == "O")
        { winner = "X"; }
}
// string TicTacToe::player_validation(string &prompt)
// {

//     while(prompt != "X" && prompt != "O")
//     {
//         cout<<"\nDon't forget to use uppercase X or O.\n";
//         std::cin.clear();
//         std::cin.ignore(10000, '\n');
//         cout<<"Please select X or O: ";
//         cin>>prompt;
//     }
//     return prompt;
// }