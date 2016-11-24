/*
 * 05.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
  //create a vector of integers with the size of 10, fill them with random numbers
  //create a vector of doubles and reserve place for 10 items
  //push and item to the end of the vector with the double places
  //print which vectors size is higher (and why?)

  vector<int> v(10);

  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    v[i] = rand() % 11;
  }

  vector<double> b;
  b.reserve(10);
  b.push_back(10);

  v.size() > b.size() ? cout << "intvector is bigger" : cout << "doublevector is bigger";

  return 0;
}


