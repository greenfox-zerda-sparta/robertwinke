/*
 * 09.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

  Student student1("julcsi");
  student1.add_grade(3);
  student1.add_grade(4);
  student1.add_grade(5);
  student1.add_grade(5);

  cout << student1.get_average();



  return 0;
}

