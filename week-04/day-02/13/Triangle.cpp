/*
 * Triangle.cpp

 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include "Triangle.h"

using namespace std;

Triangle::Triangle(int number) {
  this->number = number;
}

void Triangle::print_triangle() {
  for (int i = 1; i <= number / 2; i++) {
    for (int j = number / 2; j > i; j--) {
      cout << " " ;
    }
    for (int k = 0; k < 2 * i -1; k++) {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = number / 2 - 1; i >= 1; i--) {
    for (int j = number / 2; j > i; j--) {
      cout << " " ;
    }
    for (int k = 0; k < 2 * i - 1; k++) {
      cout << "*";
    }
    cout << endl;
  }
}


