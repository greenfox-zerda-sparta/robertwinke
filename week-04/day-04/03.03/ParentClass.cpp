/*
 * ParentClass.cpp
 *
 *  Created on: Nov 10, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>
#include "ParentClass.h"
#include "ChildClass.h"
using namespace std;

ParentClass::ParentClass() {
  mParentString = new string("parent string, stringing here!");
}

void ParentClass::setString(string _str) {
  string* tmp = mParentString;
  mParentString = new string(_str);
  delete tmp;
}

string ParentClass::getString() {
  return string(*mParentString);
}

string* ParentClass::getStringAddress() {
  return mParentString;
}

ParentClass::~ParentClass() {
  delete mParentString;
}


