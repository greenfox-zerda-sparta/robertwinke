/*
 * otimizedstack.cpp
 *
 *  Created on: Nov 5, 2016
 *      Author: robertwinke
 */

#include <iostream>
using namespace std;

struct Stack {
  int size;
  double* array;
  int current_size;
};

Stack* stack_construct(double* input, int size) {
  Stack* my_stack = new Stack;

  my_stack->size = size;
  my_stack->current_size = 16;

  my_stack->array = new double[my_stack->current_size];

  for (int i = 0; i < my_stack->size; i++) {
    my_stack->array[i] = input[i];
  }

  return my_stack;
}

void stack_push(Stack& stack, double value) {
  stack.array[stack.size] = value;
  stack.size++;

  if (stack.size > stack.current_size * 0.8) {
    stack.current_size *= 2;
    double* arr = new double[stack.current_size];
    for (int i = 0; i < stack.size; i++) {
      arr[i] = stack.array[i];
    }
    delete[] stack.array;
    stack.array = arr;
  }
}

double stack_pop(Stack& stack) {
  if (stack.size == 0) {
    return -1;
  }
  stack.size -= 1;
  return stack.array[stack.size];
}

void print_stack(Stack& stack) {
  for (int i = 0; i < stack.size; i++){
    cout << stack.array[i] << endl;
  }
  cout << endl;
}

int main() {

  double array[] = {1,2,3,4,5,6,7,8,9,10,11,12};

  Stack* my_stack = stack_construct(array, 12);

  stack_push(*my_stack, 8);

  cout << my_stack->size << endl;
  cout << my_stack->current_size << endl;

  print_stack(*my_stack);

  cout << stack_pop(*my_stack) << endl;
  print_stack(*my_stack);

  delete[] my_stack->array;
  delete my_stack;

  return 0;
}


