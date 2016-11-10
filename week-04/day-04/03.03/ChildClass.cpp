/*
 * ChildClass.cpp
 *
 *  Created on: Nov 10, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>
#include "ParentClass.h"
#include "ChildClass.h"
using namespace std;

string* ChildClass::getChildStringAddress() {
  return mChildString;
}

ChildClass::ChildClass() {
  mChildString = new string("Child String, it's getting late...");
}

ChildClass::ChildClass(string _str) {
  mChildString = new string(_str);
}

ChildClass::~ChildClass() {
  delete mChildString;
}
