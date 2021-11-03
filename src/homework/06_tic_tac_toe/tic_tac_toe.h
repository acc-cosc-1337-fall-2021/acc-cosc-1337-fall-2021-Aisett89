<<<<<<< HEAD

=======
>>>>>>> 9b3604e1085377570d4ff6d1d4875f4daaacac64
#include<iostream>
#include <vector>
using std::string;
using std::vector;

class TicTacToe
{
    public:
<<<<<<< HEAD

        string get_player() const; 

=======
>>>>>>> 9b3604e1085377570d4ff6d1d4875f4daaacac64
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        void display_board() const;
<<<<<<< HEAD

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

=======
        string get_player() const;
    private:
        string player;
        vector<string> pegs = vector<string>(9," ");
        bool check_board_full();
        void clear_board();
        void set_next_player();
};
>>>>>>> 9b3604e1085377570d4ff6d1d4875f4daaacac64
