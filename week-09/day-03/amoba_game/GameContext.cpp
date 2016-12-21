/*
 * GameContext.cpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */

#include "GameContext.hpp"


GameContext::GameContext() {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600,SDL_WINDOW_SHOWN);
  windowSurface = SDL_GetWindowSurface(window);


  imageSurface = SDL_LoadBMP("floor.bmp");

  SDL_BlitSurface(imageSurface, NULL, windowSurface, NULL);

  bool isRunning = true;
  SDL_Event event;

  while(isRunning) {
    if(SDL_PollEvent(&event)) {
      switch(event.type) {
      case SDL_QUIT:
        isRunning = false;
        break;
      }
    }
    SDL_UpdateWindowSurface(window);
  }
}
GameContext::~GameContext() {
  SDL_FreeSurface(imageSurface);
  SDL_DestroyWindow(window);
  imageSurface  = NULL;
  windowSurface = NULL;
  window = NULL;
  SDL_Quit();
}
