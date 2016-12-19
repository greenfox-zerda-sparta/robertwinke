/*
 * 04.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>

using namespace std;

int exponent(int n, int power) {
  if (power == 0) {
    return 1;
  }
  return n * exponent(n, power -1);
}

int main() {
// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

  cout << exponent(2, 3);

  return 0;
}
