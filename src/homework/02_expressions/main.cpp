//write include statements
#include "hwexpressions.h"
#include<iostream>

//write namespace using statement for cout
using namespace std;
using std::cout;
using std::cin;

int main()
{
//  a) Create double variables named meal_amount, tip_rate, tip_amount, tax_amount, and total.	

	double meal_amount; 
	double tip_rate;
	double tip_amount;
	double tax_amount; 
	double total;

//  b) Use the cin object to capture the number from the keyboard, assign the number to meal_amount.

	std::cout<<"\nEnter meal amount: ";
	std::cin>>meal_amount;

//  c) Call the get_sales_tax_amount with meal_amount as its parameter, assign the return value of 
//     the function get_sales_tax_amount to the tax_amount variable. 

	tax_amount = get_sales_tax_amount(meal_amount);

//  d) Capture the tip rate from keyboard and assign the value to tip_rate variable.

	std::cout<<"\nPlease enter the tip percentage you would like to leave your serving staff in decimal" 
		       "form (E.g. '.2' = 20%).\nEnter tip percentage here: ";
	std::cin>>tip_rate;

//  e) Call the function get_tip_amount with meal_amount and tip_rate as its parameters, 
//      set function get_tip_amount return value to tip_amount.
	tip_amount = get_tip_amount(meal_amount, tip_rate);

//  f)  Add tip_amount, tax_amount and meal_amount , and save result to total variable.

	total = (tip_amount + tax_amount + meal_amount);

//  g) Display a receipt (formatting the number decimal spaces is optional): 
//      Meal Amount:           20.00
//      Sales Tax:              1.35       
//      Tip Amount:             3.00
//      Total:                 24.35

	std::cout<<"Meal Amount:\t"<<meal_amount<<"\n";
	std::cout<<"Sales Tax:\t"<<tax_amount<<"\n";
	std::cout<<"Tip Amount:\t"<<tip_amount<<"\n";
	std::cout<<"Total:\t\t"<<total<<"\n";

	return 0;
}
