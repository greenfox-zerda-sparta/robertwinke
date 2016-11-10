/*
 * ParentClass.h
 *
 *  Created on: Nov 10, 2016
 *      Author: robertwinke
 */
#include <string>
using namespace std;

#ifndef PARENTCLASS_H_
#define PARENTCLASS_H_


class ParentClass {
  private:
    string* mParentString1;
    string* mParentString2;
  public:
    ParentClass();
    string getString();
    virtual string virtualGetString();
    virtual ~ParentClass();
};
#endif /* PARENTCLASS_H_ */
