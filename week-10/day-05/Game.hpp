/*
 * Game.hpp
 *
 *  Created on: Dec 31, 2016
 *      Author: robertwinke
 */
#include "Gui.hpp"
#include "GameLogic.hpp"
#include "ClientSocket.h"
//#include "ServerSocket.h"

#ifndef GAME_HPP_
#define GAME_HPP_

class Game {
private:
  Gui* myGui;
  GameLogic* myGameLogic;
  Map* myMap;
  //ServerSocket* myServerSocket;
  ClientSocket* clientSocket;

  int squareSize;
public:
  Game();
  void run();
  ~Game();
};



#endif /* GAME_HPP_ */
