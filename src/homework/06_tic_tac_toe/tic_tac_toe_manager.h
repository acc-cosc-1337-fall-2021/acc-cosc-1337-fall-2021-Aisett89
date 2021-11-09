#include "tic_tac_toe.h"
#include<vector>

#ifndef TTTM_H
#define TTTM_H


class TicTacToeManager 
{
    private:
    std::vector<TicTacToe> games; // list of games and the games are of ttt type
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
    public:
    bool testing_function(int& o_wins, int& x_wins, int& ties);
    void get_winner_total(int& o_wins, int& x_wins, int& ties); // use references to get the winners
    void save_game( TicTacToe &games ); // add TicTacToe to games vector with push_back, call update_winner_count
    friend std::ostream& operator<<(std::ostream &out, const TicTacToeManager & manager); 
};

#endif