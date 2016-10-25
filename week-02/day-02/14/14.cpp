/*
 * 14.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int min (int array[], int l){
	int min;

	for (int i = 0; i < l-1; i++){
		if (array[i] < array[i+1]){
			min = array[i];
		}
		}
	return min;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  // Write a function that takes ana array and its length returns the minimal element
  // in the array (your own min function)
  int length = sizeof(numbers)/sizeof(int);

  cout << min(numbers,length) << endl;



  return 0;
}

