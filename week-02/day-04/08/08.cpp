/*
 * 08.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */



#include <iostream>

using namespace std;

void trianglePrint(int number) {
  for (int i = 1; i <= number; i++) {
    for (int j = number; j > i; j--) {
      cout << ' ';
    }
    for (int k = 0; k < 2 * i - 1; k++) {
      cout << '*';
    }
    cout << endl;
  }
}

int main() {
  // Create a function that takes a number and prints a triangle like this:
  //
  //      *
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********
  //
  // The triangle should have as many lines as the value in the argument

  int number = 8;

  trianglePrint(number);

  return 0;
}
