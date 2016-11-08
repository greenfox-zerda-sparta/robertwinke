/*
 * Car.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */
#include "Car.h"

using namespace std;

Car::Car(string type, double km) {
  this->type = type;
  this->km = km;
}

void Car::run(double distance) {
  km += distance;
}

double Car::get_km() {
  return km;
}

