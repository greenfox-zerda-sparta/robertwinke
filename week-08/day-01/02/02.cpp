/*
 * 02.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */


// Create a constatn using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#include <iostream>

#define INTEGER 4

#undef INTEGER
#define INTEGER 5

using namespace std;

int main() {

  cout << INTEGER << endl;
  return 0;
}

