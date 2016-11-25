/*
 * Plate.h
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */
#include <string>
#include <vector>

using namespace std;


#ifndef PLATE_H_
#define PLATE_H_


class Plate {
private:
  int plateCount;
  vector<string> plates;
public:
  Plate(int);
  string getPlate(int);
};


#endif /* PLATE_H_ */
