/*
 * 05.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>

using namespace std;

template <class U, class T>

void more_bytes(U first, T second) {
  sizeof(U) > sizeof(T) ? cout << first : cout << second;

}

int main() {
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then

  int num = 2022;
  double num1 = 345;

  more_bytes(num,num1);

  return 0;
}


