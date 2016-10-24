/*
 * 09.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	int i = 1357988018575474;
	// tell if it has 11 as a divisor
	if (i % 11 == 0){
		cout << "it has 11 as a divisor" << endl;
	}
	else {
		cout << "it is not divisible" << endl;
	}
	return 0;
}


