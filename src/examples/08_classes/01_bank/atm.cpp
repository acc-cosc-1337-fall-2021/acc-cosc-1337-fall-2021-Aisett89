//atm.cpp
#include "atm.h"

using std::cout;



void ATM::display_balance()
{
    cout<<"Balance"<<account.get_balance()<<"\n";
    
}

void ATM::deposit(int amount)
{
    account.deposit(amount);    
    
}
        
void ATM::withdraw(int amount)
{
    account.deposit(amount);    
}