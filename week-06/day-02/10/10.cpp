/*
 * 10.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include "Stack.h"
#include "Exception.h"
using namespace std;

// Duplicate the Stack class from the previous exercies.
// Create a class for Your exception.
// The class should have two private fields:
// 1.) A filed from Your enum type to represent the kind of error.
// 2.) A field of type: int. So You can give back the element or the index which caused the problems.
// Set all the fields in the constructor only.
// Create get... methods for both variables.
// Create an std::string toString() method, which gives back a comprehensive error message.
//
// Demonstrate how this works in the main function. Print the error messages from the main function.


int main() {
  Stack my_stack;
  try {
    my_stack.push(5);
    my_stack.push(5);
    my_stack.push(5);
    my_stack.push(5);
    my_stack.push(5);
    my_stack.push(5);
  }
  catch(errors err) {
    Exception my_exception(err);
    cout << my_exception.toString() << endl;
  }

  try {
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();
  }
  catch(errors err) {
    Exception my_exception(err);
    cout << my_exception.toString() << endl;
  }
  return 0;
}
