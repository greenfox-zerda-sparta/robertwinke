/*
 * 01.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

void square(int *array, int l){
  for (int i = 0; i < l; i++){
    array[i] *= array[i];
  }
}

void printArray(int *array, int l){
  for (int i = 0; i < l; i++){
    cout << array[i] << endl;
  }
}

int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[7] = {1, 2, 3, 4, 5, 6, 7};
  int length = sizeof(array)/sizeof(int);

  square(array, length);
  printArray(array, length);



  return 0;
}


