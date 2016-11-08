/*
 * 08.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  Pirate new_pirate;
  cout << new_pirate.hows_goin_mate() << endl;

  new_pirate.drink_rum();
  new_pirate.drink_rum();
  new_pirate.drink_rum();
  new_pirate.drink_rum();
  new_pirate.drink_rum();
  cout << new_pirate.hows_goin_mate();

  return 0;
}


