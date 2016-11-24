/*
 * 12.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */




#include <iostream>
#include <string>
#include <vector>

using namespace std;

void incrementGivenInnerVectorElement(vector<int>& v, unsigned int index) {
  if (index >= v.size()) {
    throw "index is out of range";
  }
  else {
    v[index]++;
  }
}

void printVector(const vector<vector<int> >& b) {
  for (unsigned int i = 0; i < b.size(); i++) {
    for(unsigned int j = 0; j < b[i].size(); j++) {
      cout << b[i][j];
    }
    cout << endl;
  }
}

int main() {
  //create a vector of vector of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector
  //create a function which increase a specific element of an inner vector by 1

  vector<vector<int> > b(5, vector<int> (5,0));

  printVector(b);
  try {
    incrementGivenInnerVectorElement(b[1],4);
  }
  catch (const char* err) {
    cout << err;
  }
  cout << endl;
  printVector(b);
  return 0;
  return 0;
}

