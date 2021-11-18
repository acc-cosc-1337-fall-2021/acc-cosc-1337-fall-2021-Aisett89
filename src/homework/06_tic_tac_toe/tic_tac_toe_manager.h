#include "tic_tac_toe.h"
#include<vector>

#ifndef TTTM_H
#define TTTM_H


class TicTacToeManager 
{
    public:
    bool testing_function(int& o_wins, int& x_wins, int& ties);
    void get_winner_total(int& o_wins, int& x_wins, int& ties); // use references to get the winners
    void save_game( std::unique_ptr<TicTacToe> &Tic_Tac ); // add TicTacToe to games vector with push_back, call update_winner_count
    friend std::ostream& operator<<(std::ostream & out, const TicTacToeManager & TTTM); 
    private:
    std::vector<std::unique_ptr<TicTacToe>> games; // list of games and the games are of ttt type
    int o_wins = 0;
    int ties = 0;
    int x_wins = 0;
    void update_winner_count( std::string winner )
    {
        if ( winner == "X" ) 
           { ++x_wins; }
        else if ( winner == "O" ) 
           { ++o_wins; }
        else 
           { ++ties; }
    } 
};

// 2. Change save_game TicTacToe parameter to a unique_ptr of TicTacToe reference.
// 	a.  In save_game make sure update_winner_count is the first statement (Use -> instead of .  
//       	for get_winner).
// 	b.  In save_game change games.push_back, add the move statement to game variable.

void some_function();


#endif