/*
 * Genre.h
 *
 *  Created on: Nov 11, 2016
 *      Author: robertwinke
 */
#include "Song.h"
#ifndef ROCK_H_
#define ROCK_H_


class Rock: public Song {

public:
  Rock(std::string title, std::string artist);
  void rate(unsigned int rating);
  ~Rock();
};



#endif /* GENRE_H_ */
