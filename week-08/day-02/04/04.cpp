/*
 * 04.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>
#include <map>

using namespace std;

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

int letterCount(string word, char letter) {
  int sum = 0;
  for (unsigned int i = 0; i < word.length(); i++) {
    if (word[i] == letter) {
      sum++;
    }
  }
  return sum;
}

map<char,int> letterCountInString(string word) {
  map<char,int> myMap;
  for (unsigned int i = 0; i < word.length(); i++) {
    myMap[word[i]] = letterCount(word, word[i]);
  }
  return myMap;
}

int main() {
  map<char,int> m;
  m = letterCountInString("almaaal");

  for (map<char,int>::iterator it = m.begin(); it != m.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  return 0;
}

