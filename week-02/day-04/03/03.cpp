/*
 * 03.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */



#include <iostream>

using namespace std;

void swap(int *first, int *second){
  int temp = *first;
  *first = *second;
  *second = temp;

}

int main() {
  int first = 12;
  int second = 54;
  int *firstpoint = &first;
  int *secondpoint = &second;

  // Write a function that takes two int pointers and swaps the values where the pointers point

  swap(firstpoint, secondpoint);
  cout << first << endl << second;

  return 0;
}

