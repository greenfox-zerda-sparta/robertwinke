/*
 * 22.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "cheese";
	// Tell if the x has even or odd number of
	// characters with a True for even and
	// false False output otherwise

	if (x.length() % 2 == 0){
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	return 0;
}


