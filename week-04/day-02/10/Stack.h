/*
 * Stack.h
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */

#ifndef STACK_H_
#define STACK_H_


class Stack {
public:
  Stack();
  ~Stack();
  int size();
  void push(int element);
  int pop();

private:
  int array_size = 16;
  int* stack = new int[array_size];
  int current_size = 0;
};


#endif /* STACK_H_ */
