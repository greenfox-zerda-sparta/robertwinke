/*
 * MyGame.hpp
 *
 *  Created on: Dec 6, 2016
 *      Author: robertwinke
 */

#include "game-engine.hpp"
#include <vector>
#include <fstream>

#ifndef MYGAME_HPP_
#define MYGAME_HPP_

using namespace std;

class MyGame : public Game {
private:
  vector<vector<bool> > v;
  int heroX, heroY;
  string heroFace;
public:
  MyGame();
  void readMapFromFile(vector<vector<bool> >& v);
  void init(GameContext& context);
  void render(GameContext& context);
  void drawMap(GameContext& context);
  void drawHero(GameContext& context,int x, int y);
  virtual ~MyGame();
};


#endif /* MYGAME_HPP_ */
