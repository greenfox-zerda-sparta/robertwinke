/*
 * Pirate.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */

#include "Pirate.h"

Pirate::Pirate() {
  this->drink_count = 0;
}

void Pirate::drink_rum() {
  drink_count += 1;
}

string Pirate::hows_goin_mate() {
  if (drink_count > 4) {
    return "Arrrr!";
  }
  else {
    return "Nothin'";
  }
}
