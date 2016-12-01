/*
 * Car.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */
#include "Car.h"
#include <time.h>
#include <stdlib.h>

#include <iostream>

string cars[18] = {"Moszkvics", "Volga", "ZISZ", "Tatra", "Zbrojovka", "Hotchkiss", "DAF", "Warszawa", "Puli", "Balaton","Benz", "Marauder", "Zsiguli" , "IFA", "Fjord", "Trabant", "Wartburg", "Martini"};
string colors[10] = {"Piros", "Narancssárga", "Zöld", "Kék", "Türkiz", "Barna", "Lila", "Sárga", "Fekete", "Fehér" };



unsigned int Car::VIN_COUNT = 0;

Car::Car() :VIN(VIN_COUNT) {
  int carIndex = rand() % 18;
  int colorIndex = rand() % 10;
  VIN_COUNT++;
  name = cars[carIndex];
  color = colors[colorIndex];

  Plate plateCollection(128);
  plate = plateCollection.getPlate(VIN);
}

string Car::getName() {
  return name;
}
string Car::getColor() {
  return color;
}
void Car::setPlate(string plate) {
  this->plate = plate;
}
int Car::getVin() {
  return VIN;
}
string Car::getPlate() {
  return plate;
}
