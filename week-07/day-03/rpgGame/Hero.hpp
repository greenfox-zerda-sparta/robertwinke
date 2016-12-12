/*
 * Hero.hpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */
#include "Character.hpp"
#include "game-engine.hpp"
#include <string>
#include <vector>

using namespace std;

#ifndef HERO_HPP_
#define HERO_HPP_

class Hero: public Character {
private:
public:
  Hero();
  void moveHero(GameContext& context);
  void takeAStep(int directionX, int directionY);
  bool isItFloor(int relativeX, int relativeY);
  int keyCode(GameContext& context);
};



#endif /* HERO_HPP_ */
