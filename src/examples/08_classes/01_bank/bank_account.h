//bank_account.h
#include <iostream>
#include <stdlib.h> // for rand() function in get_begin_balance().
#include <time.h> // 

void deposit(int amount);

#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account 
{
public: 
    Account() : Account(0){get_begin_balance();} // synthesized default constructor (function)
    // can put a constuctor inside a constructor. This is called "Delegating Constructors"

    Account(int b) : balance(b){std::cout<<"constructor 2\n";} // constructor

    int get_balance() const; // restricts people from modifying the balance in the class.
        // We use this to protect the data and to protect ourselves from each other. 
        // If you know you're just returning a value, make it const. 
        // otherwise, make it regular function.

    void deposit(int amount);

    void withdraw(int amount);
    
private:
    int balance{0}; // initialize to zero
    void get_begin_balance();
};

#endif ACCOUNT_H

void display_account(Account account);
Account get_account();