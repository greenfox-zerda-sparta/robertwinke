/*
 * Car.h

 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>
using namespace std;

#ifndef CAR_H_
#define CAR_H_


class Car {
public:
  Car(string type, double km);
  void run(double distance);
  double get_km();
private:
  string type;
  double km;
};

#endif /* CAR_H_ */
