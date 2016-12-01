/*
 * 14.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>

#include "Car.h"
#include "ParkingHouse.h"



using namespace std;


int main() {
  srand(time(NULL));
  ParkingHouse p(4,4,8);

  vector<int> filteredCars = p.carSearch("Zsiguli","Sárga");
  vector<Car*> filteredCars2 = p.carSearch2("Zsiguli","Sárga");

  for (unsigned int i = 0; i < filteredCars.size(); i += 3) {
    cout << p.getCarAt(filteredCars[i], filteredCars[i+1], filteredCars[i+2])->getName() << endl;
    cout << p.getCarAt(filteredCars[i], filteredCars[i+1], filteredCars[i+2])->getPlate() << endl;
  }

  cout << "====" << endl;

  for (unsigned int i = 0; i < filteredCars2.size(); i++) {
    cout << filteredCars2[i]->getName() << endl;
    cout << filteredCars2[i]->getPlate() << endl;
  }

  return 0;
}
