/*
 * Jukebox.cpp
 *
 *  Created on: Nov 14, 2016
 *      Author: robertwinke
 */

#include "Jukebox.h"
#include <iostream>

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
  int rateCount, ratings;
  rateCount=ratings=0;
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
std::string Jukebox::top_rated_title() {
  Song *temp = songs[0];
  if (songs != NULL) {
    for (unsigned int i = 1; i < song_count; i++) {
      if (songs[i]->getAverageRating() > temp->getAverageRating()) {
        temp = songs[i];
      }
    }
  }
  return temp->getTitle();
}
std::string Jukebox::top_rated_genre() {

  std::string top_genre = songs[0]->getGenre();

  for (unsigned int i = 1; i < song_count; i++) {
    if (get_genre_rating(songs[i]->getGenre()) > get_genre_rating(top_genre)) {
      top_genre = songs[i]->getGenre();
    }
  }
  return top_genre;
}

Jukebox::~Jukebox() {
  delete[] songs;
}


