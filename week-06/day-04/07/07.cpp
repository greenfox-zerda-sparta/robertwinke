/*
 * 07.cpp
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

void printVector(const vector<int>& b) {
  for (unsigned int i = 0; i < b.size(); i++) {
    cout << b[i] << endl;
  }
}


int main() {
  //create a vector of integers with the size of 20
  //fill this vector with random numbers from 0 to 10
  //print the items of the vector
  //remove the even numbers, then print the items again

  vector<int> v(20);

  srand(time(NULL));

  unsigned size = v.size();

  for (unsigned int i = 0; i < size; i++) {
    v[i] = rand() % 11;
  }
  printVector(v);

  for (unsigned int i = 0; i < v.size(); i++) {
    if ((v[i] % 2) == 0) {
      v.erase(v.begin() + i);
      i--;
    }
  }
  cout << "new vector: \n";
  printVector(v);

  return 0;
}
