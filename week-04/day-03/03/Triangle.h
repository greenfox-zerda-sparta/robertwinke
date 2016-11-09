/*
 * Triangle.h
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */

#include "Shape.h"

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle: public Shape {

  public:
    Triangle(float base, float height);

    string* getName();
    void calculate_area();

  private:
    float height;
    float base;

};



#endif /* TRIANGLE_H_ */
