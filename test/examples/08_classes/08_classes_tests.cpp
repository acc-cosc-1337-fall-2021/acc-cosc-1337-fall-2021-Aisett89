#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test account get balance (0 perameters)",)
{
	Account account; // create an object of Account in memory
	REQUIRE(account.get_balance()== 0);
}

TEST_CASE("Test account get balance (1 parameter)")
{
	Account account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("Test account deposit")
{
	Account account; 
	REQUIRE(account.get_balance()== 0);
	account.deposit(50);
	REQUIRE(account.get_balance() == 50);
} 

TEST_CASE("Test Account withdraw")
{
	Account account(100);
	REQUIRE(account.get_balance() == 100);
	
	account.withdraw(25);
	REQUIRE(account.get_balance() == 75);
}