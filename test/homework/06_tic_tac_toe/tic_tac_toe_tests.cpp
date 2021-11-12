// TEST
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
#include <utility>
#include <string>
#include <memory>
using std::unique_ptr; // original
using std::make_unique; // copier
using std::endl;
using std::string;
using std::cout;
// class TicTacToeManager tttm;
// class TicTacToe ttt;
int x;
int o;
int t;

unique_ptr<TicTacToe> ttt;
unique_ptr<TicTacToeManager> tttm;

// Save game destroys memory area. 
// Recreate the object each time you're going to test it. 


TEST_CASE("Verify Test Configuration", "verification") 
{
    REQUIRE(true == true);
}

TEST_CASE("Test first player set to X", "verification") 
{
    
    ttt->start_game("X");
    REQUIRE(ttt->get_player() == "X");
}

TEST_CASE ("HW-08")
{
    // Play at least 3 games 
    // Add the games to the TicTacToeManager class
    // test get winner total for correct tally 
    
    // Game 1: X wins
    ttt->start_game("X");
    ttt->mark_board(1); // X's turn

    ttt->mark_board(2); // O's turn

    ttt->mark_board(4); // X's turn

    ttt->mark_board(3); // O's turn

    ttt->mark_board(7); // X's turn

    ttt->mark_board(5); // O's turn
    REQUIRE(ttt->game_over() == (true)); 
    // add game to vector   
    tttm->save_game(ttt);
    // update winner totals
    tttm->get_winner_total( x,  o,  t);
    cout<<"x wins: "<< x << endl;
    cout<<"o wins: "<< o << endl;
    cout<<"t wins: "<< t << endl;

    // - - - - - - - - - - - - - - - - 
    // Game 2: O wins
    ttt->start_game("O");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(5); // O's turn
        REQUIRE(ttt->game_over() == true);
    
    tttm->save_game(ttt);
	tttm->get_winner_total( x,  o,  t);
    cout<<"x wins: "<< x << endl;
    cout<<"o wins: "<< o << endl;
    cout<<"t wins: "<< t << endl;

    // - - - - - - - - - - - - - - - - 
    // Game 3: Cat
    ttt->start_game("X");
    ttt->mark_board(1); // X's turn

    ttt->mark_board(2); // O's turn

    ttt->mark_board(3); // X's turn

    ttt->mark_board(5); // O's turn

    ttt->mark_board(4); // X's turn

    ttt->mark_board(6); // O's turn

    ttt->mark_board(8); // X's turn

    ttt->mark_board(7); // O's turn

    ttt->mark_board(9); // X's turn
        REQUIRE(ttt->game_over() == true);

    tttm->save_game(ttt); 
	tttm->get_winner_total( x,  o,  t);
    cout<<"x wins: "<< x << endl;
    cout<<"o wins: "<< o << endl;
    cout<<"t wins: "<< t << endl;

    // TESTING 
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);


    //     unique_ptr<TicTacToe> ttt;

    // make_unique<TicTacToe3>();
    // ttt->start_game("X");
    // ttt->mark_board(7); // X's turn
    
    // ttt->mark_board(1); // O's turn
    
    // ttt->mark_board(8); // X's turn
    
    // ttt->mark_board(2); // O's turn
    
    // ttt->mark_board(9); // X's turn
    
    // ttt->mark_board(4); // O's turn
    //     REQUIRE(ttt->game_over() == (true)); 
    // // TESTING 
    
    // cout<< "Is there a winner...? " << endl;
    // tttm->save_game( ttt );
    // tttm->get_winner_total( x,  o,  t  );
    //     REQUIRE(x == 1);
    //     REQUIRE(o == 0);
    //     REQUIRE(t == 0);
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}

TEST_CASE("Test second player set to O", "verification") 
{
    unique_ptr<TicTacToe> ttt;
    ttt->start_game("O");
        REQUIRE(ttt->get_player() == "O");
}

TEST_CASE("Test game over if 9 slots are selected", "verification") 
{
    string first_player = "X";
    ttt->start_game(first_player);
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(3); // X's turn
    
    ttt->mark_board(5); // O's turn
    
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(6); // O's turn
    
    ttt->mark_board(8); // X's turn
    
    ttt->mark_board(7); // O's turn
    
    ttt->mark_board(9); // X's turn
        REQUIRE(ttt->game_over() == true);
    
    // TESTING //
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);   
}

TEST_CASE("Test win by first column", "1st column winner : X") 
{
    ttt->start_game("X");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(2); // O
    
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(3); // O
    
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(5); // O
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);
}

TEST_CASE("Test win by second column", "2nd column winner : X") 
{

    ttt->start_game("X");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(5); // O's turn
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);
}

TEST_CASE("Test win by third column", "3rd column winner : X") 
{
    TicTacToe tictactoe;
    tictactoe.start_game("X");
    tictactoe.mark_board(3); // X's turn
    
    tictactoe.mark_board(1); // O's turn
    
    tictactoe.mark_board(6); // X's turn
    
    tictactoe.mark_board(2); // O's turn
    
    tictactoe.mark_board(9); // X's turn
     
    tictactoe.mark_board(4); // O's turn
        REQUIRE(tictactoe.game_over() == (true));

    // TESTING 
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t); 
        REQUIRE(tttm->testing_function(x,o,t) == true);
}

TEST_CASE("Test win by first row", "1st row winner : X") 
{
    TicTacToe ttt;
    ttt.start_game("X");
    ttt.mark_board(1); // X's turn
    
    ttt.mark_board(4); // O's turn
    
    ttt.mark_board(2); // X's turn
    
    ttt.mark_board(7); // O's turn

    ttt.mark_board(3); // X's turn
    
    ttt.mark_board(8); // O's turn
        REQUIRE(ttt.game_over() == (true)); 

    // TESTING 
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);
}

TEST_CASE("Test win by second row", "2nd row winner : X") 
{
    ttt->start_game("X");
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(6); // X's turn
    
    ttt->mark_board(9); // O's turn
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING 
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);
}

TEST_CASE("Test win by third row", "3rd row winner : X") 
{ //
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
    ttt->start_game("X");
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(8); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(9); // X's turn
    
    ttt->mark_board(4); // O's turn
        REQUIRE(ttt->game_over() == (true)); 
    // TESTING 
    
    cout<< "Is there a winner...? " << endl;
    tttm->save_game( ttt );
    tttm->get_winner_total( x,  o,  t  );
        REQUIRE(x == 1);
        REQUIRE(o == 0);
        REQUIRE(t == 0);
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);
} 

TEST_CASE("Test win diagonally from top left", "Top left diagonal winner : X") 
{
    ttt->start_game("X");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(3); // O
    
    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(2); // O
    
    ttt->mark_board(9); // X's turn
    
    ttt->mark_board(7); // ->
     REQUIRE(ttt->game_over() == (true)); 

    // TESTING 
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);
}

TEST_CASE("Test win diagonally from bottom left", "Bottom left diagonal winner : X") 
{
    
    ttt->start_game("X");
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(1); // O
    
    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(2); // O
    
    ttt->mark_board(3); // X's turn
    
    ttt->mark_board(4); // O
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    cout<< "Is there a winner...? " <<endl;
	tttm->testing_function(x,  o,  t);
        REQUIRE(tttm->testing_function(x,o,t) == true);
}

