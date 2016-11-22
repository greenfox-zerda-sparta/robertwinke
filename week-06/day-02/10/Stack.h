/*
 * Stack.h
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */

#ifndef STACK_H_
#define STACK_H_

enum errors {FULL, EMPTY};

class Stack {
private:
  int array[5];
  unsigned int top;
public:
  Stack();
  void push(int) throw (errors);
  int pop() throw (errors);
};




#endif /* STACK_H_ */
