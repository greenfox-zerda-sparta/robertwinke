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
  string name;
  string color;

public:
  Car();
  string getName();
  string getColor();
};



#endif /* CAR_H_ */
