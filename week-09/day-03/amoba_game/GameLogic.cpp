/*
 * GameLogic.cpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */

#include "GameLogic.hpp"

GameLogic::GameLogic() {
  map = std::vector<std::vector<int> > (20,std::vector<int>(20,0));
}
std::vector<std::vector<int> >& GameLogic::getMap() {
  return map;
}

bool GameLogic::isFiveInRow(int x, int y) {
  int i = 1;
  if (x < 15) {
    while (i < 5 && map[x][y] == map[x + 1][y]) {
      i++;
      x++;
    }
  }
  return i >= 5;
}
bool GameLogic::isFiveInCol(int x, int y) {
  int i = 1;
  if (y < 15) {
    while (i < 5 && map[x][y] == map[x][y + 1]) {
      i++;
      y++;
    }
  }
  return i >= 5;
}
bool GameLogic::isFiveDiagonalDown(int x, int y) {
  int i = 1;
  if (x < 15 && y < 15) {
    while (i < 5 && map[x][y] == map[x + 1][y + 1]) {
      i++;
      x++;
      y++;
    }
  }
  return i >= 5;
}
bool GameLogic::isFiveDiagonalUp(int x, int y) {
  int i = 1;
  if (x < 15 && y > 3) {
    while (i < 5 && map[x][y] == map[x + 1][y - 1]) {
      i++;
      x++;
      y--;
    }
  }
  return i >= 5;
}
bool GameLogic::isGameWon() {
  bool won = false;
  for (unsigned int i = 0; i < map.size(); i++) {
    for (unsigned int j = 0; j < map.size(); j++) {
      if (map[i][j] != 0) {
        if (isFiveInRow(i, j) || isFiveInCol(i, j) || isFiveDiagonalDown(i, j) || isFiveDiagonalUp(i, j)) {
          won = true;
        }
      }
    }
  }
  return won;
}
