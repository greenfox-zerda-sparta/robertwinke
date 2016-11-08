/*
 * Stack.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */

#include "Stack.h"

using namespace std;

Stack::Stack() {

}
Stack::~Stack(){
  delete[] stack;
}

void Stack::push(int element) {
  stack[current_size] = element;
  ++current_size;
  if (current_size == array_size*0.8) {
    array_size *= 2;
    int* new_stack = new int[array_size];
    for (int i = 0; i < current_size; i++) {
      new_stack[i] = stack[i];
    }
    delete[] stack;
    stack = new_stack;
  }
}

int Stack::pop() {
  --current_size;
  return stack[current_size];
}

int Stack::size() {
  return current_size;
}
