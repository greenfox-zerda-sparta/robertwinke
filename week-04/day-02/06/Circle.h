/*
 * Circle.h
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

class Circle {
public:
  Circle(double radius);
  double get_circumference();
  double get_area();

private:
  double radius;
  const double pi = 3.14159265;
};



#endif /* CIRCLE_H_ */
