//write include statements
#include "dna.h"
#include<iostream>
//write using statements
using std::cout; using std::cin; using std::string; 

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string dna;
	
	auto exit_confirmation = 'y';
	
	do{
		auto user_input = 3;
		cout<<"\n ***MAIN MENU ***\n"
		"\nType 1 for GC Content."<<
		"\nType 2 for DNA Compliment"<<
		"\nType 3 to exit.\n"
		"\nType number here: ";
		cin>>user_input;

		switch(user_input){
		case 1:
			cout<<"Type your content here: "; 
			cin>>dna;
			cout<<"\nYour content is: "<<get_gc_content(dna)<<"\n\n";
			break;

		case 2: 
			cout<<"Type your compliments here: "; 
			cin>>dna;
			cout<<"\nYour original is: "<<dna<<"\n";
			cout<<"\nYour reverse compliment is: "<<get_dna_complement(dna)<<"\n\n";
			break;
// Your complimentary dna code is: 
		case 3:
			cout<<"Are you sure you'd like to exit?\n"<<
			"Type answer here (y/n): ";
			cin>>exit_confirmation;
			if (exit_confirmation == 'y' || exit_confirmation == 'Y'){
				exit_confirmation = '\0';
			}

			else{
				exit_confirmation = 'y';
			}
			break;			
		default:
			cout<<"\nInvalid entry\n";
		}

	}while (exit_confirmation == 'y');
	

	return 0;
}