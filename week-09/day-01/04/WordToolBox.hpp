/*
 * WordToolBox.hpp
 *
 *  Created on: Dec 19, 2016
 *      Author: robertwinke
 */

#include <string>
#ifndef WORDTOOLBOX_HPP_
#define WORDTOOLBOX_HPP_


class WordToolBox {
  std::string stringHeld;

public:
  WordToolBox(std::string stringHeld);
  std::string getStringHeld();
  void setStringHeld(std::string);
  bool isAnAnagram(std::string stringToCheck);
  int countHowMany(char charToFind);
  std::string toSmallerCaseNoWhiteSpace(const std::string);
};


#endif /* WORDTOOLBOX_HPP_ */
