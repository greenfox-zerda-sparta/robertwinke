/*
 * 05.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: robertwinke
 */


#include <iostream>

using namespace std;

/**
 * Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
 * then it should return a new pointer that points to the new resized array.
 * It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
 * It should delete the old array.
 */

int* resize(int* pointer, int size, int new_size) {
  int* new_pointer;
  new_pointer = new int[new_size];

  for (int i = 0; i < new_size; i++){
    if (i < size) {
      new_pointer[i] = pointer[i];
    }
    else {
      new_pointer[i] = 0;
    }
  }
  delete[] pointer;

  return new_pointer;
}

int main() {
  int* arrayPointer;

  arrayPointer = new int[5];

  for (int i = 0; i < 5; i++) {
    arrayPointer[i] = i;
  }

  int* newArrayPointer;
  newArrayPointer = resize(arrayPointer, 5, 10);

  for (int i = 0; i < 10; i++) {
    cout << newArrayPointer[i];
  }

  delete[] newArrayPointer;

  return 0;
}


