#include "tic_tac_toe.h"
#include<iostream>
using std::cout; 
using std::cin; 
using std::string; 
using std::vector;



int main() 
{
int choice;
string first_player;
int position;

	TicTacToe TTT;
	cout<<"\nHello! Welcome to Tic-Tac-Toe!\n";
	cout<<"\nWould you like to play a game?\n";
	cout<<"Type 1 to play or 2 to quit: ";
	cin>>choice;

	while (choice == 1)
	{
		
			cout<<"\nFirst player, type 'X' or 'O' to choose which you will play as: ";
			cin>>first_player;

			TTT.start_game(first_player); // drops first_player into start_game()
			TTT.display_board(); // shows initial board <-- should be clear.
			do{
				
				cout<<"Specify which space you would like to play by type a number (1-9) or type 0 to exit: ";
				cin>>position;
				TTT.mark_board(position); // <-- marks X or O depending on player.

				TTT.display_board(); // <-- shows updated board.

			} while ( TTT.game_over() != true );

			cout<<"Great game! Would you like to play again?\n";
			cout<<"Type '1' to play again or Type '2' to quit: ";
			cin>>choice;
	}
	if ( choice == 2 )
	{
		cout<<"Thanks for playing!\n";
	}
	return 0;
}