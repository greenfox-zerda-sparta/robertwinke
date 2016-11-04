/*
 * stack.cpp
 *
 *  Created on: Nov 4, 2016
 *      Author: robertwinke
 */


#include <iostream>
using namespace std;

struct Stack {
  unsigned int size;
  double* arr = NULL;
};

Stack* stack_construct(double input[], int size){
  Stack* new_stack = new Stack;
  new_stack->size = size;

  new_stack->arr = new double[size];

  for (unsigned int i = 0; i < size; i++) {
    new_stack->arr[i] = input[i];
  }

  return new_stack;
}

void stack_push(Stack& stack, double value) {

  double* new_array = new double[stack.size + 1];

  for (unsigned int i = 0; i < stack.size; i++){
    new_array[i] = stack.arr[i];
  }

  new_array[stack.size] = value;
  delete[] stack.arr;

  stack.arr = new_array;
  stack.size++;
}

double stack_pop(Stack& stack) {

  if (stack.size == 0) {
    return -1;
  }
  double return_value = stack.arr[stack.size-1];
  double* new_array = new double[stack.size -1];

  for (unsigned int i = 0; i < stack.size-1; i++){
    new_array[i] = stack.arr[i];
  }

  delete[] stack.arr;

  stack.arr = new_array;
  stack.size--;


  return return_value;
}

bool is_empty(Stack& stack){
  if (stack.size == 0) {
    return true;
  }
  else {
    return false;
  }
}

void print_stack(Stack& stack) {
  for (unsigned int i = 0; i < stack.size; i++){
    cout << stack.arr[i] << endl;
  }
}

int main() {
  double array[] = {1,2,3};
  Stack* ize = stack_construct(array, 3);

  stack_push(*ize, 4);
  print_stack(*ize);

  cout << endl << stack_pop(*ize) << endl << endl;

  print_stack(*ize);

  delete[] ize->arr;
  delete ize;

  return 0;
}

