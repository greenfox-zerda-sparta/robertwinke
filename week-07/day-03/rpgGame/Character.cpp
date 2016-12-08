/*
 * Character.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */
#include "Character.hpp"


Character::Character() {
  squareSize = 72;
  coordinateX = 0;
  coordinateY = 0;
}
void Character::drawCharacter(GameContext& context, int x, int y) {

}
int Character::getCoordinateX() {
  return coordinateX;
}
int Character::getCoordinateY() {
  return coordinateY;
}
Character::~Character() {

}

