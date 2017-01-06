/*
 * Game.cpp
 *
 *  Created on: Dec 31, 2016
 *      Author: robertwinke
 */

#include "Game.hpp"


Game::Game() {
  if (SDLNet_Init() == -1) {
    cerr << "Failed to intialise SDL_net: " << SDLNet_GetError() << endl;
    exit(-1);
  }
  squareSize = 30;
  myGameLogic = new GameLogic;
  myGui = new Gui(600, 600, squareSize);
  myMap = new Map;
  clientSocket = new ClientSocket("127.0.0.1", 1234, 512);
  clientSocket->connectToServer();
}
void Game::run( ) {
  bool isRunning = true;
  bool isWon = false;
  bool yourTurn = true;
  int turns = 0;
  int xCoord = 0;
  int yCoord = 0;
  Uint32 starting_tick;
  SDL_Event event;
  while(isRunning) {
    starting_tick = SDL_GetTicks();
    char *recievedCoords;
    recievedCoords = clientSocket->checkForIncomingMessages();
    xCoord = (int)recievedCoords[0];
    yCoord = (int)recievedCoords[1];
    if (xCoord != 79 && myMap->getMap()[xCoord][yCoord] != 1) {
      myMap->getMap()[xCoord][yCoord] = 2;
      yourTurn = true;
      if (myGameLogic->isGameWon(xCoord, yCoord)) {
        isWon = true;
        myMap->fillMap();
      }
    }
    myGui->drawMap(myMap->getMap(), isWon);
    if(SDL_PollEvent(&event)) {
      switch(event.type) {
      case SDL_QUIT:
        isRunning = false;
        break;
      case SDL_MOUSEBUTTONDOWN:
        int x = 0, y = 0;
        SDL_GetMouseState(&x, &y);
        x /= squareSize;
        y /= squareSize;
        if(yourTurn && myMap->getMap()[x][y] == 0) {
          myMap->getMap()[x][y] = 1;
          clientSocket->getUserInput(x, y);
          yourTurn = false;
          if (myGameLogic->isGameWon(x, y)) {
            isWon = true;
            myMap->fillMap();
          }
          turns++;
        }
        break;
      }
    }
    myGui->capFrameRate(starting_tick);
    myGui->render();
  }
}
Game::~Game() {
  //delete clientSocket;
  delete myGameLogic;
  delete myGui;
  delete myMap;
  SDLNet_Quit();
}

