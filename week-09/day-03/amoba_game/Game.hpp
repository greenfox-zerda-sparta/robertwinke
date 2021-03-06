/*
 * Game.hpp
 *
 *  Created on: Dec 22, 2016
 *      Author: robertwinke
 */
#include "GameLogic2.hpp"
#include "GameContext.hpp"

#ifndef GAME_HPP_
#define GAME_HPP_


class Game {
private:
  GameContext* myGameContext;
  GameLogic2* myGameLogic;
  int squareSize;
public:
  Game();
  void run();
  ~Game();
};



#endif /* GAME_HPP_ */
