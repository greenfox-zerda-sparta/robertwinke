/*
 * 11.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

string appender(string i){
	return i + 'a';
}

int main() {
  string k = "kuty";
  // write a function that gets a string as an input
  // and appends an 'a' character to its end
  cout << appender(k) << endl;
  return 0;
}

