/*
 * Stack.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */

#include "Stack.h"

Stack::Stack(){
  top = 0;
}

void Stack::push(int number) throw (errors){
  if (top == 4) {
    throw FULL;
  }
  else {
    array[top] = number;
    top++;
  }
}
int Stack::pop() throw (errors){
  if (top == 0) {
    throw EMPTY;
  }
  else {
    top--;
    return array[top+1];
  }
}
