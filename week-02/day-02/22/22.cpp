/*
 * 22.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */

#include <iostream>
using namespace std;

string includes(int array[10], int n){
  for (int i = 0; i < 10; i++){
    if (array[i] == n){
      return "it includes";
    }
  }
  return "it doesnt";
}

int firstIndexOf(int array[10], int n){
  if (includes(array, n) == "it includes"){
    for (int i = 0; i < 10; i++){
      if (array[i] == n){
        return i;
      }
    }
  }
  else {
    return -1;
  }
}

int lastIndexOf(int array[10], int n){
  if (includes(array, n) == "it includes"){
    for (int i = 9; i >= 0; i--){
      if (array[i] == n){
        return i;
      }
    }
  }
  else {
    return -1;
  }
}

//Create a function to tell You whether a certain number is part of a 10 long array of integers.
//Create an other function to give You the first index of a given integer in an array of integers.
//Create an other functions to give You the index of the last occurrence of the given integer in
//the array.If the array does not include the given integer this function should return -1.
//Do not duplicate functionality, use the functions You've created earlier instead of duplicating.
//Create 5 arrays, each 10 long filled with integers.
//Find the first and last occurrances of the integer: 14. And Print them out. If the array does not
//include the integr You should say so in words.
//The names of the functions should be "includes", "firstIndexOf", "lastIndexOf"
//Decide what should the function return. Void? Bool? Int? Float? Char?

int main(int argc, char** argv){
  int array[10] = {1,2,3,4,5,4,7,8,9,10};
  int n = 4;

  cout << includes(array, n) << endl;
  cout << firstIndexOf(array, n) << endl;
  cout << lastIndexOf(array, n) << endl;
  return 0;
}


