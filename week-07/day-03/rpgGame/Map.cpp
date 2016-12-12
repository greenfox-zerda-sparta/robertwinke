/*
 * Map.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */

#include "Map.hpp"
using namespace std;

vector<vector<bool> > Map::map = vector<vector<bool> > (10,vector<bool>(10));

Map::Map (){
  map= vector<vector<bool> > (10,vector<bool>(10));
  readMapFromFile(map);

  squareSize = 72;
}
void Map::readMapFromFile(vector<vector<bool> >& map) {
  ifstream mapfile;
  mapfile.open("map.txt");
  char temp;
  for (int i = 0; i < 10; i++) {
    for (int j  = 0; j < 10; j++) {
      mapfile >> temp;
      if(temp == '1') {
        map[i][j] = 1;
      }
      else {
        map[i][j] = 0;
      }
    }
  }
  mapfile.close();
}
void Map::drawMap(GameContext& context) {
  for (int i = 0; i < 10; i++) {
    for (int j  = 0; j < 10; j++) {
      if (map[i][j] == 1) {
        context.draw_sprite("floor.bmp", i*squareSize, j*squareSize);
      }
      else {
        context.draw_sprite("wall.bmp", i*squareSize, j*squareSize);
      }
    }
  }
}
