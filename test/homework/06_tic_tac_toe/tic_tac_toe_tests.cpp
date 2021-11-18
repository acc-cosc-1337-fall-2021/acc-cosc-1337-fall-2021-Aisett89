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
int x;
int o;
int t;

TEST_CASE("Verify Test Configuration", "verification") 
{
    REQUIRE(true == true);
}

/* unique_ptr<TicTacToe> ttt; */
unique_ptr<TicTacToeManager> tttm;
// Check
TEST_CASE("Test second player set to O", "verification") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3> ();
    ttt->start_game("O");
        REQUIRE(ttt->get_player() == "O");
}
// Check
TEST_CASE("Test first player set to X", "verification") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3> ();
    ttt->start_game("X");
    REQUIRE(ttt->get_player() == "X");
}
// Check
TEST_CASE("3x3 - Test game over if 9 slots are selected", "verification") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
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
    
    // // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);   
}
// Check
TEST_CASE("3x3 - Test win by first column", "1st column winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
    ttt->start_game("X");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(2); // O
    
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(3); // O
    
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(5); // O
        REQUIRE(ttt->game_over() == (true)); 

    // // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("3x3 - Test win by second column", "2nd column winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
    ttt->start_game("X");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(5); // O's turn
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("3x3 - Test win by third column", "3rd column winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
    ttt->start_game("X");
    ttt->mark_board(3); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(6); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(9); // X's turn
     
    ttt->mark_board(4); // O's turn
        REQUIRE(ttt->game_over() == (true));

    // // TESTING 
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t); 
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("3x3 - Test win by first row", "1st row winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
    ttt->start_game("X");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(4); // O's turn
    
    ttt->mark_board(2); // X's turn
    
    ttt->mark_board(7); // O's turn

    ttt->mark_board(3); // X's turn
    
    ttt->mark_board(8); // O's turn
        REQUIRE(ttt->game_over() == (true)); 

    // // TESTING 
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("3x3 - Test win by second row", "2nd row winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
    ttt->start_game("X");
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(6); // X's turn
    
    ttt->mark_board(9); // O's turn
        REQUIRE(ttt->game_over() == (true)); 

    // // TESTING 
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("3x3 - Test win by third row", "3rd row winner : X") 
{ //
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
 
    ttt->start_game("X");
 
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(8); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(9); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 
    
    // cout<< "Is there a winner...? " << endl;
    // tttm->save_game( ttt );
    // tttm->get_winner_total( x,  o,  t  );
    //     REQUIRE(x == 1);
    //     REQUIRE(o == 0);
    //     REQUIRE(t == 0);
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
} 
// Check
TEST_CASE("3x3 - Test win diagonally from top left", "Top left diagonal winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
    ttt->start_game("X");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(3); // O
    
    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(2); // O
    
    ttt->mark_board(9); // X's turn
    
    ttt->mark_board(7); // ->
     REQUIRE(ttt->game_over() == (true)); 

    // TESTING 
//     cout<< "Is there a winner...? " <<endl;
// 	tttm->testing_function(x,  o,  t);
//         REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("3x3 - Test win diagonally from bottom left", "Bottom left diagonal winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
    ttt->start_game("X");
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(1); // O
    
    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(2); // O
    
    ttt->mark_board(3); // X's turn
    
    ttt->mark_board(4); // O
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING // 
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}

// Do
/* TEST_CASE ("3x3 - HW-08-Mod","Test TTTM and Get_Winner") // This one is a bust and I don't know why... 
{
    // Play at least 3 games 
    // Add the games to the TicTacToeManager class
    // test get winner total for correct tally 
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe3>();
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
    tttm->save_game(ttt); // once this takes effect, the ttt no longer points 
                         // because there is a vector in the manager... the vector references that unique pointer. 
    // update winner totals
    tttm->get_winner_total( x,  o,  t);
    cout<<"x wins: "<< x << endl;
    cout<<"o wins: "<< o << endl;
    cout<<"t wins: "<< t << endl;

    // - - - - - - - - - - - - - - - - 

    // Game 2: O wins
    ttt = make_unique<TicTacToe3>();

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
    ttt = make_unique<TicTacToe3>();

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

} */


// Check
TEST_CASE("4x4 - Test game over if 16 slots are selected", "verification") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

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
   
    ttt->mark_board(10); // O's turn
    
    ttt->mark_board(11); // X's turn
    
    ttt->mark_board(12); // O's turn
    
    ttt->mark_board(13); // X's turn
    
    ttt->mark_board(14); // O's turn
    
    ttt->mark_board(15); // X's turn

    ttt->mark_board(16); // O's turn
        REQUIRE(ttt->game_over() == true);
    
    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);   
}
// Check
TEST_CASE("4x4 - Test win by first column", "1st column winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("X");
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(16); // O's turn
    
    ttt->mark_board(9); // X's turn
    
    ttt->mark_board(6); // O's turn
    
    ttt->mark_board(13); // X's win
    
        REQUIRE(ttt->game_over() == true);
    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("4x4 - Test win by second column", "2nd column winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("X");
    ttt->mark_board(2); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(6); // X's turn
    
    ttt->mark_board(16); // O's turn
    
    ttt->mark_board(10); // X's turn
    
    ttt->mark_board(7); // O's turn
    
    ttt->mark_board(14); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("4x4 - Test win by third column", "3rd column winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("X");

    ttt->mark_board(3); // X's turn
    
    ttt->mark_board(4); // O's turn
    
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(16); // O's turn
    
    ttt->mark_board(11); // X's turn
    
    ttt->mark_board(8); // O's turn
    
    ttt->mark_board(15); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 

    // // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("4x4 - Test win by fourth column", "4st row winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("X");

    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(8); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(12); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(16); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("4x4 - Test win by first row", "2nd row winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("X");

    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(2); // X's turn
    
    ttt->mark_board(15); // O's turn
    
    ttt->mark_board(3); // X's turn
    
    ttt->mark_board(13); // O's turn
    
    ttt->mark_board(4); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("4x4 - Test win by second row", "3rd row winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("X");

    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(6); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(8); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("4x4 - Test win by third row", "Top left diagonal winner : X")
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("X");

    ttt->mark_board(5); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(6); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(7); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(8); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 

    // // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("Test win by fourth row", "4rd row winner : X") 
{ //
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();
    ttt->start_game("X");

    ttt->mark_board(9); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(10); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(11); // X's turn
    
    ttt->mark_board(3); // O's turn
    
    ttt->mark_board(12); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 

    // // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}
// Check
TEST_CASE("4x4 - Test win by fourth row", "Bottom left diagonal winner : X") 
{
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();
    ttt->start_game("X");

    ttt->mark_board(13); // X's turn
    
    ttt->mark_board(4); // O's turn
    
    ttt->mark_board(14); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(15); // X's turn
    
    ttt->mark_board(8); // O's turn
    
    ttt->mark_board(16); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 
     REQUIRE(ttt->game_over() == (true)); 
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
}

// Do
/*TEST_CASE ("4x4 - HW-08-Mod","Test TTTM and Get_Winner") // This one is a bust. I have no idea what the issue is. 
{
    // Play at least 3 games 
    // Add the games to the TicTacToeManager class
    // test get winner total for correct tally 
    unique_ptr<TicTacToe> ttt;
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("X");

    ttt->mark_board(13); // X's turn
    
    ttt->mark_board(4); // O's turn
    
    ttt->mark_board(14); // X's turn
    
    ttt->mark_board(1); // O's turn
    
    ttt->mark_board(15); // X's turn
    
    ttt->mark_board(8); // O's turn
    
    ttt->mark_board(16); // X's win
    
        REQUIRE(ttt->game_over() == (true)); 

    // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);
    // - - - - - - - - - - - - - - - - 
    // Game 2: O wins
    
    ttt = make_unique<TicTacToe4>();

    ttt->start_game("O");
    ttt->mark_board(13); // O's turn
    
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(14); // O's turn
    
    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(15); // O's turn
    
    ttt->mark_board(8); // X's turn
    
    ttt->mark_board(16); // O's win
    
        REQUIRE(ttt->game_over() == (true)); 


    // // TESTING //
    // cout<< "Is there a winner...? " <<endl;
	// tttm->testing_function(x,  o,  t);
    //     REQUIRE(tttm->testing_function(x,o,t) == true);

    // - - - - - - - - - - - - - - - - 
    // Game 3: Cat
    ttt = make_unique<TicTacToe4>();
    ttt->start_game("X");

    ttt->mark_board(1); // X's turn
    
    ttt->mark_board(2); // O's turn
    
    ttt->mark_board(3); // X's turn
    
    ttt->mark_board(5); // O's turn
    
    ttt->mark_board(4); // X's turn
    
    ttt->mark_board(6); // O's turn
    
    ttt->mark_board(7); // O's turn
    
    ttt->mark_board(9); // X's turn
   
    ttt->mark_board(10); // O's turn
    
    ttt->mark_board(11); // X's turn
    
    ttt->mark_board(12); // O's turn
    
    ttt->mark_board(13); // X's turn
    
    ttt->mark_board(14); // O's turn
    
    ttt->mark_board(15); // X's turn 
    
    ttt->mark_board(16); // X's turn - CAT
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

} */

//Instructions!
// To test the homework changes modify the tic_tac_toe_test.cpp file as follows:
// Change instances of
// TicTacToe board;
// to
// unique_ptr<TicTacToe> board (make sure to use make_unique to create an instance of TicTacToe3)
// change .notation to -> operator.

// TEST TICTACTOE4
// Create the same test cases that have been created for TicTacToe3:
// To test the TicTacToe4 board, use the TicTacToe3 test cases as guides to create the same tests for TicTacToe4.
// You must name the new test cases differently.
// To each test case name add 4 at the end.s
// Example:
// TEST_CASE("Test win by first column ",..
// Change to
// TEST_CASE("Test win by first column 4",.. 
// Make sure to add the new REQUIRE asserts to test the 4 x 4 matrix.