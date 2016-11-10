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

  IntList* my_list = new IntArrayList;

  my_list->append(5);
  my_list->append(6);
  my_list->append(7);
  my_list->append(8);

  ((IntArrayList*)my_list)->printList();        //casting so it can handle the function that is only in the childclass
  cout << endl;

  cout << "first " << my_list->getFirst() << endl;
  cout << "length " << my_list->getLength() << endl;
  cout << "last " << my_list->getLast() << endl;

  my_list->deleteElement(0);
  ((IntArrayList*)my_list)->printList();
  cout << endl;

  cout << "first " << my_list->getFirst() << endl;
  cout <<"length " <<  my_list->getLength() << endl;
  cout << "last " << my_list->getLast() << endl;

  cout << "is empty " << my_list->isEmpty();

  delete my_list;
  return 0;
}
