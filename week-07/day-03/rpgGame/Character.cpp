/*
 * Character.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */
#include "Character.hpp"


Character::Character() {
  face = "";
  squareSize = 72;
  coordinateX = 0;
  coordinateY = 0;
}


void Character::drawCharacter(GameContext& context) {
  context.draw_sprite(face, coordinateX * squareSize, coordinateY * squareSize);
}
int Character::getCoordinateX() {
  return coordinateX;
}
int Character::getCoordinateY() {
  return coordinateY;
}
void Character::moveHero(GameContext& context) {

}
Character::~Character() {

}

