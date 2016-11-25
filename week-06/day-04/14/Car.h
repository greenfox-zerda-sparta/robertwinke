/*
 * Car.h
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */
#include <string>
using namespace std;

#ifndef CAR_H_
#define CAR_H_


class Car {
private:
  static unsigned int VIN_COUNT;
  const int VIN;   //should be const
  string name;
  string color;
  string plate;

public:
  Car();
  string getName();
  string getColor();
  void setPlate(string);
  string getPlate();
  int getVin();
};



#endif /* CAR_H_ */
