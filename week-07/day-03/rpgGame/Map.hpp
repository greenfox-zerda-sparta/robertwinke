/*
 * Map.hpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */
#include "game-engine.hpp"

#include <vector>
#include <fstream>

#ifndef MAP_HPP_
#define MAP_HPP_

using namespace std;

class Map {
public:
  int squareSize;
  vector<vector<bool> > v;
public:
  Map();
  void readMapFromFile(vector<vector<bool> >& v);
  void drawMap(GameContext& context);
};



#endif /* MAP_HPP_ */
