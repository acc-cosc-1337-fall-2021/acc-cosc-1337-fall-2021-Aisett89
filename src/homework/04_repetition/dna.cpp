//add include statements
#include<iostream>
#include<algorithm>
using std::cout; using std::cin; using std::swap;
// - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


// function 1
int factorial(int num)
{

    int counter = 1;
    int multiplier;
    int total = num;
    int stopper = ( num - 1 );

    cout << "Factorializing by "<< counter << " and "<< num << " = "<< total <<"\n";
    while ( counter < stopper ) 
    {
        multiplier = total * counter; 
        total = multiplier + total;

        if ( counter <= stopper )
        {
            counter = counter + 1;
        }
        cout << "Factorializing by "<< counter << " and " << multiplier << " = "<<total<<"\n";
    }
    cout << "Your summed factorialization is: " << total << "\n";
    
    return total;
}

// Function 2
int gcd(int num, int num2) 
{
	int dividend = num;
	int divisor = num2;

	
    
    if  ( num==0 || num2==0 ){ 
        dividend = 0;
        return 0;
    }
    else if (num != 0 || num2 == 0)
    {
        while( divisor != 0 )
            {
                int remainder = dividend % divisor;
                dividend = divisor;
                divisor = remainder;
            }
    }
    cout<<"Your GCD is: "<< dividend <<"\n";
	return dividend;
}