/*
 * Jukebox.h
 *
 *  Created on: Nov 14, 2016
 *      Author: robertwinke
 */

#include "Song.h"

#ifndef JUKEBOX_H_
#define JUKEBOX_H_

class Jukebox {
private:
  Song** songs;
  unsigned int song_count;

public:
  Jukebox();
  void add_song(Song& song);
  void rate_song(Song& song, int rating);
  float get_artist_rating(std::string artist);
  float get_genre_rating (std::string genre);
  ~Jukebox();
};



#endif /* JUKEBOX_H_ */
