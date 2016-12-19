/*
 * 06.cpp
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
  if(numOfBunnies % 2 == 0) {
    return 3 + sumOfBunnyEars(numOfBunnies - 1);
  }
  return 2 + sumOfBunnyEars(numOfBunnies - 1);
}

int main() {
// We have bunnies standing in a line, numbered 1, 2, ... The odd bunnies
// (1, 3, ..) have the normal 2 ears. The even bunnies (2, 4, ..) we'll say
// have 3 ears, because they each have a raised foot. Recursively return the
// number of "ears" in the bunny line 1, 2, ... n (without loops or
// multiplication).

  cout << sumOfBunnyEars(5);

  return 0;
}
