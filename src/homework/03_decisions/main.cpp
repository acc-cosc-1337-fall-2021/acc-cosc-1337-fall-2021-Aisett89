//write include statements
#include "decisions.h"

using std::cout;
using std::cin;
using std::string;


int main() 
{
	int options;
	int grade;
	
	cout<<"Welcome!\n"
	"\nType 1 to get your grade using and if statement."<<
	"\nType 2 to get your grade using a switch statement."<<
	"\nType 3 to exit.\n"
	"\nType number here: ";

	cin>>options;


	switch (options)
	{
		case 1:
			cout<<"Enter grade: ";
			cin>>grade;
			cout<<"You got letter: "<<get_letter_grade_using_if(grade)<<"\n";
			break;
		case 2:
			cout<<"Enter grade: ";
			cin>>grade;
			cout<<"You got letter: "<<get_letter_grade_using_switch(grade)<<"\n";
			break;
		case 3:
			cout<<"\nThanks for coming!\n";
			break;
		default:
			cout<<"\nThat's not a valid entry.\n";

	}
	return 0;
}
