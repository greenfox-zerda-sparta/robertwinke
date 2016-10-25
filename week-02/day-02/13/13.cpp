/*
 * 13.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>

using namespace std;

int factorial(int i){
	if (i==1){
		return 1;
	}
	else {
		return i * factorial(i-1);
	}
}

int main() {
  // create a function that returns it's input factorial
	int n = 5;

	cout << factorial(n) << endl;

  return 0;
}


