//write include statements
#include "data_types.h"
#include<iostream>

// //write namespace using statement for cout
using namespace std;
using std::cout;
using std::cin;
using std::endl;

// 2) In the main function, write code to use the function multiply_numbers.

// a) Create an int variable named num.
// b) Use the cin object to capture a number from the keyboard, assign the number to num.
// c) Create an int variable name result, call the multiply_numbers with num as its parameter, 
//      assign the return value of the function multiply_numbers to the result variable, and display 
//      the result variable to the screen.    
// d) Create an int variable named num1, assign it the value 4.
// e) Call the function multiply_numbers with num1 as its parameter, assign its return value to the 
//      result variable, and display the result variable to screen.        

int main ()
{	
	int num1;
	cout<< "Type a number would you like to multiply: " <<endl;
	cin>> num1;
	int result;
	result = multiply_numbers(num1);
	cout << "The result is: " << result <<endl;
}
