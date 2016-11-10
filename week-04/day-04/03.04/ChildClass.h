/*
 * ChildClass.h
 *
 *  Created on: Nov 10, 2016
 *      Author: robertwinke
 */

#include "ParentClass.h"

#ifndef CHILDCLASS_H_
#define CHILDCLASS_H_


class ChildClass : public ParentClass {
  private:
    string* mChildString1;
    string* mChildString2;
  public:
    ChildClass();
    string getString();
    string virtualGetString();
    virtual ~ChildClass();
};

#endif /* CHILDCLASS_H_ */
