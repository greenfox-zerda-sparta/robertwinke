/*
 * Exception.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */

#include "Exception.h"

Exception::Exception(errors err) {
  error = err;
  element = (int)err;
}

errors Exception::getError() {
  return error;
}

int Exception::getElement() {
  return element;
}

std::string Exception::toString() {
  switch (error){
    case FULL:
      return "the stack is full";
    case EMPTY:
      return "the stack is empty";
    default:
      return "error";
  }
}
