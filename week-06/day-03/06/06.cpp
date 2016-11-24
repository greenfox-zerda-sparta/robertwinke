/*
 * 06.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

template <class U>

double array_sum(U* array, int size) {
  U sum = U();

  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return sum;
}

template<>
double array_sum <char>(char* array, int size) {
  char *temp = array;
  for (int i = 0; i < size; i++) {
    temp[i] = tolower(temp[i]);
  }
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += ((int)temp[i] - 96);
  }
  return sum;
}

int main() {
  // Create a function template that takes an array, and its length and return the sum of his elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
  // Create a template specialization for string types, that it returns the sum of the string's first characters position in the alphabet

  int array[3] = {1,2,3};
  double array1[3] = {1.3,2.2,3.6};
  char alma[4] = {'a','a','a','b'};

  cout << array_sum(array, 3) << endl;
  cout << array_sum(array1, 3) << endl;
  cout << array_sum(alma, 4) << endl;

  return 0;
}


