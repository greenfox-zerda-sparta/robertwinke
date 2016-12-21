/*
 * GameContext.hpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */

#include "SDL2/SDL.h"

#ifndef GAMECONTEXT_HPP_
#define GAMECONTEXT_HPP_


class GameContext {
private:
  SDL_Window* window;
  SDL_Surface* windowSurface;
  SDL_Surface* imageSurface;
public:
  GameContext();
  ~GameContext();

};


#endif /* GAMECONTEXT_HPP_ */
