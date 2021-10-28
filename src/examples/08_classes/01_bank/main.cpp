#include "bank_account.h"
using std::cout;
using std::cin;


int main()
{
	srand(time(NULL));  // true random numbers
	// sending a different number each time, so that it makes a new number each time the program runs. 
	Account account;// first object
	Account account2(500); 
	
	
	cout<<account.get_balance()<<"\n"; // second object
	// cout<<account2.get_balance()<<"\n";

	// account.get_begin_balance(); // upfront does not work, because it is private and needed to be nested

	account.deposit(50); // second modified object 
	cout<<account.get_balance()<<"\n";

	// display_account(account2); // third object --> copy when passed in. 
	// cout<<account2.get_balance()<<"\n";

	Account account3 = get_account(); // 4th object
	// cout<<account3.get_balance()<<"\n";

	return 0;
}