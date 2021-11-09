// MAIN
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
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

int main() 
{
	string first_player;
	int choice;
	int t;
	int o;
	int x;

	TicTacToe TTT;
	TicTacToeManager TTTM;
	cout<<"\nHello! Welcome to Tic-Tac-Toe!\n";
	cout<<"\nWould you like to play a game?\n";
	cout<<"Type 1 to play or 2 to quit: ";
	cin>>choice;
	
	while ( choice == 1 )
	{
		cout<<"\nFirst player, type 'X' or 'O' to choose which you will play as: ";
		cin>>first_player;
		TTT.player_validation(first_player);
	// PLAY GAME //
		TTT.start_game(first_player); // drops first_player into start_game()
		// OVERLOADING //
		while ( TTT.game_over() != true )
		{
			cin >> TTT; // pass game instance to be ran. 
			cout << TTT; // output game results
		} 
	// END GAME FUNCTIONALITY //
		// Save game
		TTTM.save_game(TTT);
		TTTM.get_winner_total( x,  o,  t);

		cout<< "Testing function... " <<endl;
		TTTM.testing_function(x,  o,  t);
		
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