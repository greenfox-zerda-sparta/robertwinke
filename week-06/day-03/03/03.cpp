/*
	 * 03.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>

using namespace std;

template <class T>

void print_array(T* array, int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }
}

int main() {
  // create a function template which takes in an array, and the size of it
  // print all the elements of the array

  int array[3] = {1,2,3};
  string array1[3] = {"sfg","sdgs","alma"};

  print_array(array, 3);
  print_array(array1, 3);

  return 0;
}

