/*
 * 07.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */



// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.


#include <iostream>

#define PRINT(a) std::cout << a << std::endl;


int main() {

  PRINT(4);
  return 0;
}

