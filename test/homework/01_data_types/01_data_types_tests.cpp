#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"

// *** Instructions ***

// 1)	Find the folder test/homework/01_data_types.  In this folder:

	// a)	Find the file 01_data_types_tests.cpp, 
	//      Create a Test Case Named Test Multiply Numbers. 

	// b) 	Create an assertion using the REQUIRE function to verify that calling the multiply_numbers function with parameter 10
	//      returns the value 50.

	// c) Create an assertion using the REQUIRE function to verify that calling the multiply_numbers function with parameter 2
	//      returns the value 10.



TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify multiply_numbers function") 
{
	REQUIRE(multiply_numbers(5) == 25); 
	REQUIRE(multiply_numbers(10) == 50);
}
