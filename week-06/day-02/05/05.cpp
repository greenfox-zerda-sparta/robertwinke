/*
 * 05.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Write a function that receives a string and a character.
// The function should return an array of strings.
// The function should split the string at the character it receives as the second argument.
// The character it uses to split should not be in any of the new strings.
// Example: split("What a nice day", ' ');
// Result: {"What", "a", "nice",  "day"}
// If the index is out of bounds, throw an exception.
// If the character is not in the string throw a different exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

vector<string> split(string word, char c) throw (const char*){
  int c_count = 0;

  for (unsigned int i = 0; i < word.length(); i++) {
    if (word[i] == c) {
      c_count++;
    }
  }
  if (c_count == 0) {
    throw "the string doesnt contain the char\n";
  }


  vector <string> string_vector;

  string temp ="";
  for (unsigned int i = 0; i < word.length(); i++) {
    if (word[i] == c || i == word.length()-1) {
      string_vector.push_back(temp);
      temp = "";
    }
    else {
      temp += word[i];
    }
  }

  return string_vector;
}

int main() {
  vector<string> word;

  try {
    word = split("barnabas dfgdfb alma gggg",' ');
    cout << "Split result: " ;
    for (unsigned int i = 0; i < word.size(); i++) {
      cout << word[i] << "&";
    }
    cout << endl;
    word = split("barnabas dfgdfb alma gggg",'A');;
    for (unsigned int i = 0; i < word.size(); i++) {
      cout << word[i] << "&";
    }


  }
  catch (const char* excp) {
    cout << "Exception: " << excp << endl;
  }


  return 0;
}

