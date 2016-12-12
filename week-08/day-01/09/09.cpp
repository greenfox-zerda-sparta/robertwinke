/*
 * 09.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */



// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file
// and at which line it has been called at.

#include <iostream>

#define PRINT(a) std::cout<< __FILE__<< __LINE__ << a << std::endl;


int main() {

  PRINT(24);
  return 0;
}


