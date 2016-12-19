/*
 * WordToolBox.cpp
 *
 *  Created on: Dec 19, 2016
 *      Author: robertwinke
 */

#include <algorithm>
#include <cctype>
#include "WordToolBox.hpp"

WordToolBox::WordToolBox(std::string stringHeld): stringHeld(stringHeld){

}
std::string WordToolBox::getStringHeld() {
  return stringHeld;
}
void WordToolBox::setStringHeld(std::string newString) {
  stringHeld = newString;
}
bool WordToolBox::isAnAnagram(std::string stringToCheck) {
  std::string temp = toSmallerCaseNoWhiteSpace(stringHeld);
  stringToCheck = toSmallerCaseNoWhiteSpace(stringToCheck);

  if(temp == stringToCheck) {
    return true;
  }
  return false;
}
int WordToolBox::countHowMany(char charToFind) {
  charToFind = tolower(charToFind);
  int sum = 0;
  std::string temp = toSmallerCaseNoWhiteSpace(stringHeld);
  for (std::string::iterator it = temp.begin(); it != temp.end(); it++) {
    if (*it == charToFind) {
      sum++;
    }
  }
  return sum;
}

std::string WordToolBox::toSmallerCaseNoWhiteSpace(const std::string wordToChange) {
  std::string temp;
  temp = wordToChange;
  std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
  std::sort(temp.begin(),temp.end());
  temp.erase(remove_if(temp.begin(), temp.end(), isspace), temp.end());
  return temp;
}
