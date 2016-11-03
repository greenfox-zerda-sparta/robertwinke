/*
 * 03.cpp
 *
 *  Created on: Nov 3, 2016
 *      Author: robertwinke
 */




#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

void print_car(Car vehicle) {
  if (vehicle.type != TESLA){
    cout << vehicle.type << endl << vehicle.km << endl << vehicle.gas << endl;
  }
  else {
    cout << vehicle.type << endl << vehicle.km <<  endl;
  }
}


int main() {

  Car toyota = {TOYOTA, 20000, 50};

  print_car(toyota);

  return 0;
}

