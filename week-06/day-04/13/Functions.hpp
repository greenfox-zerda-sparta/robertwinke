/*
 * Functions.h
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */

#include <vector>

#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

using namespace std;

void mirrorVertical(vector<vector<int> >& b) {
  int rowCount = b.size();
  int colCount = b[0].size();
  int temp;
  for (int i = 0; i < rowCount/2; i++) {
    for (int j = 0; j < colCount; j++) {
      temp = b[i][j];
      b[i][j] = b[rowCount-i-1][j];
      b[rowCount-i-1][j] = temp;
    }
  }
}

void mirrorHorizontal(vector<vector<int> >& b) {
  int rowCount = b.size();
  int colCount = b[0].size();
  int temp;
  for (int i = 0; i < rowCount; i++) {
    for (int j = 0; j < colCount/2; j++) {
      temp = b[i][j];
      b[i][j] = b[i][colCount-j-1];
      b[i][colCount-j-1] = temp;
    }
  }
}

void incrementFirstRowLastCol(vector<vector<int> >& b) {
  for (unsigned int i = 0; i < b[0].size(); i++) {
    if (b[0][i] == 0) {
      b[0][i]++;
    }
  }
  for (unsigned int i = 0; i < b.size(); i++) {
    if (b[i][b.size()-1] == 0) {
      b[i][b.size()-1]++;
    }
  }
}

void extendMatrix(vector<vector<int> >& b) {
  b.push_back(vector<int> (4,0));

  for(unsigned int i = 0; i < b.size(); i++ ) {
    b[i].push_back(0);
  }
}

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

void incrementVertical(vector<vector<int> >& b) {
  for(unsigned int i = 0; i < b.size(); i++) {
    incrementGivenInnerVectorElement(b[i],i);
  }
}

#endif /* FUNCTIONS_HPP_ */
