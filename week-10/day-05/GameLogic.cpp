
#include "GameLogic.hpp"
#include "Map.hpp"
GameLogic::GameLogic() {
}
bool GameLogic::areCoordinatesInBoundary(unsigned int x,unsigned int y) {
  return x > 0 && y > 0 && x < Map::map.size() - 1 && y < Map::map.size() - 1;
}
bool GameLogic::sameAsNeighbour(int x, int y, int relativeX, int relativeY) {
  return Map::map[x][y] == Map::map[x + relativeX][y + relativeY];
}
bool GameLogic::isFiveInRow(int xCoord, int yCoord) {
  int i = 1;
  unsigned int x = xCoord, y = yCoord;
  while (x < Map::map.size() - 1 && sameAsNeighbour(x, y, 1, 0)) {
    i++;
    x++;
  }
  x = xCoord;
  while (x > 0 && sameAsNeighbour(x, y, -1, 0)) {
    i++;
    x--;
  }
  return i >= 5;
}
bool GameLogic::isFiveInCol(int xCoord, int yCoord) {
  int i = 1;
  unsigned int x = xCoord, y = yCoord;
  while (y < Map::map.size() - 1 && sameAsNeighbour(x, y, 0, 1)) {
    i++;
    y++;
  }
  y = yCoord;
  while (y > 0 && sameAsNeighbour(x, y, 0, -1)) {
    i++;
    y--;
  }
  return i >= 5;
}
bool GameLogic::isFiveDiagonalDown(int xCoord, int yCoord) {
  int i = 1;
  unsigned int x = xCoord, y = yCoord;
  while (x < Map::map.size() - 1 && y < Map::map.size() - 1 && sameAsNeighbour(x, y, 1, 1)) {
    i++;
    x++;
    y++;
  }
  x = xCoord;
  y = yCoord;
  while (x > 0 && y > 0 && sameAsNeighbour(x, y, -1, -1)) {
    i++;
    x--;
    y--;
  }
  return i >= 5;
}
bool GameLogic::isFiveDiagonalUp(int xCoord, int yCoord) {
  int i = 1;
  unsigned int x = xCoord, y = yCoord;
  while (x > 0 && y < Map::map.size() - 1 && sameAsNeighbour(x, y, -1, 1)) {
    i++;
    x--;
    y++;
  }
  x = xCoord;
  y = yCoord;
  while (x < Map::map.size() - 1 && y > 0 && sameAsNeighbour(x, y, 1, -1)) {
    i++;
    x++;
    y--;
  }
  return i >= 5;
}
bool GameLogic::isGameWon(int x, int y) {
  bool won = false;
    if (Map::map[x][y] != 0) {
      if (isFiveInRow(x, y) || isFiveInCol(x, y) || isFiveDiagonalDown(x, y) || isFiveDiagonalUp(x, y)) {
        won = true;
      }
    }
  return won;
}
GameLogic::~GameLogic() {

}
