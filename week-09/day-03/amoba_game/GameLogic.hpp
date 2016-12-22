/*
 * GameLogic.hpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */
#include <vector>

#ifndef GAMELOGIC_HPP_
#define GAMELOGIC_HPP_

class GameLogic {
private:
  std::vector<std::vector<int> > map;
public:
  GameLogic();
  std::vector<std::vector<int> >& getMap();
  bool isFiveInRow(int, int);
  bool isFiveInCol(int, int);
  bool isFiveDiagonalDown(int, int);
  bool isFiveDiagonalUp(int, int);
  bool isGameWon();
};

#endif /* GAMELOGIC_HPP_ */
