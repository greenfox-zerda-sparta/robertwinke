/*
 * Pirate.h
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */
#include <string>
#ifndef PIRATE_H_
#define PIRATE_H_

using namespace std;

class Pirate {
public:
  Pirate();
  void drink_rum();
  string hows_goin_mate();
private:
  int drink_count;
};


#endif /* PIRATE_H_ */
