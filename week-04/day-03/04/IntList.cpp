/*
 * IntList.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include "IntList.h"

using namespace std;

IntList::IntList() {
  mLength = 0;
}

int IntList::getLength() {
  return mLength;
}
bool IntList::isEmpty() {
  return mLength == 0;
}

void IntList::incrementLength() {
  this->mLength++;
}

void IntList::decrementLength() {
  this->mLength--;
}
IntList::~IntList() {

}



