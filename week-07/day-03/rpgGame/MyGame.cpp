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
  characters.push_back(new Hero());
  for (int i = 0; i < 3; i++) {
    characters.push_back(new Skeleton());
  }
  characters.push_back(new Boss());
}
void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-right.bmp");
  context.load_file("hero-left.bmp");
  context.load_file("skeleton.bmp");
  context.load_file("boss.bmp");
}
void MyGame::render(GameContext& context) {
  myMap->drawMap(context);
  characters[0]->moveHero(context);
  for (unsigned int i = 0; i < characters.size(); i++) {
    characters[i]->drawCharacter(context);
  }
  context.render();
}
MyGame::~MyGame() {
  delete myMap;
  for (unsigned int i = 0; i < characters.size(); i++) {
    delete characters[i];
  }
}
