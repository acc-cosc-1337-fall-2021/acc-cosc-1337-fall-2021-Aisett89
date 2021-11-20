//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <fstream>
#include <utility>      
#include <string>
#include "math.h"
#include <vector>
#include <algorithm>
using std::vector;
using std::pair;
using std::string;
using std::make_pair;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::unique_ptr; // original
using std::make_unique; // copier
using std::ostream;
using std::istream;
using std::ifstream;
using std::ofstream;

void Data::save_games(const std::vector<std::unique_ptr<TicTacToe>> & games)
{
    ofstream out_file;
    out_file.open("games.data");

    for (auto &game :games)
    {
        for (auto peg : game->get_pegs())
        {
            out_file<<peg;
        }
        out_file<<game->get_winner()<< endl;
    }
}

vector<std::unique_ptr<TicTacToe>> Data::get_games()
{
    ifstream in_file;
    vector<unique_ptr<TicTacToe>>  games;
    vector<string> pegs;
    in_file.open("games.data");
    string line;
    while (getline(in_file, line))
    {
        for (int i = 0; i < line.size(); i++)
        {
            pegs.push_back(string(1, line[i]));
        }
        string winner = pegs[pegs.size()-1];
        unique_ptr<TicTacToe> game;
 
        if (pegs.size() ==9 )
        {
            game = make_unique<TicTacToe3> (pegs, winner);
        }
        else if (pegs.size() == 16)
        {
            game = make_unique<TicTacToe4> (pegs, winner);
        }
        games.push_back(std::move(game));
        pegs.clear();
    } 

    return games;
}