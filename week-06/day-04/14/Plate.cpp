/*
 * Plate.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */


#include "Plate.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

string nums = "0123456789";
string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


Plate::Plate(int number) {
  plateCount = number;

  int numIndex;
  int letterIndex;
  string temPlate = "";


  for (int i = 0; i < plateCount; i++) {
    for (int j = 0; j < 3; j++) {
      letterIndex = rand() % 26;
      temPlate += letters[letterIndex];
    }
    temPlate += '-';
    for (int j = 0; j < 3; j++) {
      numIndex = rand() % 10;
      temPlate += nums[numIndex];
    }
    plates.push_back(temPlate);
    temPlate = "";
  }
}
string Plate::getPlate(int n_plate) {
  return plates[n_plate];
}
