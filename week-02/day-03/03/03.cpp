/*
 * 03.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: robertwinke
 */



#include <iostream>

using namespace std;

int main() {
  int number = 1234;
  int* number_pointer = &number;
  // update the value of number variable to 42 using the "number_pointer"

  *number_pointer = 42;

  cout << number << endl;

  return 0;
}
