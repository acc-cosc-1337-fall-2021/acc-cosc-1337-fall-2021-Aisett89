#include "bank_account.h"
using std::cout;

//  - - - - - - - Class functions  - - - - - - -
int Account::get_balance() const
{
    
    return balance;
}
// Free function <-- meaning, this deposit is not part of the account class yet. 
// We have to tell the compiler "make this part of the account class."
// Add the double colon " :: ", it will tell the compiler that it's a part of the class. 

void Account::deposit(int amount)
{
    if ( amount > 0 )
    {
        balance += amount;
    }
}

void Account::withdraw(int amount)
{
    if ( amount > 0 && amount <= balance )
    {
        balance -= amount;
    }
}

void Account::get_begin_balance()
{
    balance = rand() % 10000 + 1; // generates a number from 1 to 10000
}


//  - - - - - - - Free functions  - - - - - - -
void display_account(Account account) // <-- this is a copy of the data.
// void display_account(Account account) <-- // this is a copy of the data.
{
    account.deposit(100);
    cout<<"Function display account: "<<account.get_balance()<<"\n";
}

Account get_account() // <-- So void, int, etc. are all classes and what you're doing is creating those types of scenarios. 
{
    Account a(1000); // <-- creates a local placeholder that can copy data from other sources.
    return a;
}