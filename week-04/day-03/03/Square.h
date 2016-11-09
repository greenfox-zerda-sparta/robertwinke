/*
 * Square.h
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */

#include "Shape.h"

#ifndef SQUARE_H_
#define SQUARE_H_

class Square: public Shape {

  public:
    Square(float side);

    string* getName();
    void calculate_area();

  private:
    float side;
};



#endif /* SQUARE_H_ */
