/*
 * 04.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int main() {
	int d[] = {1, 2, 3, 8, 5, 6};
	// change 8 to 4, than print all the elements of the array
	d[3] = 4;
	for (int i = 0; i < sizeof(d)/sizeof(int); i++){
		cout << d[i] << endl;
	}

  return 0;
}

