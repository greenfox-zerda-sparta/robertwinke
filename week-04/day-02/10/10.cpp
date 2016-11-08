/*
 * 10.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */




#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main() {
    // Create a `Stack` class that stores elements
    // It should have a `size` method that returns number of elements it has
    // It should have a `push` method that adds an element to the stack
    // It should have a `pop` method that returns the last element form the stack and also deletes it from it


  Stack my_stack = Stack();
  my_stack.push(5);
  my_stack.push(6);
  my_stack.push(5);
  my_stack.push(8);
  cout << my_stack.size() << endl;
  cout << my_stack.pop() << endl;
  cout << my_stack.size() << endl;
  return 0;
}
