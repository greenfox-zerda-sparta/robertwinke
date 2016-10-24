/*
 * 19.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	// print the even numbers till 20
	int i;

	for (i = 1; i <= 20; i++){
		if (i % 2 == 0){
			cout << i << endl;
		}
	}

	return 0;
}


