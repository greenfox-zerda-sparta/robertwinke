/*
 * 15.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>

using namespace std;

int finder (int array[], int l, int n){

	for (int i = 0; i < l; i++){
		if (array[i] == n){
			return i;
		}
	}
	return -1;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  // Write a function that takes ana array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)

  int length = sizeof(numbers)/sizeof(int);

  cout << finder(numbers, length, 2) << endl;

  return 0;
}

