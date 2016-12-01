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

  vect = vector<vector<vector<Car*> > >
  (floor, vector<vector<Car*> >
  (col, vector<Car*>(row)));

  for(unsigned int i = 0; i < vect.size(); i++) {
    for (unsigned int j = 0; j < vect[0].size(); j++) {
      for (unsigned int k = 0; k < vect[0][0].size(); k++) {
        vect[i][j][k] = new Car();
      }
    }
  }

}

vector<int> ParkingHouse::carSearch(string name, string color) {
  vector<int> cars;
  for(unsigned int i = 0; i < vect.size(); i++) {
    for (unsigned int j = 0; j < vect[0].size(); j++) {
      for (unsigned int k = 0; k < vect[0][0].size(); k++) {
        if (vect[i][j][k]->getName() == name && vect[i][j][k]->getColor() == color) {
          cars.push_back(i);
          cars.push_back(j);
          cars.push_back(k);
        }
      }
    }
  }
  return cars;
}

vector<Car*> ParkingHouse::carSearch2(string name, string color) {
  vector<Car*> cars;
  for(unsigned int i = 0; i < vect.size(); i++) {
    for (unsigned int j = 0; j < vect[0].size(); j++) {
      for (unsigned int k = 0; k < vect[0][0].size(); k++) {
        if (vect[i][j][k]->getName() == name && vect[i][j][k]->getColor() == color) {
          cars.push_back(vect[i][j][k]);
        }
      }
    }
  }
  return cars;
}

Car* ParkingHouse::getCarAt (int i,int j,int k) {
  return vect[i][j][k];
}

ParkingHouse::~ParkingHouse() {
  for(unsigned int i = 0; i < vect.size(); i++) {
    for (unsigned int j = 0; j < vect[0].size(); j++) {
      for (unsigned int k = 0; k < vect[0][0].size(); k++) {
        delete vect[i][j][k];
      }
    }
  }
}


