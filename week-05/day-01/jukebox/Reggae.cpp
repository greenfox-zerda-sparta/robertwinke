/*
 * Reggae.cpp
 *
 *  Created on: Nov 13, 2016
 *      Author: robertwinke
 */



#include "Reggae.h"
#include "Song.h"
#include <string>
#include <iostream>

using namespace std;

Reggae::Reggae(string title, string artist ): Song(title, artist) {
  genre = "Reggae";
}

void Reggae::rate(unsigned int rating) {
  if (rating > 4) {
    std::cerr << "your rating is out of range";
    return;
  }
  else {
    this->rating += rating;
    rateCount++;
  }
}


Reggae::~Reggae() {

}
