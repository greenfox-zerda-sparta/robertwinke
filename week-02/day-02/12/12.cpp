/*
 * 12.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int sum(int array[], int l){
	int sum = 0;
	for (int i = 0; i < l; i++){
		sum += array[i];

	}
	return sum;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  // write your own sum function
  // it should take an array and it's length
  int length = sizeof(numbers)/sizeof(int);

  cout << sum(numbers,length) << endl;
  return 0;
}

