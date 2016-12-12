/*
 * 08.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */


// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.

#include <iostream>

#define PRINT(a) (a == false ? std::cout << "error" << std::endl : std::cout << "" );


int main() {

  PRINT(false);
  return 0;
}


