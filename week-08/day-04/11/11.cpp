/*
 * 11.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <SDL.h>
#include <stdlib.h>
#include "draw.h"

void drawIze(draw& d, SDL_Renderer* &renderer, int size, int x, int y) {
  d.MoveTo(x,y);

  d.DrawTo(renderer,x+size,y);
  d.DrawTo(renderer,x+size,y+size);
  d.DrawTo(renderer,x, y+size);
  d.DrawTo(renderer, x, y);
}


void drawSquare(draw& d, SDL_Renderer* &renderer, int size, int x, int y) {
  int newSize = size / 3;
  for(int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      drawIze(d,renderer,newSize,i*newSize+x,j*newSize+y);
    }
  }
  if (newSize > 5) {
    drawSquare(d,renderer, newSize, x+newSize, y);
    drawSquare(d,renderer, newSize, x, y+newSize);
    drawSquare(d,renderer, newSize, x+newSize*2, y+newSize);
    drawSquare(d,renderer, newSize, x+newSize, y+newSize*2);

  }

}

int main(int argc, char ** argv) {
  bool quit = false;
  SDL_Event event;

  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_Window* window = SDL_CreateWindow("SDL2 Fractal",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 729, 729, 0);

  SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

bool ize = true;

  while (!quit) {
    SDL_WaitEvent(&event);

    if (event.type == SDL_QUIT) {
      quit = true;
      break;
    }

    SDL_SetRenderDrawColor(renderer, 255, 255, 50, 50);
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);

    if(ize) {
    draw d;
    drawSquare(d, renderer, 729, 0, 0);
    ize = false;
    }

    SDL_RenderPresent(renderer);
  }
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;

}


