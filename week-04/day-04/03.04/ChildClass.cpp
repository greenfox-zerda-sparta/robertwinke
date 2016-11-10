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


ChildClass::ChildClass() {
  mChildString1 = new string("1Child String, it's getting late...");
  mChildString2 = new string("2Child String, it's getting late...");
}

string ChildClass::getString() {
  return string(*mChildString1);
}

string ChildClass::virtualGetString() {
  return string(*mChildString2);
}


ChildClass::~ChildClass() {
  delete mChildString1;
  delete mChildString2;
}
