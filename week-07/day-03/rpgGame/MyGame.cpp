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
  heroFace = "hero-down.bmp";
}
void MyGame::readMapFromFile(vector<vector<bool> >& v) {
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
void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-right.bmp");
  context.load_file("hero-left.bmp");
}
void MyGame::render(GameContext& context) {
  drawMap(context);
  drawHero(context, heroX, heroY);
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

  if (context.was_key_pressed(ARROW_DOWN)) {
    heroFace = "hero-down.bmp";
    if (heroY < 648) {
      if (v[(heroX/72)][heroY/72+1]) {
        heroY += 72;
      }
    }
  }
  else if (context.was_key_pressed(ARROW_UP)) {
    heroFace = "hero-up.bmp";
    if (heroY >= 72) {
      if (v[(heroX/72)][heroY/72-1]) {
        heroY -= 72;
      }
    }
  }
  else if (context.was_key_pressed(ARROW_RIGHT)) {
    heroFace = "hero-right.bmp";
    if (heroX < 648) {
      if (v[(heroX/72)+1][heroY/72]) {
        heroX += 72;
      }
    }
  }
  else if (context.was_key_pressed(ARROW_LEFT)) {
    heroFace = "hero-left.bmp";
    if (heroX >= 72) {
      if (v[(heroX/72)-1][heroY/72]) {
        heroX -= 72;
      }
    }
  }
  context.draw_sprite(heroFace, x, y);
}
MyGame::~MyGame() {
}
