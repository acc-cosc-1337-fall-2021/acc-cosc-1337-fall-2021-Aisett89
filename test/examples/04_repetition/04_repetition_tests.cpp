#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify content tests for hw-5", "verification") {
	REQUIRE(get_gc_content("AGCTATAG") == .375);
	REQUIRE(get_gc_content("CGCTATAG") == .50);
}
TEST_CASE("Verify reverse tests for hw-5", "verification") {
	REQUIRE(reverse_string("AAAACCCGGT") == "ACCGGGTTTT");
	REQUIRE(reverse_string("CCCGGAAAAT") == "ATTTTCCGGG");
}
TEST_CASE("Verify compliment tests for hw-5", "verification") {
	REQUIRE(get_dna_complement("AGCTATAG") == "GATATCGA");
	REQUIRE(get_dna_complement("CGCTATAG") == "GATATCGC");
}