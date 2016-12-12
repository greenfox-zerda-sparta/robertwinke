/*
 * 06.cpp
 *
 *  Created on: Dec 12, 2016
 *      Author: robertwinke
 */


// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in th calculations.



#define MY_PI 3.14

#include <iostream>
#include <stdlib.h>
#include <time.h>

int circumference(int radius);
int circarea(int radius);

int main() {
  srand(time(NULL));

  int array[5];

  for (int i = 0; i < 5; i++) {
    array[i] = rand() % 5 + 1;
  }

  for (int i = 0; i < 5; i++) {
    std::cout << circumference(array[i]) << std::endl;
  }
  for (int i = 0; i < 5; i++) {
    std::cout << circarea(array[i]) << std::endl;
  }

  return 0;
}
int circumference(int radius) {
  return 2*MY_PI*radius;
}
int circarea(int radius) {
  return radius*radius*MY_PI;
}

