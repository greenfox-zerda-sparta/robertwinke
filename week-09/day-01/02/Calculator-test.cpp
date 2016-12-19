/*
 * Calculator-test.cpp
 *
 *  Created on: Dec 19, 2016
 *      Author: robertwinke
 */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Calculator.hpp"


TEST_CASE( "empty sum") {
  Calculator calc;
  std::vector<int> nums;

  REQUIRE(calc.sum(nums) == 0);

}

TEST_CASE( "one element") {
  Calculator calc;
  std::vector<int> nums;
  nums.push_back(3);

  REQUIRE(calc.sum(nums) == 3);

}

TEST_CASE( "sum test") {
  Calculator calc;
  std::vector<int> nums (2,6);

  REQUIRE(calc.sum(nums) == 12);

}

