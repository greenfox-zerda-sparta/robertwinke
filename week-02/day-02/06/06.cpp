/*
 * 06.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
	int f[] = {3, 4, 5, 6, 7};
	// Please double all the elements, than print all of them

	for (int i = 0; i < sizeof(f)/sizeof(int); i++){
		f[i] *= 2;
		cout << f[i] << endl;
	}

  return 0;
}


