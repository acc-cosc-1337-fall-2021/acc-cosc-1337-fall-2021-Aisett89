//bank_account.h
#include <iostream>
using std::string;

class Account
{

public: // access specifier
    Account() : Account(0){} // synthasized default constructor (function) <-- 
    Account(int b) : balance(b){}// empty cunio code block}
    int get_balance()const;
    // main cannot use balance....

    // Deposit
    void deposit(int amount); // from a test case, we should be able to call deposit

    void withdraw(int amount);

private:
    int balance{0}; // inintial zero.
    int cust_id;

};


// free function <-- functions from the first 4 weeks of class, that do not belong to a class
void display_account(Account account); // <-- a copy of the original, because it does not have the & sign.

Account get_account();