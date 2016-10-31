/*
 * 01.cpp
 *
 *  Created on: Oct 28, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>

using namespace std;

string createPalindrome(string input){

  string output = input;
  for (int i = input.length()-1; i >= 0; i--){
    output += input[i];
  }
  return output;
}

bool checkPalindrome(string input){
  int length = input.length();

  for (int i = 0; i <= length / 2; i++){
    if(input[i] == input[length - 1 -i]){
      continue;
    }
    else {
      return false;
    }
  }
  return true;
}

string searchPalindromes(string input){
  string output, temp;
  int length = input.length();

  for (int k = 0; k < length; k++){
    for (int i = 1; i <= length; i++){
      for (int j = 0 + k; j < i; j++){
        temp += input[j];
      }
      if (temp.length() > 2){
        if (checkPalindrome(temp)){
          output += temp  + "|";
        }
      }
      temp.clear();
    }
  }

  return output;
}

int main() {
  //cout << createPalindrome("DFGD dfgdf");


  string output = searchPalindromes("dog goat dad duck doodle never");

  cout << output << endl; // it prints: ['og go', ' dad ', 'd d', 'dood', 'eve']

  return 0;
}

