/*
 * ParkingHouse.h
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */

#include <vector>
#include "Car.h"

using namespace std;

#ifndef PARKINGHOUSE_H_
#define PARKINGHOUSE_H_

class ParkingHouse {
private:
  int carRow;
  int carCol;
  int floor;


public:
  vector<vector<vector<Car*> > > vect;
  ParkingHouse(int, int, int);

};



#endif /* PARKINGHOUSE_H_ */
