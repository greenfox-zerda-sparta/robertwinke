/*
 * Skeleton.hpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */
#include "Character.hpp"
#include <vector>
#include <stdlib.h>

using namespace std;

#ifndef SKELETON_HPP_
#define SKELETON_HPP_

class Skeleton: public Character {
public:
  Skeleton(vector<vector<bool> > v);
  void drawCharacter(GameContext& context, int x, int y);
};



#endif /* SKELETON_HPP_ */
