/*
 * GameLogic2.hpp
 *
 *  Created on: Dec 22, 2016
 *      Author: robertwinke
 */

#include <vector>
#ifndef GAMELOGIC2_HPP_
#define GAMELOGIC2_HPP_


class GameLogic2 {
private:
  std::vector<std::vector<int> > map;
public:
  GameLogic2();
  std::vector<std::vector<int> >& getMap();
  bool isFiveInRow(int, int);
  bool isFiveInCol(int, int);
  bool isFiveDiagonalDown(int, int);
  bool isFiveDiagonalUp(int, int);
  bool isGameWon(int, int);
};


#endif /* GAMELOGIC2_HPP_ */
