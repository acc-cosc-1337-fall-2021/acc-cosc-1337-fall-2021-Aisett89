#include "expressions.h"
#include<iostream>
using namespace	std;
using std::cout;
using std::cin;


//example
// int add_numbers(int num1, int num2)
// {
// 	return num1 + num2;
// }

//write function code here

double get_sales_tax_amount(double meal_amount)
{
	double sales_tax_rate = .0675;
	double calculated_bill_total = (meal_amount * sales_tax_rate); 
	return calculated_bill_total;
}

// d) In file hwexpressions.cpp, write function code to multiply meal_amount and tip_rate, return their product.
double get_tip_amount(double meal_amount, double tip_rate)
{
	double total_with_tip = (meal_amount * tip_rate);
	return total_with_tip;
}

