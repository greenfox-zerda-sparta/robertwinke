/*
 * 01.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include "Shape.h"
#include "Square.h"
#include "Triangle.h"

using namespace std;



// Add a variable to the Shape class. Make it "protected".
//    This should be called mArea.
// Create a function that calculates the areas of the shape.
// Update the shapes Triangle and Square to have variables that represent their dimensions,
//   that you will need to calculate the area. One whould be width, the other height.
// Implement getter and setter functions for them.
// Make sure to call the function that calculates the area and stores it in mArea,
//   in the setter functions.
// Create a constructor that takes the height and width as it's parameters.
// Create a destructor, that destructs the objects.
//
// Write code into the main function that uses these.
// Make sure it demonstrates how the class works by printing out the results.

int main() {

  Triangle* triangle = new Triangle(2,3);
  Square* square = new Square(2);
  Shape* a;
  triangle->calculate_area();
  square->calculate_area();

  cout << triangle->get_area() << endl;
  cout << square->get_area() << endl;

  a = square;
  cout << "I am a...  " << *a->getName() << endl;

  a = triangle;
  cout << "I am a...  " << *a->getName() << endl;


  delete triangle;
  delete square;

  return 0;

}

