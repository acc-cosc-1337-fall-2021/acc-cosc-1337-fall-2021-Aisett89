//h
#include <iostream>
#include <fstream>
#include "tic_tac_toe.h"
using std::ostream;
using std::istream;

#ifndef TicTacToe_Data_H
#define TicTacToe_Data_H

class Data : public TicTacToe
{
    private:
        std::string file_name{"games.data"};
    
    public:
    // Data(){} :TicTacToe ()
    std::vector<std::unique_ptr<TicTacToe>> & games;
    void save_games(const std::vector<std::unique_ptr<TicTacToe>> & games);
    std::vector<std::unique_ptr<TicTacToe>> get_games();
        
};
 
 #endif