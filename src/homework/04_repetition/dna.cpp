//add include statements
#include<iostream>
#include "dna.h"

using std::cout; 
using std::cin; 
using std::string;
//add function(s) code here


string dna;

// Content
double get_gc_content(const string& dna)
{
    int c_count = 0; 
    int g_count = 0;
    double sum_count;
    double gc_content;   

    for (int i = 0; dna[i] != '\0'; i++)
    {
        if (dna[i] == 'c' || dna[i] == 'C')
        {
            c_count = c_count + 1;
        }
        else if (dna[i] == 'g' || dna[i] == 'G')
        {
            g_count = g_count + 1;
        }

    }
    sum_count = c_count + g_count;
    gc_content = sum_count / dna.length();

    return gc_content;
}

// Reverse
string reverse_string(string dna)
{
    int copier = dna.length();
    string new_dna;
    
    for(int i = copier-1; i >= 0; i--)
      new_dna.push_back(dna[i]);

    return new_dna;
}

// Compliment
string get_dna_complement(string dna)
{
    char ch1 = 'A';
    char ch2 = 'T';
    char ch3 = 'C';
    char ch4 = 'G';
    
    string dna_copy = dna;

    for (int i = 0; dna_copy[i]; ++i) 
    {
        if (dna_copy[i] == ch1){
        dna_copy[i] = ch2;
        } 
        else if (dna_copy[i] == ch2){
        dna_copy[i] = ch1;
        }
        else if (dna_copy[i] == ch3){
        dna_copy[i] = ch4;
        }    
        else if (dna_copy[i] == ch4){
        dna_copy[i] = ch3;
        }
    }

    string out_put = reverse_string(dna_copy);
   
    return out_put;
}
