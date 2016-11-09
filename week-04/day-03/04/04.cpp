//============================================================================
// Name        : week4d3ex4.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "IntList.h"
#include "IntArrayList.h"
using namespace std;

// Take the attached hpp and cpp files. Read them trough.
// Choose either IntArrayList or IntLinkedList and implement it.
// Write code here in a main function that uses it and tests it in edge cases as well.

int main() {

  IntArrayList* my_list = new IntArrayList;

  my_list->append(5);

  cout << my_list->getLength() << endl;
  cout << my_list->getLast();

  delete my_list;
  return 0;
}
