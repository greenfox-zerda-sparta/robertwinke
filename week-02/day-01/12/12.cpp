/*
 * 12.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	string m = "Apple";
	//fill the m variable with its cotnent 4 times

	for (int i =0; i < 4; ++i){
		m += "Apple";
	}
	cout << m << endl;

	return 0;
}


