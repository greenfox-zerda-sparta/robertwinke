/*
 * MyGame.cpp
 *
 *  Created on: Dec 7, 2016
 *      Author: robertwinke
 */

#include "MyGame.hpp"

using namespace std;

MyGame::MyGame() {
  myMap = new Map;
  squareSize = 72;
  heroX = 0;
  heroY = 0;
  heroFace = "hero-down.bmp";
}
void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-right.bmp");
  context.load_file("hero-left.bmp");
}
void MyGame::render(GameContext& context) {
  myMap->drawMap(context);
  drawHero(context, heroX, heroY);
  context.render();
}
void MyGame::drawHero(GameContext& context, int x, int y) {
  switch (keyCode(context)) {
  case 0:
    heroFace = "hero-up.bmp";
    if (heroY >= 1) {
      if (myMap->v[heroX][heroY-1]) {
        heroY--;
      }
    }
    break;
  case 1:
    heroFace = "hero-right.bmp";
    if (heroX < 9) {
      if (myMap->v[heroX+1][heroY]) {
        heroX++;
      }
    }
    break;
  case 2:
    heroFace = "hero-down.bmp";
    if (heroY < 9) {
      if (myMap->v[heroX][heroY+1]) {
        heroY++;
      }
    }
    break;
  case 3:
    heroFace = "hero-left.bmp";
    if (heroX >= 1) {
      if (myMap->v[heroX-1][heroY]) {
        heroX--;
      }
    }
    break;
  case 4:
    break;
  }
  context.draw_sprite(heroFace, x*squareSize, y*squareSize);
}
int MyGame::keyCode(GameContext& context) {
  int keyCode;
  for (int i = 0; i < 5; i++) {
    if (context.was_key_pressed(i)) {
      keyCode = i;
    }
  }
  return keyCode;
}
MyGame::~MyGame() {
  delete myMap;
}
