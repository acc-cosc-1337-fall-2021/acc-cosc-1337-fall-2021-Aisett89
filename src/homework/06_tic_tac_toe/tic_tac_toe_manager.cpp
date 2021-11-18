#include "tic_tac_toe_manager.h"
#include <utility>
#include<memory>      
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <utility>
using std::make_pair;
using std::pair;
using std::endl;
using std::unique_ptr;
using std::vector;
using std::string;
using std::string;
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

void TicTacToeManager::save_game( unique_ptr<TicTacToe> &Tic_Tac )
{
    update_winner_count( Tic_Tac->get_winner() ); // Tic_Tac is ttt as variable being passed to get winner
    games.push_back( move(Tic_Tac) ); // Taking Tic_tac game and adding it to games vector
}       

void TicTacToeManager::get_winner_total(int& x, int& o, int& t) // I think this is all I have to do...?
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

ostream& operator<<( ostream & output, const TicTacToeManager &TTTM )
{
    for ( const auto /*pointer to *game */&game : TTTM.games ) // for each game in games, do something with one game. 
    { // passing by memory location to be able to modify values in the location? <-- saves compilation?? As about this. 
        output << *game << endl;    // display one-by-one, each game that was played. 
    }            // ^-- dereferencing for value (not the memory location.)
    return output;
}

bool TicTacToeManager::testing_function(int& o_wins, int& x_wins, int& ties)
{ // Validate that a player has won or not. 
    int x = x_wins; // extracting data from origin point
    int o = o_wins;
    int t = ties;
    bool returning_bool = false;
    while (returning_bool != true)
    {
        if ( x > 0 || o > 0 )
        {        
            cout<< "Yup." << endl;
                returning_bool = true;
        }
        else if ( t > 0)
        {
            cout << "Nah. It was a tie." << endl;
        }
        else
        { 
            cout<< "Nope." << endl;
            return returning_bool; 
        } 
    }
    return returning_bool;
}

