/*
 * Gui.cpp
 *
 *  Created on: Dec 31, 2016
 *      Author: robertwinke
 */

#include "Gui.hpp"


Gui::Gui() {
  squareSize = 30;
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 600,SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

  loadTexture("empty","floor.bmp");
  loadTexture("mouseAbove","empty-reverse.png");
  loadTexture("x","blackx.bmp");
  loadTexture("o","blacko.bmp");
  loadTexture("gameover","gameover.jpg");
}

Gui::Gui(int screenWidth, int screenHeight, int squareSize) {
  this->squareSize = squareSize;
  SDL_Init(SDL_INIT_VIDEO);
  window = SDL_CreateWindow("Gomoku", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight,SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderClear(renderer);
  loadTexture("empty","empty.png");
  loadTexture("mouseAbove","empty-reverse.png");
  loadTexture("o","redo.jpg");
  loadTexture("x","bluex.jpg");
  loadTexture("gameover","gameover.jpg");
}

void Gui::loadTexture(std::string spriteName,std::string filePath) {
  SDL_Surface* surface = IMG_Load(filePath.c_str());
  sprites[spriteName] = SDL_CreateTextureFromSurface(renderer, surface);
  SDL_FreeSurface(surface);
}
void Gui::drawTexture(std::string spriteName, int x, int y) {
  SDL_Rect temp;
  temp.x = x * squareSize;
  temp.y = y * squareSize;
  temp.w = squareSize;
  temp.h = squareSize;
  SDL_RenderCopy(renderer, sprites[spriteName], NULL, &temp);
}
void Gui::drawMessage(std::string spriteName) {
  SDL_Rect temp;
  temp.x = 0;
  temp.y = 150;
  temp.w = 600;
  temp.h = 300;
  SDL_RenderCopy(renderer, sprites[spriteName], NULL, &temp);
}
void Gui::drawMap(std::vector<std::vector<int> >& newMap, bool isWon) {
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
  if (isWon) {
    drawMessage("gameover");
  }
}
void Gui::capFrameRate(Uint32 starting_tick) {
  if ((1000 / fps) > (SDL_GetTicks() - starting_tick)) {
    SDL_Delay(1000 / fps - (SDL_GetTicks() - starting_tick));
  }
}
void Gui::render() {
  SDL_RenderPresent(renderer);
}
Gui::~Gui() {
  for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
    SDL_DestroyTexture(it->second);
  }
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  renderer = NULL;
  window = NULL;
  SDL_Quit();
}
