/*
 * Circle.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include "Circle.h"

using namespace std;


Circle::Circle(double radius) {
    this->radius = radius;
  }
double Circle::get_circumference() {
    return 2*radius*pi;
  }
double Circle::get_area() {
    return radius*radius*pi;
  }

