/*
 * 05.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */


#include <iostream>

using namespace std;

bool doesIncludeNeg(int *array, int l) {
  for (int i = 0; i < l; i++){
    if (array[i] < 0){
      return true;
    }
  }
  return false;
}


int main() {
  int numbers[] = {6, 5, -3, 4, -1, 8, 7};
  int length = sizeof(numbers)/sizeof(int);

  // Write a function that decides if an array includes at least one negative number or not

  if (doesIncludeNeg(numbers, length)){
    cout << "it has at least 1 negative number" << endl;
  }

  return 0;
}

