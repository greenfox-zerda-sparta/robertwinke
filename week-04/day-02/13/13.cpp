/*
 * 13.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include "Triangle.h"
using namespace std;

int main() {
    // Create a triangle class that takes a length parameter and prints a diamond like this:
    //       *
    //      ***
    //     *****
    //    *******
    //   *********
    //  ***********
    //   *********
    //    *******
    //     *****
    //      ***
    //       *
    //
    // It should take a number as parameter that describes how many lines the diamond has

  Triangle my_triangle(10);
  my_triangle.print_triangle();
  return 0;
}
