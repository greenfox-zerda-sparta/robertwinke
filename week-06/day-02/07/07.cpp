/*
 * 07.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.

const char* sentence[6] = {"What", "a", "pleasant", "surprie", "this", "is."};

string word_return(int index) throw (int, const char*){
  if (index > 5) {
    throw index-5;
  }
  else if (index < 0) {
    throw "its a negative number";
  }

  return sentence[index];
}


int main() {

  string word;

  try {
    word = word_return(4);
    cout << word << endl;
  }
  catch(int err) {
    cout << "int err: " << err << endl;
  }
  catch(const char* error) {
    cout << "string err: " << error << endl;
  }

  try {
    word = word_return(-1);
    cout << word << endl;
  }
  catch(int err) {
    cout << "int err: " << err << endl;
  }
  catch(const char* error) {
    cout << "string err: " << error << endl;
  }

  return 0;
}


