/*
 * Fibonacci-test.cpp
 *
 *  Created on: Dec 19, 2016
 *      Author: robertwinke
 */


#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

#include "Fibonacci.hpp"

TEST_CASE( "first") {

  REQUIRE(fibNumb(0) == 0);

}

TEST_CASE( "second") {

  REQUIRE(fibNumb(1) == 1);

}
TEST_CASE( "third") {

  REQUIRE(fibNumb(2) == 1);

}
TEST_CASE( "fourth") {

  REQUIRE(fibNumb(3) == 2);

}
TEST_CASE( "fifth") {

  REQUIRE(fibNumb(5) == 5);

}
