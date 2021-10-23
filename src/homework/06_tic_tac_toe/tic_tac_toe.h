#include<iostream>
#include <vector>
using std::string;
using std::vector;

class TicTacToe
{
    public:
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        void display_board() const;
        string get_player() const;
    private:
        string player;
        static vector <string> pegs;
        bool check_board_full();
        void clear_board();
        void set_next_player();
};
