/*
 * 11.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */





#include <iostream>
#include <string>
#include <vector>

using namespace std;
//create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)

void incrementGivenInnerVector(vector<int>& v) {
  for (unsigned int i = 0; i < v.size(); i++) {
    v[i]++;
  }
}

void printVector(vector<vector<int> >& b) {
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
  //create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)



  vector<vector<int> > b(5, vector<int> (5,0));

  printVector(b);
  incrementGivenInnerVector(b[1]);
  cout << endl;
  printVector(b);
  return 0;
}
