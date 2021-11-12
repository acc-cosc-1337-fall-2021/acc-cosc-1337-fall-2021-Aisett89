
#include <vector>
#include <iostream>
#include<string>

using std::vector;

int main()
{
    vector<int> letters; // creates vector names letters
    


    letters.push_back(1); // pushing num 1 to position 0
    letters.push_back(2); // pushing num 2 to position 1 
    letters.push_back(3);// pushing num 3 to position 3

    for(auto l: letters)
    {
        std::cout<<l<<"\n";
    }

    vector<std::string> names {"mary", "joe", "jack"};

    for(auto name: names)
    {
        std::cout<<name<<"\n"; // print name line-by-line
    }

    vector<int> numbers (10, 5); // vector of ten 5's 

    for(auto number: numbers)
    {
        std::cout<<number<<"\n"; // print ten 5s line-by-line
    }

    return 0;
}

