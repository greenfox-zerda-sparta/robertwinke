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
#include "Plate.h"

using namespace std;


int main() {
  srand(time(NULL));

  ParkingHouse p(4,4,8);
  Plate plates(128);

  for(unsigned int i = 0; i < p.vect.size(); i++) {
    for (unsigned int j = 0; j < p.vect[0].size(); j++) {
      for (unsigned int k = 0; k < p.vect[0][0].size(); k++) {
        p.vect[i][j][k] = new Car();
        p.vect[i][j][k]->setPlate(plates.getPlate(i*j*k));
      }
    }
  }

  vector<int> carsToFind = p.carSearch("Zsiguli","Sárga");

  for (unsigned int i = 0; i < carsToFind.size(); i += 3) {
    cout << p.vect[carsToFind[i]][carsToFind[i+1]][carsToFind[i+2]]->getPlate() << endl;
  }


  return 0;
}
