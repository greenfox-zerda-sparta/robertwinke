/*
 * 01.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: robertwinke
 */


#include <iostream>

using namespace std;

int main() {
  int* pointer = NULL;

  // Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  pointer = new int[5];

  for (int i = 0; i < 5; i++){
    pointer[i] = i;
    cout << pointer[i] << endl;
  }

  delete[] pointer;
  pointer = NULL;
  return 0;
}


