/*
 * 04.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.


string* split(string word, int index) throw (const char*){
  if(index > word.length()) {
    throw "index is out of range";
  }

  string* string_array= new string[2];

  for (int i = 0; i < index; i++) {
    string_array[0] += word[i];
  }
  for (unsigned int i = index; i < word.length(); i++) {
    string_array[1] += word[i];
  }


  return string_array;
}

int main() {
  string* str_ptr;

  try {
    str_ptr = split("barnabas", 5);
    cout << "Split result: " << str_ptr[0] << " & " << str_ptr[1] << endl;
    delete[] str_ptr;
    str_ptr = split("barnabas", 14);
    cout << "Split result: " << str_ptr[0] << "& " << str_ptr[1] <<endl;
    delete[] str_ptr;
  }
  catch (const char* excp) {
    cout << "Exception: " << excp << endl;
  }


  return 0;
}

