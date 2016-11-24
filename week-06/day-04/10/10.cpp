/*
 * 10.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <algorithm>


using namespace std;

void printVector(const vector<double>& b) {
  for (unsigned int i = 0; i < b.size(); i++) {
    cout << b[i];
    cout << endl;
  }
}

int main() {
  //find how much integer divisor 2400 has
  //create a vector of doubles, reserve place for the divisors of 2400
  //fill this places with random numbers from 0 to 2400
  //sort them in ascending order

  srand(time(NULL));

  int numOfDivisors = 0;
  for (int i = 1; i <= 2400; i++) {
    if (2400 % i == 0) {
      numOfDivisors++;
    }
  }

  vector<double> v(numOfDivisors);

  for (int i = 0; i < numOfDivisors; i++) {
    v[i] = rand() % 2400;
  }

  sort(v.begin(), v.end());


  return 0;
}

