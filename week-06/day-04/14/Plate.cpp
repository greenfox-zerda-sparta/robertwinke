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

  while(plates.size() != plateCount) {
    addOnePlate();
  }
}

string Plate::getPlate(int n_plate) {
  return plates[n_plate];
}

void Plate::addOnePlate() {
  string temPlate = "";
  int numIndex;
  int letterIndex;

  for (int j = 0; j < 3; j++) {
    letterIndex = rand() % 26;
    temPlate += letters[letterIndex];
  }
  temPlate += '-';
  for (int j = 0; j < 3; j++) {
    numIndex = rand() % 10;
    temPlate += nums[numIndex];
  }
  if (!findPlate(temPlate)) {
    plates.push_back(temPlate);
  }
}

bool Plate::findPlate(string temp) {
  for (unsigned int i = 0; i < plates.size(); i++) {
    if (plates[i] == temp) {
      return true;
    }
  }
  return false;
}

