/*
 * 03.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */

// Create a constant using preprocessor directives.
// Make it so, that depending on the existence of a defined variable
// it's value is different.
// Write a main function that writes it to the console.
// Experiment in Your IDE compiling it with the directive defined or not.
// (This is waht we used -D __DEBUG for example. You can try this and see how it works
// when You compile a Debug version and a Release version.)

#include <iostream>

//#define INTEGER

#ifdef _LOG
#define INTEGER 5
#endif

using namespace std;

int main() {

  cout << INTEGER << endl;
  return 0;
}

