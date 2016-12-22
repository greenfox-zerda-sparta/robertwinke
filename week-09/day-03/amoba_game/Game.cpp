/*
 * Game.cpp
 *
 *  Created on: Dec 22, 2016
 *      Author: robertwinke
 */

#include "Game.hpp"


Game::Game() {
  squareSize = 30;
  myGameLogic = new GameLogic2;
  myGameContext = new GameContext(600, 600, squareSize);
}
void Game::run( ) {

  bool isRunning = true;
  int turns = 0;

  Uint32 starting_tick;
  SDL_Event event;
  while(isRunning) {
    starting_tick = SDL_GetTicks();
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

          if (myGameLogic->isGameWon(x / squareSize, y / squareSize)) {
            isRunning = false;
          }

          turns++;
        }
        else if(turns % 2 == 1 && myGameLogic->getMap()[x / squareSize][y / squareSize] == 0) {
          myGameLogic->getMap()[x/squareSize][y/squareSize] = 2;

          if (myGameLogic->isGameWon(x / squareSize, y / squareSize)) {
            isRunning = false;
          }

          turns++;
        }
        break;
      }
    }
    myGameContext->capFrameRate(starting_tick);
    myGameContext->drawMap(myGameLogic->getMap());
    myGameContext->render();
  }
}
Game::~Game() {
  delete myGameLogic;
  delete myGameContext;
}

