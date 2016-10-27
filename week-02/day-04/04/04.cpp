/*
 * 04.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */



#include <iostream>

using namespace std;

void reverseArray(int *array, int length){
  int temp;
  for (int i = length - 1, j = 0; i >= length / 2; i--, j++){
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
  }
}

void printArray(int *array, int l){
  for (int i = 0; i < l; i++){
    cout << array[i] << endl;
  }
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int length = sizeof(array)/sizeof(int);

  // Write a function that takes an array and its length than reverses the array

  reverseArray(array, length);
  printArray(array, length);

  return 0;
}
