/*
 * ParkingHouse.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */

#include "ParkingHouse.h"


ParkingHouse::ParkingHouse(int row, int col, int floor) {
  this->carRow = row;
  this->carCol = col;
  this->floor = floor;

  vect = vector<vector<vector<Car> > > (floor, vector<vector<Car> > (col, vector<Car>(row)));
}


