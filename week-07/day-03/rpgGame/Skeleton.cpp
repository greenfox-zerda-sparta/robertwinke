/*
 * Skeleton.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */

#include "Skeleton.hpp"

Skeleton::Skeleton(vector<vector<bool> > v) {
  coordinateX = rand() % 8 + 1;
  coordinateY = rand() % 8 + 1;
  while(v[coordinateX][coordinateY] != 1) {
    coordinateX = rand() % 8 + 1;
    coordinateY = rand() % 8 + 1;
  }
}

void Skeleton::drawCharacter(GameContext& context, int x, int y) {
  context.draw_sprite("skeleton.bmp", x*squareSize, y*squareSize);
}
