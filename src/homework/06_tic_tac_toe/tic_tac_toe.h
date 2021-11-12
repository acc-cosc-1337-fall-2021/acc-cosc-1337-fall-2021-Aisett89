#include <iostream>
#include <vector>
#include <string>


// what do these do? <-- I understand that they block off the code to protect them, but how/why?
#ifndef TTT_H 
#define TTT_H 

class TicTacToe 
{
    private:
        std::string player;
        std::string winner;
        int placeholder;
        bool check_board_full();
        void set_winner();
        void clear_board();
        void set_next_player();  
    protected:
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();
        std::vector<std::string> pegs;
    public:
        int size;
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
        TicTacToe(){}; // default 
        TicTacToe(int size) : pegs(size*size, " "){}; // this is what we're calling from 3/4 .h
};


#endif // This too. 
