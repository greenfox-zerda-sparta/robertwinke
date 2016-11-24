/*
 * 13.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>
#include "Functions.hpp"

int main() {
  //Create a 2 dimensional vector with matrix!
      // 1 0 0 0
      // 0 1 0 0
      // 0 0 1 0
      // 0 0 0 1
  // Extend it to the following format:
      // 1 1 1 1 1
      // 0 1 0 0 1
      // 0 0 1 0 1
      // 0 0 0 1 1
      // 0 0 0 0 1
  // Mirror it horizontaly!
  // Mirror it verticaly!

  vector<vector<int> > v(4,vector<int> (4,0));

  printVector(v);

  cout << endl;




  extendMatrix(v);
  incrementVertical(v);
  printVector(v);

  cout << endl;
  incrementFirstRowLastCol(v);
  printVector(v);

  mirrorVertical(v);
  cout << endl;
  printVector(v);

  mirrorHorizontal(v);
  cout << endl;
  printVector(v);

  return 0;
}



