/*
 * Square.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"

using namespace std;

string* Square::getName() {
  return new string("Square Shape");
}
