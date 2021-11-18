#include "bank_account.h"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	int choice;
	cout << " This is your Desktop. Inside it you have three files. " << endl;
	cout << " Choose a file by typing the desired file number and pressing [ Enter ]."<< endl;
	cin >> choice;


	do {
		switch (choice)
		{
		case 1: 
		// word docs & pdfs <-- only readable <-- lorem ipsum
					// ^-- readable/writable 
		case 2: 
			// Excel <-- file_2 = 2;

		case 3: // photo album <-- file_3 <-- only readable
			// int photo_album = 1;
		Excel
			int file_3
			
				// 	^-- if protected, ask for password. 
				//  ^-- set_password()
		}
	} while (choice != 0);

	return 0;
}