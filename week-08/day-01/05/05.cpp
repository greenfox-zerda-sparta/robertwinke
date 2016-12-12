/*
 * 05.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */




// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.


#define PRINT(a) std::cout << a
#ifdef __DEBUG
#undef PRINT
#define PRINT(a) std::cout << "DEBUG: " << a
#endif

#include <iostream>



int main() {
  PRINT(22);
  return 0;
}

