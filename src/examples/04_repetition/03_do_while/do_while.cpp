#include"do_while.h"
#include<iostream>

using std::cout;
using std::cin;

//Write void function protype named prompt_user with no parameters

void display_menu()
{
    cout<<"1-Receivables";
    cout<<"2-Payables";
    cout<<"3-Payroll";
}

void receivables()
{
    cout<<"You are in Receivables module\n";
}
void payables()
{
   cout<<"You are in Paybles module\n";
}
void payroll()
{
   cout<<"You are in Payroll module\n";
}

//Write void function protype named run_menu with no parameters
void prompt_user()
    {
    
    auto choice = 'exit';
    do
    {
        auto menu_choice = 4;
        display_menu();
        cout<<"Enter a number that 1-4: ";
        std::cin>>menu_choice;
    
    switch (menu_choice)
    {
    case 1: receivables();
                    break;
    case 2:    payables();
                    break;    
    case 3:     payroll();
                    break;
    case 4:
    cout<<"Type 'exit' to exit\n";
    std::cin>>choice;
    break;
    default:
        cout<<"Invalid Choice";
        break;
    
    }
    
    }
     while (choice == 'exit');
    
}

