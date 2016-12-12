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
private:
  int squareSize;
  static vector<vector<bool> > map;
  void readMapFromFile(vector<vector<bool> >& v);
public:
  Map();
  void drawMap(GameContext& context);

  friend class Hero;
  friend class Boss;
  friend class Skeleton;
};



#endif /* MAP_HPP_ */
