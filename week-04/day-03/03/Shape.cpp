/*
 * Shape.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */


#include "Shape.h"

using namespace std;
Shape::Shape() {
  mArea = 0;
}

string* Shape::getName() {
  return new string("Generic Shape");
}

float Shape::get_area() {
  return mArea;
}

Shape::~Shape() {
}

