//============================================================================
// Name        : week9day1.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>

using namespace std;
#include "Apple.hpp"

TEST_CASE( "getapple test") {
  Apple apple;

  REQUIRE(apple.getApple() == "apple");

}
