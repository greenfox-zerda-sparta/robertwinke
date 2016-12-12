/*
 * 04.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */


// Create a function like macro.
// It's job is to turn something written in code into a string.
// It should be called str(a).
// Try out the code below. See what happens!

#define str(a) #a
#include <iostream>



int main() {
  int a = 22;
  int b = 24;
  if(a < b) {
    std::cout << str(a > b) << "  a: " << a << "  b: " << b << std::endl;
  }
  return 0;
}

