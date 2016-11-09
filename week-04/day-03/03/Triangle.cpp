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

Triangle::Triangle(float base, float height) {
  this->base = base;
  this->height = height;
}

string* Triangle::getName() {
  return new string("Triangle Shape");
}

void Triangle::calculate_area() {
  this->mArea = (this->base * this->height) / 2;
}

