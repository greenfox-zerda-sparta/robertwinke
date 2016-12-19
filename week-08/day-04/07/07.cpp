/*
 * 07.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

string changeXToY(string word) {
  if(word[0] == 'x') {
    word[0] = 'y';
  }
  if (word.length() == 1) {
    return word;
  }
  else {
    return word[0] + changeXToY(word.substr(1));
  }
}


int main() {
// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.

  cout << changeXToY("xalmax");

  return 0;
}

