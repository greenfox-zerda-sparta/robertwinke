/*
 * GameContext.cpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */

#include "GameContext.hpp"


GameContext::GameContext(std::vector<std::vector<int> >& newMap, int screenWidth, int screenHeight) {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight,SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  loadTexture("floor.bmp");

  run(newMap);
}

void GameContext::run(std::vector<std::vector<int> >& newMap) {
  bool isRunning = true;
  SDL_Event event;
  while(isRunning) {
    for (int i = 0; i < 19; i++) {
      for (int j = 0; j < 19; j++) {
        if (newMap[i][j] == 1) {
          drawTexture(i,j);
        }
      }
    }
    if(SDL_PollEvent(&event)) {
      switch(event.type) {
      case SDL_QUIT:
        isRunning = false;
        break;
      }
    }

    render();
  }
}

void GameContext::loadTexture(std::string filePath) {
  SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
  imageTexture = SDL_CreateTextureFromSurface(renderer, surface);
  SDL_FreeSurface(surface);
}
void GameContext::drawTexture(int x, int y) {
  SDL_Rect temp;
  temp.x = x * 30;
  temp.y = y * 30;
  temp.w = 30;
  temp.h = 30;
  SDL_RenderCopy(renderer, imageTexture, NULL, &temp);
}
void GameContext::render() {
  SDL_RenderPresent(renderer);
}
GameContext::~GameContext() {
  SDL_DestroyTexture(imageTexture);
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  renderer = NULL;
  imageTexture  = NULL;
  window = NULL;
  SDL_Quit();
}
