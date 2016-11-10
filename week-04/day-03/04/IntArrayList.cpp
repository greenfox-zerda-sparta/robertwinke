/*
 * IntArrayList.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */
#include <iostream>
#include "IntList.h"
#include "IntArrayList.h"
using namespace std;

IntArrayList::IntArrayList() {
  array = new int[getLength()];
  }
void IntArrayList::append(int value) {
  int* new_array = new int[getLength() + 1];

  for (int i = 0; i < getLength(); i++) {
    new_array[i] = array[i];
  }
  incrementLength();
  new_array[getLength()-1] = value;
  delete[] array;
  array = new_array;

}
void IntArrayList::insert(int index, int value) {
  incrementLength();
  int* new_array = new int[getLength()];

  for (int i = 0; i < index; i++) {
    new_array[i] = array[i];
  }

  new_array[index] = value;

  for (int i = index + 1; i < getLength(); i++) {
    new_array[i] = array[i-1];
  }

  delete[] array;
  array = new_array;
}

void IntArrayList::deleteElement(int index) {
  decrementLength();
  int* new_array = new int[getLength()];

  for (int i = 0; i < index; i++) {
    new_array[i] = array[i];
  }
  for (int i = index; i < getLength(); i++) {
    new_array[i] = array[i + 1];
  }
  delete[] array;
  array = new_array;

}
int IntArrayList::getFirst() {
  if (getLength() > 0) {
    return array[0];
  }
  else {
    cerr << "empty array";
    return -1;
  }
}
int IntArrayList::getLast() {
  if (getLength() == 0) {
    cerr << "empty array";
    return -1;
  }
  else {
    return array[getLength() - 1];
  }
}

void IntArrayList::printList() {
  for (int i = 0; i < getLength(); i++) {
    cout << array[i] << " ";
  }
}

IntArrayList::~IntArrayList() {
  delete[] array;
}




