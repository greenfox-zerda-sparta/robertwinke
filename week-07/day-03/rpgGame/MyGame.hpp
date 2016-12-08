/*
 * MyGame.hpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */

#include "game-engine.hpp"
#include "Map.hpp"
#include "Hero.hpp"
#include "Skeleton.hpp"
#include "Boss.hpp"

#ifndef MYGAME_HPP_
#define MYGAME_HPP_

using namespace std;

class MyGame : public Game {
private:
  Map* myMap;
  Hero* myHero;
  Skeleton* mySkeleton;
  Boss* myBoss;

public:
  MyGame();
  void init(GameContext& context);
  void render(GameContext& context);
  virtual ~MyGame();
};


#endif /* MYGAME_HPP_ */
