/*
 * 09.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

string greeter (string i){
	string a = "Hello ";

	return a + i;
}

int main() {
  string i = "Jozsi";
  // create a function that takes a string argument and greets it.

  cout << greeter(i) << endl;

  return 0;
}

