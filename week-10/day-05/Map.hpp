/*
 * map.hpp
 *
 *  Created on: Dec 31, 2016
 *      Author: robertwinke
 */

#include <vector>

#ifndef MAP_HPP_
#define MAP_HPP_

class Map {
private:
  static std::vector<std::vector<int> > map;
public:
  Map();
  std::vector<std::vector<int> >& getMap();
  void fillMap();
  friend class GameLogic;
};


#endif /* MAP_HPP_ */
