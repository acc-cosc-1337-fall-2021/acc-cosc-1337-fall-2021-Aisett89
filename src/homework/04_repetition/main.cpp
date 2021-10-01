//write include statements
#include"dna.h"
using std::cout; using std::cin; using std::string; 

//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int num;
	int num2;
	int options;
	string exit_question;


	cout<<"Hello there!\n";

	while ( ( options != 1 ) || ( options != 2 ) || ( options != 3 ) )
	{
		cout<<"\nType 1 for factorial\n";
		cout<<"Type 2 for Greatest Common Divisor\n";
		cout<<"Type 3 to exit\n";
		cout<<"\nType your answer here: ";
		cin>>options;	

		
		if (options == 1) 
		{
			cout<< "\n- - - - - - " << "\n";
			cout<<"\nWhat number would you like to factorialize the crap out of? ";
   			cin>>num;
			factorial(num);
			return 0;
		} 
		
		else if (options == 2){

		cout<< "\n- - - - - - " << "\n";
		cout<<"\nLet's start divising!\n";
		
		cout<<"\nLet's just enter the first number: ";
		cin>>num;
		cout<<"\nEnter the second number: ";
		cin>>num2;
		gcd(num,num2);
		return num;
		} 
		
		else if (options == 3) 
		{

			cout<<"\nAre you sure you want to exit?\n\nType 'y' to exit.\nType 'n' to go to main menu.";
			cout<<"\nType your answer here: ";
			cin>>exit_question;

			while ( ( exit_question != "y" ) || ( exit_question != "n" ) )
			{
	
				if (exit_question == "y") 
				{
					exit_question = "y";
					cout<<"Goodbye!"<<"\n";
					return 0;
				}
				else if (exit_question == "n"){
					exit_question = "n";
					cout<<"\nGreat! Let's give it another go!\n";
					break;

				} 
				
				else 
				{
					cout<<"\n*Redirected to main menu*\n";
					break;
				}
			}
		}
		else 
		{	
		cout<<"\nType your answer here: ";
		cin>>options;
		}
	}
	return 0;

}
