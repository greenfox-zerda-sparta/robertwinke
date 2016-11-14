/*
 * Jukebox.cpp
 *
 *  Created on: Nov 14, 2016
 *      Author: robertwinke
 */

#include "Jukebox.h"


Jukebox::Jukebox() {
  this->song_count = 0;
  this->songs = NULL;
}
void Jukebox::add_song(Song& song) {
  Song** temp = new Song*[song_count + 1];
  if (songs != NULL) {
    for (unsigned int i = 0; i < song_count; i++) {
      temp[i] = songs[i];
    }
  }
  temp[song_count] = &song;
  delete[] songs;
  songs = temp;
  song_count++;
}
void Jukebox::rate_song(Song& song, int rating) {
  song.rate(rating);
}
float Jukebox::get_artist_rating(std::string artist) {
  int rateCount, ratings = 0;
  if (songs != NULL) {
    for (unsigned int i = 0; i < song_count; i++) {
      if (songs[i]->getArtist() == artist) {
        ratings += songs[i]->getRating();
        rateCount += songs[i]->getRateCount();
      }
    }
  }
  return ratings / (float)rateCount;
}
float Jukebox::get_genre_rating (std::string genre) {
  int rateCount, ratings = 0;
  if (songs != NULL) {
    for (unsigned int i = 0; i < song_count; i++) {
      if (songs[i]->getGenre() == genre) {
        ratings += songs[i]->getRating();
        rateCount += songs[i]->getRateCount();
      }
    }
  }
  return ratings / (float)rateCount;
}

Jukebox::~Jukebox() {
  delete[] songs;
}


