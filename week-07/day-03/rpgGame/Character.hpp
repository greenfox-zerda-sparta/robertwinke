/*
 * Character.hpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */


#include "game-engine.hpp"
#include <string>
#include "Map.hpp"
#include <vector>
using namespace std;

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

class Character {
protected:
  string face;
  int squareSize;
  int coordinateX;
  int coordinateY;
public:
  Character();
  virtual void drawCharacter(GameContext& context);
  virtual void moveHero(GameContext& context);
  virtual int getCoordinateX();
  virtual int getCoordinateY();
  virtual ~Character();
};







#endif /* CHARACTER_HPP_ */
