#include "bank_account.h"
#include "atm.h"
using std::cout;
using std::cin;
using std::string;

int main()
{
	srand(time(NULL));  // true random numbers
	// sending a different number each time, so that it makes a new number each time the program runs. 
	Account account;// first object
	Account account2(500); 
	ATM atm;
	int amount;
	int choice = 0;
	
	
	cout<<account.get_balance()<<"\n"; // second object
	// cout<<account2.get_balance()<<"\n";

	// account.get_begin_balance(); // upfront does not work, because it is private and needed to be nested

	account.deposit(50); // second modified object 
	cout<<account.get_balance()<<"\n";

	// display_account(account2); // third object --> copy when passed in. 
	// cout<<account2.get_balance()<<"\n";

	Account account3 = get_account(); // 4th object
	// cout<<account3.get_balance()<<"\n";

	cout<<"Welcome to the ATM.";
	cout<<"\nType 1 for deposit.\nType 2 for withdraw.\nType 3 to see balance.\n";
	cout<<"Type 4 to exit.";
	cout<<"Type your answer here. ";
	cin>>choice;

	switch(choice)
	{
		case 1:
			cout<<"How much do you want to deposit? ";
			cin>>amount;
			atm.deposit(amount);
			 break;
		case 2:	
			cout<<"How much do you want to withdraw? ";
			cin>>amount;
			atm.withdraw(amount);
			break;
		case 3:
			cout<<"Your account balance is: ";
			atm.display_balance();
		case 4:
			break;
	default:
		cout<<"Something went wrong. ";
	};

	return 0;
}