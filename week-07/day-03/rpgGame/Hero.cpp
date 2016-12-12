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
  face = "hero-down.bmp";
}
void Hero::moveHero(GameContext& context) {
  switch (keyCode(context)) {
  case 0:
    face = "hero-up.bmp";
    takeAStep(0, -1);
    break;
  case 1:
    face = "hero-right.bmp";
    takeAStep(1, 0);
    break;
  case 2:
    face = "hero-down.bmp";
    takeAStep(0, 1);
    break;
  case 3:
    face = "hero-left.bmp";
    takeAStep(-1, 0);
    break;
  }
}
void Hero::takeAStep(int directionX, int directionY) {
  if (isItFloor(directionX, directionY)) {
    coordinateX += directionX;
    coordinateY += directionY;
  }
}
bool Hero::isItFloor(int relativeX, int relativeY) {
  if (coordinateX + relativeX >= 0 && coordinateX+ relativeX < 10 && coordinateY + relativeY >= 0 && coordinateY + relativeY < 10) {
    if (Map::map[coordinateX + relativeX][coordinateY + relativeY]) {
      return true;
    }
  }
  return false;
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

