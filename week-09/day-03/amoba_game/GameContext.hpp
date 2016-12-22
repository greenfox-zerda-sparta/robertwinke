/*
 * GameContext.hpp
 *
 *  Created on: Dec 21, 2016
 *      Author: robertwinke
 */

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <vector>
#include <map>

#ifndef GAMECONTEXT_HPP_
#define GAMECONTEXT_HPP_

#define fps 30

class GameContext {
private:
  SDL_Window* window;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
  int squareSize;

public:
  GameContext();
  GameContext(int, int, int);
  void loadTexture(std::string, std::string);
  void drawTexture(std::string, int, int);
  void drawMap(std::vector<std::vector<int> >&);
  void capFrameRate(Uint32);
  void render();
  ~GameContext();

};


#endif /* GAMECONTEXT_HPP_ */
