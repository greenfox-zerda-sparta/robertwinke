/*
 * Game.cpp
 *
 *  Created on: Dec 22, 2016
 *      Author: robertwinke
 */

#include "Game.hpp"


Game::Game() {
  myGameLogic = new GameLogic;
  myGameContext = new GameContext;
  squareSize = 30;
}
void Game::run( ) {
  bool isRunning = true;
  int turns = 0;
  SDL_Event event;
  while(isRunning) {
    if(SDL_PollEvent(&event)) {
      switch(event.type) {
      case SDL_QUIT:
        isRunning = false;
        break;
      case SDL_MOUSEBUTTONDOWN:
        int x = 0, y = 0;
        SDL_GetMouseState(&x, &y);
        if(turns % 2 == 0 && myGameLogic->getMap()[x / squareSize][y / squareSize] == 0) {
          myGameLogic->getMap()[x/squareSize][y/squareSize] = 1;
          turns++;
        }
        else if(turns % 2 == 1 && myGameLogic->getMap()[x / squareSize][y / squareSize] == 0) {
          myGameLogic->getMap()[x/squareSize][y/squareSize] = 2;
          turns++;
        }
        if (myGameLogic->isGameWon()) {
          isRunning = false;
        }
        break;
      }
    }
    myGameContext->drawMap(myGameLogic->getMap());
    myGameContext->render();
  }
}
Game::~Game() {
  delete myGameLogic;
  delete myGameContext;
}

