
#include "GameLogic2.hpp"

GameLogic2::GameLogic2() {
  map = std::vector<std::vector<int> > (20,std::vector<int>(20,0));
}
std::vector<std::vector<int> >& GameLogic2::getMap() {
  return map;
}

bool GameLogic2::isFiveInRow(unsigned int x, unsigned int y) {
  int i = 1;
  while (i < 5 && x < map.size() && map[x][y] == map[x + 1][y]) {
    i++;
    x++;
  }
  x -= i - 1;
  while (i < 5 && x > 0 && map[x][y] == map[x - 1][y]) {
    i++;
    x--;
  }
  return i >= 5;
}
bool GameLogic2::isFiveInCol(unsigned int x, unsigned int y) {
  int i = 1;
  while (i < 5 && y < map.size() && map[x][y] == map[x][y + 1]) {
    i++;
    y++;
  }
  y -= i - 1;
  while (i < 5 && y > 0 && map[x][y] == map[x][y - 1]) {
    i++;
    y--;
  }
  return i >= 5;
}
bool GameLogic2::isFiveDiagonalDown(unsigned int x, unsigned int y) {
  int i = 1;
  while (i < 5 && x < map.size() && y < map.size() && map[x][y] == map[x + 1][y + 1]) {
    i++;
    x++;
    y++;
  }
  x -= i - 1;
  y -= i - 1;
  while (i < 5 && x > 0 && y > 0 && map[x][y] == map[x - 1][y - 1]) {
    i++;
    x--;
    y--;
  }
  return i >= 5;
}
bool GameLogic2::isFiveDiagonalUp(unsigned int x, unsigned int y) {
  int i = 1;
  while (i < 5 && x > 0 && y < map.size() && map[x][y] == map[x - 1][y + 1]) {
    i++;
    x--;
    y++;
  }
  x += i - 1;
  y -= i - 1;
  while (i < 5 && x < map.size() && y > 0 && map[x][y] == map[x + 1][y - 1]) {
    i++;
    x++;
    y--;
  }
  return i >= 5;
}
bool GameLogic2::isGameWon(unsigned int x, unsigned int y) {
  bool won = false;
    if (map[x][y] != 0) {
      if (isFiveInRow(x, y) || isFiveInCol(x, y) || isFiveDiagonalDown(x, y) || isFiveDiagonalUp(x, y)) {
        won = true;
      }
    }
  return won;
}

