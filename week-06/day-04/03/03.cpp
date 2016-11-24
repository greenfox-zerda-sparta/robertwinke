/*
 * 03.cpp
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
  //Create a vector of integers
  //reserve place for 10 element, then fill those place with random numbers between 0 and 10

  vector<int> v;

  v.reserve(10);
  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    v[i] = rand() % 11;
    cout << v[i] << endl;
  }



  return 0;
}

