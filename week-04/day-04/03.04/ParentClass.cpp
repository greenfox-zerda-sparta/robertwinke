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
  mParentString1 = new string("parent string, stringing here!");
  mParentString2 = new string("parent string 2, stringing here!");
}

string ParentClass::getString() {
  return string(*mParentString1);
}

string ParentClass::virtualGetString() {
  return string(*mParentString2);
}

ParentClass::~ParentClass() {
  delete mParentString1;
  delete mParentString2;
}


