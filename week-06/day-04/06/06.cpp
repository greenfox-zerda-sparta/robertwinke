/*
 * 06.cpp
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

void vectorChanger (vector<double>& b) {
  srand(time(NULL));

  int size = b.size();

  int randIndex = rand() % size;

  b.at(randIndex) += b.at(size-1);

  b.erase(b.begin() + (size - 1));
}

void printVector(vector<double>& b) {
  for (unsigned int i = 0; i < b.size(); i++) {
    cout << b[i] << endl;
  }
}

int main() {
  //create a vector of doubles with the size of 30, with every element equal of 1.5
  //create functions that takes this vector, pick the last element of it and adding its value to
  //an other item from the vector(this item place is random) and remove the last element at the end
  //run this function 20 times, then print every element of the vector

  vector<double> v(30,1.5);

  for (int i = 0; i < 20; i++) {
    vectorChanger(v);
  }

  printVector(v);


  return 0;
}
