/*
 * 11.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */



// Create a function like macro that takes one argument.
// If the argument is false, it should print out the following:
// The expression in the argument. And the file name and the line in the file.


#include <iostream>
#define FunctionLikeMacro(a) a == false ? std::cout << __FILE__<< __LINE__<< #a << std::endl : std::cout << "";


int main() {

  FunctionLikeMacro(false);
  return 0;
 }


