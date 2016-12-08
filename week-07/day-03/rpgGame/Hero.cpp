/*
 * Hero.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */

#include "Hero.hpp"

Hero::Hero() {
  coordinateX = 0;
  coordinateY = 0;
  heroFace = "hero-down.bmp";
}
void Hero::drawCharacter(GameContext& context, int x, int y, vector<vector<bool> > v) {
  switch (keyCode(context)) {
  case 0:
    heroFace = "hero-up.bmp";
    if (coordinateY >= 1) {
      if (v[coordinateX][coordinateY-1]) {
        coordinateY--;
      }
    }
    break;
  case 1:
    heroFace = "hero-right.bmp";
    if (coordinateX < 9) {
      if (v[coordinateX+1][coordinateY]) {
        coordinateX++;
      }
    }
    break;
  case 2:
    heroFace = "hero-down.bmp";
    if (coordinateY < 9) {
      if (v[coordinateX][coordinateY+1]) {
        coordinateY++;
      }
    }
    break;
  case 3:
    heroFace = "hero-left.bmp";
    if (coordinateX >= 1) {
      if (v[coordinateX-1][coordinateY]) {
        coordinateX--;
      }
    }
    break;
  case 4:
    break;
  }
  context.draw_sprite(heroFace, x*squareSize, y*squareSize);
}
int Hero::keyCode(GameContext& context) {
  int keyCode;
  for (int i = 0; i < 5; i++) {
    if (context.was_key_pressed(i)) {
      keyCode = i;
    }
  }
  return keyCode;
}

