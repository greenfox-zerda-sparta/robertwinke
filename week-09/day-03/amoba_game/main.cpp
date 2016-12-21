//============================================================================
// Name        : amoba_game.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "GameContext.hpp"

using namespace std;

int main(int argc, char* argv[]) {
  vector<vector<int> > map = vector<vector<int> > (20,vector<int>(20,0));

  GameContext myContext(map, 600, 600);

	return 0;
}
