/*
 * 02.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int main() {
	int d[] = {6, 5, 4, 3, 2, 1};
	// print all the elements of the array

	for (int i = 0; i < sizeof(d)/sizeof(int); i++){
		cout << d[i] << endl;
	}

  return 0;
}


