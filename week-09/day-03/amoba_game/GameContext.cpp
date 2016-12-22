/*
 * GameContext.cpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */

#include "GameContext.hpp"
#include <iostream>

GameContext::GameContext() {
  squareSize = 30;
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600,SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  loadTexture("empty","floor.bmp");
  loadTexture("x","blackx.bmp");
  loadTexture("o","blacko.bmp");
}

GameContext::GameContext(int screenWidth, int screenHeight) {
  squareSize = 30;
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight,SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  loadTexture("empty","floor.bmp");
  loadTexture("x","blackx.bmp");
  loadTexture("o","blacko.bmp");

}

void GameContext::loadTexture(std::string spriteName,std::string filePath) {
  SDL_Surface* surface = SDL_LoadBMP(filePath.c_str());
  sprites[spriteName] = SDL_CreateTextureFromSurface(renderer, surface);
  SDL_FreeSurface(surface);
}
void GameContext::drawTexture(std::string spriteName, int x, int y) {
  SDL_Rect temp;
  temp.x = x * squareSize;
  temp.y = y * squareSize;
  temp.w = squareSize;
  temp.h = squareSize;
  SDL_RenderCopy(renderer, sprites[spriteName], NULL, &temp);
}
void GameContext::drawMap(std::vector<std::vector<int> >& newMap) {
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
