/*
 * 07.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */




#include <iostream>

using namespace std;

void trianglePrint(int number) {
  for (int i = 1; i <= number; i++) {
    for (int j = 0; j < i; j++){
      cout << '*';
    }
    cout << endl;
  }
}

int main() {
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument
  int number = 6;

  trianglePrint(number);

  return 0;
}
