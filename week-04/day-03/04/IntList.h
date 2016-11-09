/*
 * IntList.h
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */


#ifndef INT_LIST_HPP
#define INT_LIST_HPP

class IntList {
  private:
    int mLength;
  public:
    IntList();
    virtual void append(int value) = 0;
    virtual void insert(int index, int value) = 0;
    virtual void deleteElement(int index) = 0;
    virtual int getFirst() = 0;
    virtual int getLast() = 0;
    int getLength();
    bool isEmpty();
    void incrementLength();
    void decrementLength();
    virtual ~IntList();

};



#endif
