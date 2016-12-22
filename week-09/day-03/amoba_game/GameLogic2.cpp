
#include "GameLogic2.hpp"
GameLogic2::GameLogic2() {
  map = std::vector<std::vector<int> > (20,std::vector<int>(20,0));
}
std::vector<std::vector<int> >& GameLogic2::getMap() {
  return map;
}

bool GameLogic2::isFiveInRow(int xCoord, int yCoord) {
  int i = 1;
  unsigned int x = xCoord, y = yCoord;
  while (i < 5 && x < map.size() - 1 && map[x][y] == map[x + 1][y]) {
    i++;
    x++;
  }
  x = xCoord;
  while (i < 5 && x > 0 && map[x][y] == map[x - 1][y]) {
    i++;
    x--;
  }
  return i >= 5;
}
bool GameLogic2::isFiveInCol(int xCoord, int yCoord) {
  int i = 1;
  unsigned int x = xCoord, y = yCoord;
  while (i < 5 && y < map.size() - 1 && map[x][y] == map[x][y + 1]) {
    i++;
    y++;
  }
  y = yCoord;
  while (i < 5 && y > 0 && map[x][y] == map[x][y - 1]) {
    i++;
    y--;
  }
  return i >= 5;
}
bool GameLogic2::isFiveDiagonalDown(int xCoord, int yCoord) {
  int i = 1;
  unsigned int x = xCoord, y = yCoord;
  while (i < 5 && x < map.size() - 1 && y < map.size() - 1 && map[x][y] == map[x + 1][y + 1]) {
    i++;
    x++;
    y++;
  }
  x = xCoord;
  y = yCoord;
  while (i < 5 && x > 0 && y > 0 && map[x][y] == map[x - 1][y - 1]) {
    i++;
    x--;
    y--;
  }
  return i >= 5;
}
bool GameLogic2::isFiveDiagonalUp(int xCoord, int yCoord) {
  int i = 1;
  unsigned int x = xCoord, y = yCoord;
  while (i < 5 && x > 0 && y < map.size() - 1 && map[x][y] == map[x - 1][y + 1]) {
    i++;
    x--;
    y++;
  }
  x = xCoord;
  y = yCoord;
  while (i < 5 && x < map.size() - 1 && y > 0 && map[x][y] == map[x + 1][y - 1]) {
    i++;
    x++;
    y--;
  }
  return i >= 5;
}
bool GameLogic2::isGameWon(int x, int y) {
  bool won = false;
    if (map[x][y] != 0) {
      if (isFiveInRow(x, y) || isFiveInCol(x, y) || isFiveDiagonalDown(x, y) || isFiveDiagonalUp(x, y)) {
        won = true;
      }
    }
  return won;
}

