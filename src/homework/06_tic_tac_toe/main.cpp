// MAIN
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <utility>      
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
using std::vector;
using std::pair;
using std::string;
using std::make_pair;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::make_unique;
using std::unique_ptr;



int main() 
{
	string first_player;
	int play_style;
	int choice;
	int t;
	int o;
	int x;

	unique_ptr<TicTacToe> TTT; 
	unique_ptr<TicTacToeManager> TTTM;

// 1.   Allow users to choose between a tic tac toe 3 or 4 game.
// Modify TicTacToe game (or whatever variable name you used), to unique_ptr to TicTacToe. (An instance of TicTacToe3 or 4 will be created in the next step)
// Prompt the user to play TicTacToe 3 or 4 (requires conditional to create correct instance)  In the conditional structure
// Create an instance (make_unique) of TicTacToe3 or 4 to manager.save_game
// For TicTacToe variable, change .notation to -> operator.


	cout<<"\nHello! Welcome to Tic-Tac-Toe!\n";
	cout<<"\nWould you like to play a game?\n";
	cout<<"\nType 3 for TicTacToe"<<endl;
	cout<<"\nType 4 for ConnectFour"<<endl;
	cin>>play_style;
	if ( play_style == 3 )
		{
			TTT = make_unique<TicTacToe3>(); // tells porgram that TTT is now the inherited class, TTT3.  
		}
	else if ( play_style == 4 )
		{
			TTT = make_unique<TicTacToe4>(); // tells porgram that TTT is now the inherited class, TTT4.  
		}
	cout<<"Type 1 to play or 2 to quit: ";
	cin>>choice;
	
	while ( choice == 1 )
	{
		cout<<"\nFirst player, type 'X' or 'O' to choose which you will play as: ";
		cin>>first_player;
		TTT->player_validation(first_player); // same as dot, but the relationship is different
		// . is working with original variable.
		// -> is working with copy. 
	// PLAY GAME //
		TTT->start_game(first_player); // drops first_player into start_game()
	// OVERLOADING //
		while ( TTT->game_over() != true )
		{
			cin >> *TTT; // pass game instance to be ran. 
			cout << TTT; // output game results
		} 
	// END GAME FUNCTIONALITY //
		// Save game
		TTTM->save_game(TTT);
		TTTM->get_winner_total( x,  o,  t);

		cout<< "Testing function... " <<endl;
		TTTM->testing_function(x,  o,  t);
		
		// reset player
		string first_player = ""; // canceling out the original player choice. 
		
		//reestablish choice
		cout<<"Great game! Would you like to play again?\n";
		cout<<"Type '1' to play again or Type '2' to quit: ";
		cin>>choice;		
	}
	// QUIT GAME
		if ( choice == 2 )
		{
			cout << TTTM << endl;
			cout<<"x wins: "<< x << endl;
			cout<<"o wins: "<< o << endl;
			cout<<"t wins: "<< t << endl;
			cout<<"\nThanks for playing!" << endl;
		}
		

	return 0;
}

