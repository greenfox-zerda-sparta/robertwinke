/*
 * 08.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

string removeX(string word) {
  if(word[0] == 'x') {
    if (word.length() == 1) {
      return "";
    }
    else {
      word = word.substr(1);
      return removeX(word);
    }
  }
  if (word.length() == 1) {
    return word;
  }
  else {
    return word[0] + removeX(word.substr(1));
  }
}

int main() {
// Given a string, compute recursively a new string where all the 'x' chars have been removed.

  cout << removeX("xalxmax");
  return 0;
}


