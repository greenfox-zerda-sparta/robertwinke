/*
 * 08.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
using namespace std;

// Create a fixed size stack. The stack can contain only 5 elements.
// You can push on the stack and pop from the stack.
// Write the push and pop methods so, that each throws an integer value if there is an error.
// Like when the stack is empty or full. Just make sure those are different values.
// Write a method called string interpretException(int exception) that returns the error message string for the integer.
//
// Illustrate in the main function both when it works fine and when exceptions occur.


class Stack {
private:
  int array[5];
  unsigned int top;
public:
  Stack();
  void push(int) throw (int);
  int pop() throw (int);
};

string interpretException(int exception);

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
  catch(int err) {
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
  catch(int err) {
    cout << interpretException(err) << endl;
  }
  return 0;
}

string interpretException(int exception) {
  switch (exception){
    case 1:
      return "the stack is full";
    case 2:
      return "the stack is empty";
    default:
      return "error";
  }
}


Stack::Stack(){
  top = 0;
}

void Stack::push(int number) throw (int){
  if (top == 4) {
    throw 1;
  }
  else {
    array[top] = number;
    top++;
  }
}
int Stack::pop() throw (int){
  if (top == 0) {
    throw 2;
  }
  else {
    top--;
    return array[top+1];
  }
}

