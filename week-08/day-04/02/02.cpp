/*
 * 02.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int addNumbersTill(int n) {

  if ( n == 1) {
    return 1;
  }

  return n + (addNumbersTill(n-1));
}

int main() {
// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n

  cout << addNumbersTill(5);

  return 0;
}

