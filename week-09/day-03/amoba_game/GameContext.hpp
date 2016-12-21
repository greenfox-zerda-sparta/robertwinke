/*
 * GameContext.hpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */

#include "SDL2/SDL.h"
#include <string>
#include <vector>

#ifndef GAMECONTEXT_HPP_
#define GAMECONTEXT_HPP_


class GameContext {
private:
  SDL_Window* window;
  SDL_Renderer* renderer;
  SDL_Texture* imageTexture;

public:
  GameContext(std::vector<std::vector<int> >&, int, int);
  void run(std::vector<std::vector<int> >&);
  void loadTexture(std::string);
  void drawTexture(int, int);
  void render();
  ~GameContext();

};


#endif /* GAMECONTEXT_HPP_ */
