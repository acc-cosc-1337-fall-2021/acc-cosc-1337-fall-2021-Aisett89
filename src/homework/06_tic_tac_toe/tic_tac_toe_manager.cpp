#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include <iostream>
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
using std::make_unique;
using std::vector;
using std::string;
using std::string;
using std::ostream;
using std::istream;
using std::cout;
using std::cin;

//cpp

TicTacToeManager::TicTacToeManager(Data d): data(d)
{
    games = data.get_games();
    for (auto &game :games )
    {
        update_winner_count(game->get_winner());
    }
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe>& game)
{
    update_winner_count(game->get_winner());
    games.push_back(std::move(game));
}

void TicTacToeManager::update_winner_count(std::string winner)
{
    if(winner == "X")
    {
        x_wins++;
    }
    else if(winner == "O")
    {
        o_wins++;
    }
    else
    {
        ties++;
    }
}

void TicTacToeManager::get_winner_total(int& o, int& x, int&t)
{
    o = o_wins;
    x = x_wins;
    t = ties;
}

std::ostream& operator<<(std::ostream & out, const TicTacToeManager & manager)
{
    for(auto& game: manager.games)
    {
        out<<*game<<"\n";
    }

    return out;
}


TicTacToeManager::~TicTacToeManager() 
{
    data.save_games(games);
}