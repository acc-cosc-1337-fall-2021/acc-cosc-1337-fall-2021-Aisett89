#include "for.h"
#include<iostream>

//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:



1
2
3
4
5

*/

void display_text(std::string str)
{
    std::cout<<str<<'\n';
    for(auto& ch: str)
    {
        std::cout<<ch<<"\n";
        ch = 'z';
    }
    std::cout<<str<<"\n";
}