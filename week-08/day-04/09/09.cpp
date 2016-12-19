/*
 * 09.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

string insertStar(string word) {
  if (word.length() == 1) {
    return word;
  }
  if (word[0] == ' ' || word[1] == ' ') {
    return word[0] + insertStar(word.substr(1));
  }
  return word.substr(0,1) + "*" + insertStar(word.substr(1));
}


int main() {
// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a "*".

  cout << insertStar("alma bela");

  return 0;
}

