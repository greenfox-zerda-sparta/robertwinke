/*
 * 23.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int main() {
	int z = 13;
	// if z is between 10 and 20 print 'Sweet!'
	// if less than 10 print 'More!',
	// if more than 20 print 'Less!'
	if (10 < z && z < 20){
		cout << "Sweet" << endl;
	}
	else if (z < 10){
		cout << "More" << endl;
	}
	else {
		cout << "Less" << endl;
	}

	return 0;
}

