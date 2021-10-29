//atm.h
#include "bank_account.h"

class ATM
{
    public:
        void display_balance();

    private:
        Account account; // composition.  <-- creates on instance of account
            // We have a class, and one of its memebers or variables is another class. 
};