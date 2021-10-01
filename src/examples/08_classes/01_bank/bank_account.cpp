#include "bank_account.h"
#include<iostream>

int Account::get_balance() const
{
    // balance = 100000; // by mistake or because we want to, we can modify this. 
    // Accoring to this, whatever the balance return is, it will return it. 
    // Must add const to .h declaration and function in .cpp
    return balance;
}


// free function <-- not part of the Account class yet. unt "Account::deposit"
void Account::deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
    }

}

void Account::withdraw(int amount)
{
    if(amount > 0 && amount <= balance )
    {
        balance -=  amount;

    }
}

// - - - - - -- - - - - 
void display_account(Account account)
{
    account.deposit(100);
    std::cout<<"Function display account: "<<account.get_balance()<<"\n";
}

Account get_account()
{
    Account a(100);
    
}