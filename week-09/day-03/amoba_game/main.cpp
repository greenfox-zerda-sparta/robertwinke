//============================================================================
// Name        : amoba_game.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GameContext.hpp"
#include "GameLogic.hpp"

using namespace std;

int main(int argc, char* argv[]) {

  GameLogic myGameLogic;
  vector<vector<int> > map = vector<vector<int> > (20,vector<int>(20,0));

  GameContext myContext(myGameLogic.getMap(), 600, 600);

	return 0;
}
