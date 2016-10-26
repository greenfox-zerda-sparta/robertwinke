/*
 * 13.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>
using namespace std;

// Create a function that prints each word in a string into a new line!
// Create an other function that takes a string and an array of strings as it's input
// and puts each word in the original string into a new element in the array of strings.
// Decide which argument should be a pointer and which shouldn't.
// In the main function, print out each element of the array into a new line!


void printString(string sentence){
  for(int i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i] != ' '){
      cout << sentence[i];
    }
    else {
      cout << endl;
    }
  }
  cout << endl;
}

int wordCounter (string sentence){
  int count = 1;
  for(int i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i] == ' '){
      count++;
    }
  }

  return count;
}

void stringAdder(string sentence, string *array){
  int index = 0;
  for(int j = 0; sentence[j] != '\0'; j++) {
    if (sentence[j] != ' '){
      array[index] += sentence[j];
    }
    else {
      index++;
    }
  }
}

void printArray(string *array, int length){
  for (int i = 0; i < length; i++){
    cout << array[i] << " ";
  }
  cout << endl;
}

int main(int argc, char **argv){
  string sentence = "alma körte barack szilva";
  int length = wordCounter(sentence);
  string array[length];

  printString(sentence);

  stringAdder(sentence, array);
  printArray(array, length);


  return 0;
}



