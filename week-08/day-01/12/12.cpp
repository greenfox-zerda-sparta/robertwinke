/*
 * 12.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */



// Take the function like macro from the previous exercise.
// Make it so, that it's defined like the way You wrote it
// when __DEBUG is defined.
// It's defined to be nothing otherwise.


#include <iostream>

#ifdef __DEBUG
#define FunctionLikeMacro(a) a == false ? std::cout << __FILE__<< __LINE__<< #a << std::endl : std::cout << "";
#else
#undef FunctionLikeMacro
#define FunctionLikeMacro(a)
#endif


int main() {

  FunctionLikeMacro(false);
  return 0;
 }

