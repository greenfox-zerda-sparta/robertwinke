/*
 * 09.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addVector(vector<vector<int> >& b) {
  b.push_back(vector<int> (5,0));
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
  //create a vector of vector of integers, yeah a vector that holds vectors of integers
  //the inner vectors have 5 integers, all of them 0
  //the outer vector is holding 5 vector at the begining
  //create a function that will add a new vector of integers to the end of our outer vector


  vector<vector<int> > b(5, vector<int> (5,0));

  printVector(b);
  addVector(b);
  cout << endl;
  printVector(b);

 return 0;
}
