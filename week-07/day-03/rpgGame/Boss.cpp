/*
 * Boss.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */

#include "Boss.hpp"


Boss::Boss(vector<vector<bool> > v) {
  coordinateX = rand() % 8 + 1;
  coordinateY = rand() % 8 + 1;
  while(v[coordinateX][coordinateY] != 1) {
    coordinateX = rand() % 8 + 1;
    coordinateY = rand() % 8 + 1;
  }
}

void Boss::drawCharacter(GameContext& context, int x, int y) {
  context.draw_sprite("boss.bmp", x*squareSize, y*squareSize);
}
