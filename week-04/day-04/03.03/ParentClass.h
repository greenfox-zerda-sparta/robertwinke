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
    string* mParentString;
  public:
    ParentClass();
    void setString(string _str);
    string getString();
    string* getStringAddress();
    virtual ~ParentClass();
};
#endif /* PARENTCLASS_H_ */
