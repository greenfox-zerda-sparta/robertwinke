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
  bool isFiveInRow(unsigned int, unsigned int);
  bool isFiveInCol(unsigned int, unsigned int);
  bool isFiveDiagonalDown(unsigned int, unsigned int);
  bool isFiveDiagonalUp(unsigned int, unsigned int);
  bool isGameWon(unsigned int, unsigned int);
};


#endif /* GAMELOGIC2_HPP_ */
