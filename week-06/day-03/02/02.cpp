/*
 * 02.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>

using namespace std;

template <class T>

void first_add_to_three(T array[3]) {
  array[2] += array[0];
}


int main() {
  // create a function template that takes 3 long array
  // and add the 1st element of it to the third

  int array[3] = {1,2,3};
  string array1[3] = {"sfg","sdgs","alma"};

  first_add_to_three(array);
  first_add_to_three(array1);

  cout << array[2] << endl;
  cout << array1[2] << endl;

  return 0;
}
