#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Verify Game")
{
	TicTacToe ttt;
	string first_player = "X";
	int position;
	int arr[9] = {1,2,3,4,5,7,6,9,8};
	int counter;
	void start_game(string first_player);
	ttt.display_board();
	do
	{
		for (counter = 0; counter < 9; counter++)
		{
			position = arr[counter];
			ttt.mark_board(position);
			ttt.display_board();
		}
		if ( counter < 9)
		{
			REQUIRE(ttt.game_over() == false);
		}
		else
		{
			REQUIRE(ttt.game_over() == true);
		}
	} while ( ttt.game_over() != true );
}