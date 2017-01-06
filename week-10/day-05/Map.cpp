/*
 * Map.cpp
 *
 *  Created on: Dec 31, 2016
 *      Author: robertwinke
 */

#include "Map.hpp"

std::vector<std::vector<int> > Map::map = std::vector<std::vector<int> > (20,std::vector<int>(20,0));

Map::Map() {
  fillMap();
}
std::vector<std::vector<int> >& Map::getMap() {
  return map;
}
void Map::fillMap() {
  map = std::vector<std::vector<int> > (20,std::vector<int>(20,0));
}
