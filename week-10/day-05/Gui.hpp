/*
 * gui.hpp
 *
 *  Created on: Dec 31, 2016
 *      Author: robertwinke
 */

#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include <vector>
#include <map>

#ifndef GUI_HPP_
#define GUI_HPP_

#define fps 60

class Gui {
private:
  SDL_Window* window;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
  int squareSize;

public:
  Gui();
  Gui(int, int, int);
  void loadTexture(std::string, std::string);
  void drawTexture(std::string, int, int);
  void drawMap(std::vector<std::vector<int> >&, bool);
  void drawMessage(std::string);
  void render();
  void capFrameRate(Uint32);
  ~Gui();

};




#endif /* GUI_HPP_ */
