#include "bank_account.h"
#include<iostream>

int main()
{

	string name;
	Account account(100);
	Account account2(500);

	std::cout<<account.get_balance()<<"\n";
	std::cout<<account2.get_balance()<<"\n";
	
	account.deposit(50);
	std::cout<<account.get_balance()<<"\n";

	display_account(account2);
	std::cout<<account2.get_balance()<<"\n";

	Account account3 = get_account();
	std::cout<<account3.get_balance()<<"\n";

	return 0;
}




