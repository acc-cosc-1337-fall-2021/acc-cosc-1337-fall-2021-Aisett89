//write include statement for decisions header
#include "decisions.h"




//Write code for function(s) code here
char letter_a = 'A';
char letter_b = 'B';
char letter_c = 'C';
char letter_d = 'D';
char letter_f = 'F';
string letter_grade;
int grade;
int num;


string get_letter_grade_using_if(int grade)
{
	{

		if (grade >= 90 && grade <= 100)
		{
            letter_grade = "A";
			
		}
		else if (grade >= 80 && grade <= 89)
		{
            letter_grade = "B";
		}
		else if (grade >= 70 && grade <= 79)
		{
            letter_grade = "C";
		}
		else if (grade >= 60 && grade <= 69)
		{
             letter_grade = "D";
		}
		else if (grade <= 59)
		{
            letter_grade = "F";
		}
		else 
		{
			return "number is out of range.";

		}
	}
    return letter_grade;
}

string get_letter_grade_using_switch(int grade)
{
	switch (grade)
	{
		case 90 ... 100:
            return "A";			
			break;
		case 80 ... 89:
            return "B";
			break;
		case 70 ... 79:
			return "C";
			break;
		case 60 ... 69:
            return "D";
			break;	
		case 0 ... 59:
            return "F";
			break;
        default:
            return "invalid number.";
	}
}
