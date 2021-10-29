//atm.h
#include "bank_account.h"

#ifndef ATM_H
#define ATM_H



class ATM
{
    public:
        void display_balance();
        void deposit(int amount);
        void withdraw(int amount);

    private:
        Account account; // composition.  <-- creates on instance of account
            // We have a class, and one of its memebers or variables is another class. 
};

#endif