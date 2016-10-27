/*
 * 06.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>

using namespace std;

int evenAfterEven(int *array, int l) {
  int count = 0;
  for (int i = 0; i < l-1; i++){
    if (array[i] % 2 == 0 && array[i+1] % 2 == 0){
      count++;
    }
  }
  return count;
}

int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2, 2, 3, 2};
  int length = sizeof(numbers)/sizeof(int);

  // Write a function that counts how many times is an even number is folowed by
  // another even number in an array

  cout << evenAfterEven(numbers, length) << endl;

  return 0;
}

