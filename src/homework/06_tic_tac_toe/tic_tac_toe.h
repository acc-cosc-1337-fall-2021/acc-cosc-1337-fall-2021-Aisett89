#include <iostream>
#include <vector>
#include <string>

// what do these do? <-- I understand that they block off the code to protect them, but how/why?
#ifndef TTT_H 
#define TTT_H 

class TicTacToe 
{
    public:
        std::string get_player() const; 
        std::string get_winner() const{ return winner; };
        // user_input <-- "call mark_board"
        friend std::istream& operator>>(std::istream &input, TicTacToe &ttt); // cin , ttt_object
        // display board. 
        friend std::ostream& operator<<(std::ostream &output, const TicTacToe &ttt); // I have no idea what I'm doing here. 
        bool game_over();
        void start_game(std::string first_player);
        void mark_board(int position);
        void display_board() const;
        std::string player_validation( std::string &prompt );
    private:
        std::string player;
        std::vector<std::string> pegs = std::vector<std::string>(9," ");
        std::string winner;
        bool check_board_full();
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
        void clear_board();
        void set_next_player();   
};


#endif // This too. 
