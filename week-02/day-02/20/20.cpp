/*
 * 20.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int char_counter(string word, char c) {
  int sum = 0;
  for (int i = 0; i < word.length(); i++){
    if (word[i] == c){
      sum += 1;
    }
  }
  return sum;
}

int main() {
  string word = "makkoshotyka-also";
  char letter = 'o';
  // Write a function that takes a string and a character, and counts how many
  // times the character occures in the string and it should return a number

  cout << char_counter(word, letter) << endl;

  return 0;
}

