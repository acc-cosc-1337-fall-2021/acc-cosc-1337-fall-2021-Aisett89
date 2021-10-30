
// h file

#include<iostream>
#include <vector>
using std::string;
using std::vector;

class TicTacToe
{
    public:

        string get_player() const; 

        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        void display_board() const;

    private:

        string player;
        vector<string> pegs = vector<string>(9," ");
        string winner;

        bool check_board_full();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
        void clear_board();
        void set_next_player();
};
