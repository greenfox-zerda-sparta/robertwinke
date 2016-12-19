/*
 * WordToolBox-test.cpp
 *
 *  Created on: Dec 19, 2016
 *      Author: robertwinke
 */



#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "WordToolBox.hpp"


TEST_CASE( "character count") {
  WordToolBox myWord("Tarzan's toenails");
  REQUIRE(myWord.countHowMany('a') == 3);
  REQUIRE(myWord.countHowMany('p') == 0);
}
TEST_CASE( "character count 2") {
  WordToolBox myWord("Me Tarzan, You Jane");
  REQUIRE(myWord.countHowMany('A') == 3);
}
TEST_CASE( "anagram test") {
  WordToolBox myWord("nag a ram");
  REQUIRE(myWord.isAnAnagram("an   Agram") == true);
  REQUIRE(myWord.isAnAnagram("") == false);
  REQUIRE_FALSE(myWord.isAnAnagram("sdgsfgfsg") == true);
}

TEST_CASE( "setString test") {
  WordToolBox myWord("nag a ram");
  myWord.setStringHeld("alma");
  REQUIRE("alma" == myWord.getStringHeld());
}
TEST_CASE( "getString test") {
  WordToolBox myWord("nag a ram");
  REQUIRE(myWord.getStringHeld() == "nag a ram");
}
