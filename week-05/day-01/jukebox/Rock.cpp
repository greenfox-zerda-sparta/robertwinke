/*
 * Rock.cpp
 *
 *  Created on: Nov 11, 2016
 *      Author: robertwinke
 */


#include "Rock.h"
#include "Song.h"
#include <string>
#include <iostream>

using namespace std;

Rock::Rock(string title, string artist ): Song(title, artist) {
  genre = "Rock";
}

void Rock::rate(unsigned int rating) {
  if (rating > 5 || rating < 2) {
    std::cerr << "your rating is out of range";
    return;
  }
  else {
    this->rating += rating;
    rateCount++;
  }
}


Rock::~Rock() {

}
