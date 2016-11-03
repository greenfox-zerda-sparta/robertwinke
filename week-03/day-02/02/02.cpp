/*
 * 02.cpp
 *
 *  Created on: Nov 3, 2016
 *      Author: robertwinke
 */

#include <string>
#include <iostream>

using namespace std;

struct RectangularCuboid {
  double a;
  double b;
  double c;
};

// Write a function called "get_surface" that takes a RectangularCuboid
// and returns it's surface

// Write a function called "get_volume" that takes a RectangularCuboid
// and returns it's volume

int get_surface(RectangularCuboid rect) {
  int surface;

  surface = 2 * (rect.a * rect.b) + 2 * (rect.a * rect.c) + 2 * (rect.b * rect.c);

  return surface;
}

int get_volume(RectangularCuboid rect) {
  int volume;

  volume = rect.a * rect.b * rect.c;

  return volume;
}

int main() {
  RectangularCuboid cuboid;

  cuboid.a = 2;
  cuboid.b = 2;
  cuboid.c = 2;

  cout << "surface: " << get_surface(cuboid) << endl;
  cout << "volume: " << get_volume(cuboid) << endl;
  return 0;
}


