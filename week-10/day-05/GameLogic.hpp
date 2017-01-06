
#include "Map.hpp"
#include <vector>
#ifndef GAMELOGIC_HPP_
#define GAMELOGIC_HPP_


class GameLogic {
private:
public:
  GameLogic();
  bool isFiveInRow(int, int);
  bool isFiveInCol(int, int);
  bool isFiveDiagonalDown(int, int);
  bool isFiveDiagonalUp(int, int);
  bool areCoordinatesInBoundary(unsigned int, unsigned int);
  bool sameAsNeighbour(int, int, int, int);
  bool isGameWon(int, int);
  ~GameLogic();
};


#endif /* GAMELOGIC_HPP_ */
