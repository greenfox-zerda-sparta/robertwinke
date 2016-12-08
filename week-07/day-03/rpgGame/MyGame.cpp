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
  myHero = new Hero;
  mySkeleton = new Skeleton(myMap->v);
  myBoss = new Boss(myMap->v);
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
  mySkeleton->drawCharacter(context,mySkeleton->getCoordinateX(),mySkeleton->getCoordinateY());
  myBoss->drawCharacter(context,myBoss->getCoordinateX(),myBoss->getCoordinateY());
  myHero->drawCharacter(context,myHero->getCoordinateX(),myHero->getCoordinateY(),myMap->v);
  context.render();
}
MyGame::~MyGame() {
  delete myMap;
  delete myHero;
}
