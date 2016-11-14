/*
 * Pop.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: robertwinke
 */

#include "Pop.h"
#include "Song.h"
#include <string>
#include <iostream>


Pop::Pop(std::string title, std::string artist ): Song(title, artist) {
  genre = "Pop";
}

Pop::~Pop() {

}

