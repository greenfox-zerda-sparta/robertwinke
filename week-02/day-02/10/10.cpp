/*
 * 10.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int doubler (int i){
	return i * 2;
}

int main() {
  int j = 123;
  // create a function that doubles it's input
  // double j with it
  cout << doubler(j);
  return 0;
}


