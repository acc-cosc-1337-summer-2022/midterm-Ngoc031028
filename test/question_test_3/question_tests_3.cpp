#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test calculate tax class function"){
	
	Receipt receipt1(10,20);
	REQUIRE(receipt1.calculate_tax() == .80 );
	REQUIRE(receipt1.calculate_gratuity() == 2);
	
	Receipt receipt2(20,15);
	REQUIRE(receipt2.calculate_tax() == 1.60 );
	REQUIRE(receipt2.calculate_gratuity() == 3);

	Receipt receipt3(30,10);
	REQUIRE(receipt3.calculate_tax() == 2.40 );
	REQUIRE(receipt3.calculate_gratuity() == 3);

}
