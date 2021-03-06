//============================================================================
// Name        : rpggame.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "MyGame.hpp"


using namespace std;

int main(int argc, char* argv[]) {
  srand(time(NULL));
  MyGame game;
  GameEngine engine(&game, 720, 720);
  engine.run();
  return 0;
}
