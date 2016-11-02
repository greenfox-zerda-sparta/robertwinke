/*
 * 06.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: robertwinke
 */


#include <iostream>

using namespace std;

/**
 * Create a function called "fliter_greater_than_5" that takes a pointer to an int array, and it's size.
 * It should return a pointer to a new array that only consists the numbers that are bigger than 5.
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

int* filter_greater_than_5(int* pointer, int size) {
  int* new_pointer;
  new_pointer = new int[size];
  int new_size = 0;

  for (int i = 0; i < size; i++){
    if (pointer[i] > 5) {
      new_pointer[new_size] = pointer[i];
      new_size++;
    }
  }
  new_pointer = resize(new_pointer, size, new_size);

  return new_pointer;
}

int main() {
  int array[5] = {3,5,7,8,9};
  int* pointer = array;

  int* filtered_pointer;
  filtered_pointer = filter_greater_than_5(pointer, 5);

  for (int i = 0; i < 3; i++) {
    cout << filtered_pointer[i] << endl;
  }

  delete[] filtered_pointer;


  return 0;
}

