//bank_account.h
#include <iostream>
#include <vector>
#include <map>



class Account
{

public: 
    // Account(int b) : balace(b){} // constructor
    int get_balance();

private:
    int balance{0};  // initialize to zero.

};

// To make things simple, you can look at OOP as just one giant filing system. 

// Desktop, for instance, is the God-class in this situation. 
    // -- Show desktop displayed with only three files. 
        //  File 1
        //  File 2
        //  File 3
// So let's write this out as we go... 

class Desktop // this constructs the class?
{
    protected:

        virtual int open_file();
}; // note the " ; " at the end there. It will get you every time. It's dumb.

class Account 
{
    public:
        Account(int b) : balance(b){} // <—- Constructor. 
        int get_balance();
    private:
        int balance{0}; // initialize to zero.
};


class Excel
{   
    int value;
    Excel();
    Excel excel()
    {
        float calculate_budget( float &expenses);

//             map<pair<int,string> , long> mp; 
//  mp.insert(make_pair(make_pair(2,"me"),123456789); 
            std::map<std::string value_name, int amount, int date, int monthly_total, float annual_total> *expenses; // list of  
                                                            // ^- needs " / " with four loop when printing 
                                                            // ^- needs seeking function to  sort by months/days/years with four loop when printing 
            bool add_expense(); // adds pairs to map. do {} while
            int file_taxes(); // input will be records to be stored in a file. 
            std::vector<std::string> *Records; // organize files to be alphabetical or chornological ( read_file )
    }
};

// void geeks()
// {
//     int var = 20; 
      
//     // declare pointer variable    
//     int *ptr; 
      
//     // note that data type of ptr and var must be same
//     ptr = &var;    
  
//     // assign the address of a variable to a pointer
//     printf("Value at ptr = %p \n",ptr);
//     printf("Value at var = %d \n",var);
//     printf("Value at *ptr = %d \n", *ptr);     
// }
  
// // Driver program

class File_2
{
    // Budget
    //
};
class File_3
{
    //photos
        // photo_1
        // photo_2
};

class USB_Port : public Desktop
{
    // public:

    // public:
    // // struct usb
    // {
    //     public:

    // };
};

// Inside of file one there will be some sort of content. Right, 

// Word and excel comparison. 

// Type a number to choose a file. 

// switch (int)
// {
//  1. file_1
//  2. file_2
//  3. File_3(protected) 
//              ^-- if protected, ask for password. 
//              ^-- set_password()
// }