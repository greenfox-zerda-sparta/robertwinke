/*
 * IntArrayList.h
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */
#include "IntList.h"

#ifndef INTARRAYLIST_H_
#define INTARRAYLIST_H_

class IntArrayList: public IntList {
public:
  IntArrayList();
  void append(int value);
  void insert(int index, int value);
  void deleteElement(int index);
  int getFirst();
  int getLast();
  ~IntArrayList();

private:
  int* array;
};



#endif /* INTARRAYLIST_H_ */
