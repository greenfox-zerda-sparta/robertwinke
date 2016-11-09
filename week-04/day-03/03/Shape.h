/*
 * Shape.h
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */

#ifndef SHAPE_H_
#define SHAPE_H_


#include <iostream>
#include <string>

using namespace std;


class Shape {

  public:
    Shape();

    virtual string* getName();
    virtual void calculate_area() = 0;
    float get_area();

    virtual ~Shape();

  protected:
    float mArea;

};


#endif /* SHAPE_H_ */
