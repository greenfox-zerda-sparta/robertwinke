/*
 * 05.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int sumOfBunnyEars(int numOfBunnies) {
  if (numOfBunnies == 1) {
    return 2;
  }
  return 2 + sumOfBunnyEars(numOfBunnies - 1);
}

int main() {
// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).

  cout << sumOfBunnyEars(4);

  return 0;
}

