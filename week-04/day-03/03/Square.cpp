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

Square::Square(float side) {
  this->side = side;
}

string* Square::getName() {
  return new string("Square Shape");
}

void Square::calculate_area() {
  this->mArea = this->side * this->side;
}
