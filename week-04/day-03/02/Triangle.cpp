/*
 * Triangle.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */
#include <iostream>
#include <string>
#include "Shape.h"
#include "Triangle.h"

using namespace std;

string* Triangle::getName() {
  return new string("Triangle Shape");
}

