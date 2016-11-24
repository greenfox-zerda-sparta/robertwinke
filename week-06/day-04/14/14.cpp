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
  //Create a vector of string, for the following car types:
  //"Moszkvics", "Volga", "ZISZ", "Tatra", "Zbrojovka", "Hotchkiss", "DAF", "Warszawa", "Puli", "Balaton",
  //"Benz", "Marauder", "Zsiguli" , "IFA", "Fjord", "Trabant", "Wartburg", "Martini"
  //Create a vector of strings, for the following colors:
  //"Piros", "Narancssárga", "Zöld", "Kék", "Türkiz", "Barna", "Lila", "Sárga", "Fekete", "Fehér"
  //Create a Car class, which holds 3 strings, the name of a car, the color of it, and the platenumber in a format like "AAA"-"000"
  //Create a 3 dimensional vector of our car class, that will represent a "parking house"
    //1 dimension: row of cars
    //2 dimension: cars on a platform like a table game
    //3 dimension: "parking house"
  //Make this parking house 4*4*8 (4*4 platform on 8 floors), then fill it with cars! :)
  //Give these cars a random type from our car type vector!
  //Give these cars a random color from our color vector!
  //Give these cars a random plate number!
  //Make sure there are no duplicates in car plates!
  //Print out how much "Sárga"-"Zsiguli" we have, with their position and platenumber in the parking house!
  //At the end empty the parking house!

  srand(time(NULL));

  ParkingHouse p(4,4,8);


  for(unsigned int i = 0; i < p.vect.size(); i++) {
    for (unsigned int j = 0; j < p.vect[0].size(); j++) {
      for (unsigned int k = 0; k < p.vect[0][0].size(); k++) {
        p.vect[i][j][k] = Car();
      }
    }
  }


  cout << ((Car)p.vect[2][2][2]).getName() << endl;

  return 0;
}
