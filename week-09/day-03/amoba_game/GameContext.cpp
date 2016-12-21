/*
 * GameContext.cpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */

#include "GameContext.hpp"
#include <iostream>


GameContext::GameContext(std::vector<std::vector<int> >& newMap, int screenWidth, int screenHeight) {
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight,SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  loadTexture("empty","floor.bmp");
  loadTexture("x","blackx.bmp");
  loadTexture("o","blacko.bmp");

  run(newMap);
}

void GameContext::run(std::vector<std::vector<int> >& newMap) {
  bool isRunning = true;
  int turns = 0;
  SDL_Event event;
  while(isRunning) {
    for (int i = 0; i < 20; i++) {
      for (int j = 0; j < 20; j++) {
        if (newMap[i][j] == 0) {
          drawTexture("empty",i,j);
        }
        else if (newMap[i][j] == 1) {
          drawTexture("x",i,j);
        }
        else if (newMap[i][j] == 2) {
          drawTexture("o",i,j);
        }
      }
    }
    if(SDL_PollEvent(&event)) {
      switch(event.type) {
      case SDL_QUIT:
        isRunning = false;
        break;
      case SDL_MOUSEBUTTONDOWN:
        int x = 0, y = 0;
        SDL_GetMouseState(&x, &y);
        if(turns % 2 == 0 && newMap[x/30][y/30] == 0) {
          newMap[x/30][y/30] = 1;
          turns++;
        }
        else if(turns % 2 == 1 && newMap[x/30][y/30] == 0) {
          newMap[x/30][y/30] = 2;
          turns++;
        }
        break;
      }
    }

    render();
  }
}

void GameContext::loadTexture(std::string spriteName,std::string filePath) {
  SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
  sprites[spriteName] = SDL_CreateTextureFromSurface(renderer, surface);
  SDL_FreeSurface(surface);
}
void GameContext::drawTexture(std::string spriteName, int x, int y) {
  SDL_Rect temp;
  temp.x = x * 30;
  temp.y = y * 30;
  temp.w = 30;
  temp.h = 30;
  SDL_RenderCopy(renderer, sprites[spriteName], NULL, &temp);
}
void GameContext::render() {
  SDL_RenderPresent(renderer);
}
GameContext::~GameContext() {
  for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
    SDL_DestroyTexture(it->second);
  }
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  renderer = NULL;
  window = NULL;
  SDL_Quit();
}
