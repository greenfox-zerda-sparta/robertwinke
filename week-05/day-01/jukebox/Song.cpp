/*
 * Song.cpp
 *
 *  Created on: Nov 11, 2016
 *      Author: robertwinke
 */
#include "iostream"
#include "Song.h"


Song::Song(std::string title, std::string artist) {
  this->title = title;
  this->artist = artist;
  this->rateCount = 0;
  this->rating = 0;

}

void Song::rate(unsigned int rating) {
  if (rating > 5) {
    std::cerr << "your rating is out of range";
    return;
  }
  else {
    this->rating += rating;
    rateCount++;
  }
}

int Song::getRating() {
  return rating;
}
int Song::getRateCount() {
  return rateCount;
}
std::string Song::getArtist() {
  return artist;
}

float Song::getAverageRating() {
  return rating/(float)rateCount;
}

std::string Song::getGenre() {
  return genre;
}
Song::~Song() {

}

