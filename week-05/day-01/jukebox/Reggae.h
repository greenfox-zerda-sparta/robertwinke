/*
 * Reggae.h
 *
 *  Created on: Nov 13, 2016
 *      Author: robertwinke
 */

#include "Song.h"


#ifndef REGGAE_H_
#define REGGAE_H_

class Reggae: public Song {

public:
  Reggae(std::string title, std::string artist);
  void rate(unsigned int rating);
  ~Reggae();
};


#endif /* REGGAE_H_ */
