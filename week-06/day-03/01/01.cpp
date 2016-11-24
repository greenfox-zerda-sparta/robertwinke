//============================================================================
// Name        : week6day3.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

template <class T>

void first_print(T* array) {
  cout << array[0] << endl;
}

int main() {
  // create a function template the takes in a fix long array and prints the 1st element of it
  int array[2] = {1,2};
  string array1[2] = {"sfg","sdgs"};

  first_print(array);
  first_print(array1);

  return 0;
}
