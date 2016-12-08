/*
 * Map.cpp
 *
 *  Created on: Dec 8, 2016
 *      Author: robertwinke
 */

#include "Map.hpp"
using namespace std;

Map::Map (){
  v= vector<vector<bool> > (10,vector<bool>(10));
  readMapFromFile(v);

  squareSize = 72;
}

void Map::readMapFromFile(vector<vector<bool> >& v) {
  ifstream mapfile;
  mapfile.open("map.txt");
  char temp;
  for (int i = 0; i < 10; i++) {
    for (int j  = 0; j < 10; j++) {
      mapfile >> temp;
      if(temp == '1') {
        v[i][j] = 1;
      }
      else {
        v[i][j] = 0;
      }
    }
  }
  mapfile.close();
}
void Map::drawMap(GameContext& context) {
  for (int i = 0; i < 10; i++) {
    for (int j  = 0; j < 10; j++) {
      if (v[i][j] == 1) {
        context.draw_sprite("floor.bmp", i*squareSize, j*squareSize);
      }
      else {
        context.draw_sprite("wall.bmp", i*squareSize, j*squareSize);
      }
    }
  }
}
