/*
 * 09.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
using namespace std;

// Duplicate the Stack class from the previous exercies.
// Rewrite it so, that the push and pop methods don't throw integers.
// Define an enum for te two types of exceptions.
// Adapt the interpretException method to except an argument from that enum type.
// Adapt the main function so that the try and catch blocks except an exception of that enum type.


enum error_types {FULL, EMPTY};

class Stack {
private:
  int array[5];
  unsigned int top;
public:
  Stack();
  void push(int) throw (error_types);
  int pop() throw (error_types);
};

string interpretException(error_types);

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
  catch(error_types err) {
    cout << interpretException(err) << endl;
  }

  try {
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();
    my_stack.pop();
  }
  catch(error_types err) {
    cout << interpretException(err) << endl;
  }
  return 0;
}

string interpretException(error_types err) {
  switch (err){
    case FULL:
      return "the stack is full";
    case EMPTY:
      return "the stack is empty";
    default:
      return "error";
  }
}


Stack::Stack(){
  top = 0;
}

void Stack::push(int number) throw (error_types){
  if (top == 4) {
    throw FULL;
  }
  else {
    array[top] = number;
    top++;
  }
}
int Stack::pop() throw (error_types){
  if (top == 0) {
    throw EMPTY;
  }
  else {
    top--;
    return array[top+1];
  }
}

