/*
 * Boss.hpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */

#include "Character.hpp"
#include <vector>
#include <stdlib.h>

using namespace std;

#ifndef BOSS_HPP_
#define BOSS_HPP_

class Boss: public Character {
public:
  Boss(vector<vector<bool> > v);
  void drawCharacter(GameContext& context, int x, int y);
};




#endif /* BOSS_HPP_ */
