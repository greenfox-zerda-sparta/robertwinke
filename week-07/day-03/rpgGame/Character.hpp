/*
 * Character.hpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */

#include "game-engine.hpp"

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

class Character {
protected:
  int squareSize;
  int coordinateX;
  int coordinateY;
public:
  Character();
  virtual void drawCharacter(GameContext& context, int x, int y);
  virtual int getCoordinateX();
  virtual int getCoordinateY();
  virtual ~Character();
};





#endif /* CHARACTER_HPP_ */
