/*
 * Boss.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */

#include "Boss.hpp"

Boss::Boss(){
  face = "boss.bmp";
  coordinateX = rand() % 8 + 1;
  coordinateY = rand() % 8 + 1;
  while(Map::map[coordinateX][coordinateY] != 1) {
    coordinateX = rand() % 8 + 1;
    coordinateY = rand() % 8 + 1;
  }
}
