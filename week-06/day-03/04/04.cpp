/*
 * 04.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

template <class T>

void descending_sort(T* array, int size) {
  T temp;
  for(int j = 0; j < size-1; j++) {
    for (int i = 1; i < size; i++) {
      if(array[j] < array[i]) {
        temp = array[j];
        array[j] = array[i];
        array[i] = temp;
      }
    }
  }
}

template <class T>

void print_array(T* array, int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << endl;
  }
}

int main() {
  // create a function template that takes an array and sort it in a descending order

  int array[3] = {1,2,3};
  double array1[3] = {1.3,2.2,3.6};

  descending_sort(array, 3);
  print_array(array, 3);

  descending_sort(array1, 3);
  print_array(array1, 3);

  return 0;
}

