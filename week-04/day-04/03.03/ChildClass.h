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
    string* mChildString;
  public:
    ChildClass();
    ChildClass(string _str);
    virtual ~ChildClass();
    string* getChildStringAddress();
};

#endif /* CHILDCLASS_H_ */
