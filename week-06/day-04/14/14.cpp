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

  vector<int> carsToFind = p.carSearch("Zsiguli","Sárga");


  for (unsigned int i = 0; i < carsToFind.size(); i += 3) {
    cout << p.vect[carsToFind[i]][carsToFind[i+1]][carsToFind[i+2]]->getName() << endl;
    cout << p.vect[carsToFind[i]][carsToFind[i+1]][carsToFind[i+2]]->getPlate() << endl;
  }


  return 0;
}
