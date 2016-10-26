/*
 * 02.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: robertwinke
 */



#include <iostream>

using namespace std;

int main() {
  int number = 1234;
  int* number_pointer = &number;
  // print the value of number using the "number_pointer"
  cout << *number_pointer << endl;

  return 0;
}
