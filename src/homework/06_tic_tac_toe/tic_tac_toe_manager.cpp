#include "tic_tac_toe_manager.h"
#include <utility>      
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
using std::make_pair;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::pair;
using std::string;
using std::ostream;
using std::istream;

void TicTacToeManager::save_game( TicTacToe &ttt ) 
{
    games.push_back( ttt ); // add game to games list
    update_winner_count( ttt.get_winner() ); // updating tally winner totals. 
}
void TicTacToeManager::get_winner_total(int& x, int& o, int& t) // I think this is all I have to do...?
{
    x = x_wins;
    o = o_wins;
    t = ties;
}
ostream& operator<<( ostream & output, const TicTacToeManager &TTTM )
{
    for ( auto game : TTTM.games ) // for each game in games, do something with one game. 
    {
        output << game << endl;    
    }
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

