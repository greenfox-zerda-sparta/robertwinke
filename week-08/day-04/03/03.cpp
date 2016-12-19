/*
 * 03.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */




#include <iostream>
#include <string>

using namespace std;

int sumOfDigits(int n) {
  if (n / 10 == 0) {
    return n;
  }

  int sum = 0;
  sum += n % 10 + sumOfDigits(n / 10);
  return sum;
}


int main() {
// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

  cout << sumOfDigits(5289);

  return 0;
}
