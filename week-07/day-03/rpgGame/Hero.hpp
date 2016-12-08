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
  string heroFace;
public:
  Hero();
  void drawCharacter(GameContext& context, int x, int y, vector<vector<bool> > v);
  int keyCode(GameContext& context);
};



#endif /* HERO_HPP_ */
