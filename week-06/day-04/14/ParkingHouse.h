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
  vector<vector<vector<Car*> > > vect;
public:
  ParkingHouse(int, int, int);
  vector<int> carSearch(string, string);
  vector<Car*> carSearch2(string, string);
  Car* getCarAt (int,int,int);
  ~ParkingHouse();

};



#endif /* PARKINGHOUSE_H_ */
