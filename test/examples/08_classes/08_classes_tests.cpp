#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// TEST_CASE("Test account get balance")
// {
// 	Account account;
// 	REQUIRE(account.getbalance(0) == 0);
// }

TEST_CASE("test account get balance with 1 parameter")
{
	Account account(100);
	REQUIRE(account.get_balance() == 100);
}

TEST_CASE("test account deposit with 1 parameter")
{
	Account account(100);
	REQUIRE(account.get_balance() == 100);
}