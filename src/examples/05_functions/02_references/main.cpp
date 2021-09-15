#include<iostream>

using std::cout;
int main()
{
    auto value = 5;
    auto value2 = 1;
        cout<<"Memory address of value is: "<<&value<<"\n";
        cout<<"Value is: "<<value<<"\n";

        // reference variable
        auto &ref_value = value; // clone of value
        cout<<"Memory adress ref_value is storing: "<<&value<<"\n";
        cout<<"Value via ref_val: "<<ref_value<<"\n";

        // van you modify value via re_value

        ref_value = 10;
        cout<<"Value is: "<<value<<"\n";
        cout<<"Value via ref_value is: "<<ref_value<<"\n";
    return 0;
}