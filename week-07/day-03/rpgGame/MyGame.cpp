/*
 * MyGame.cpp
 *
 *  Created on: Dec 7, 2016
 *      Author: robertwinke
 */

#include "MyGame.hpp"

using namespace std;

MyGame::MyGame() {
  v= vector<vector<bool> > (10,vector<bool>(10));
  readMapFromFile(v);
  heroX = 0;
  heroY = 0;
}
void MyGame::readMapFromFile(vector<vector<bool> >& v) {
  ifstream mapfile;
  mapfile.open("map.txt");
  char temp;
  for (int i = 0; i < 10; i++) {
    for (int j  = 0; j < 10; j++) {
      mapfile >> temp;
      if(temp == '1') {
        v[j][i] = 1;
      }
      else {
        v[j][i] = 0;
      }
    }
  }
  mapfile.close();
}
void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
}
void MyGame::render(GameContext& context) {
  drawMap(context);
  drawHero(context, heroX, heroY);

  if (context.was_key_pressed(ARROW_DOWN)) {
    heroY += 72;
  }
  else if (context.was_key_pressed(ARROW_UP)) {
    heroY -= 72;
  }
  else if (context.was_key_pressed(ARROW_RIGHT)) {
    heroX += 72;
  }
  else if (context.was_key_pressed(ARROW_LEFT)) {
    heroX -= 72;
  }


  context.render();
}
void MyGame::drawMap(GameContext& context) {
  for (int i = 0; i < 10; i++) {
    for (int j  = 0; j < 10; j++) {
      if (v[i][j] == 1) {
        context.draw_sprite("floor.bmp", i*72, j*72);
      }
      else {
        context.draw_sprite("wall.bmp", i*72, j*72);
      }
    }
  }
}
void MyGame::drawHero(GameContext& context, int x, int y) {
  context.draw_sprite("hero-down.bmp", x, y);
}
MyGame::~MyGame() {
}
