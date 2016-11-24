/*
 * 02.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  //create an integer vector with the size of 5 and print all elements of it

  vector<int> v(5);

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  return 0;
}
