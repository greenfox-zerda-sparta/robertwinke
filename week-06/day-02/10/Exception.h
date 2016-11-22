/*
 * My_exception.h
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */

#include "Stack.h"
#include <string>

#ifndef EXCEPTION_H_
#define EXCEPTION_H_


class Exception {
private:
  errors error;
  int element;
public:
  Exception(errors);
  errors getError();
  int getElement();
  std::string toString();
};


#endif /* EXCEPTION_H_ */
