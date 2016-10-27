/*
 * 02.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */


#include <iostream>

using namespace std;

void fill(int *array, int l){
  for (int i = 0; i < l; i++){
    array[i] = i;
  }
}

void printArray(int *array, int l){
  for (int i = 0; i < l; i++){
    cout << array[i] << endl;
  }
}

int main() {
  int array[10];
  int length = sizeof(array)/sizeof(int);
  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length
  fill(array, length);
  printArray(array, length);

  return 0;
}

