/*
 * Song.hpp
 *
 *  Created on: Nov 11, 2016
 *      Author: robertwinke
 */
#include <string>


#ifndef SONG_HPP_
#define SONG_HPP_


class Song {
private:
  std::string title;
  std::string artist;
protected:
  int rating;
  int rateCount;
  std::string genre;
public:
  Song(std::string title, std::string artist);
  virtual void rate(unsigned int rating);
  int getRating();
  int getRateCount();
  std::string getArtist();
  std::string getGenre();
  float getAverageRating();
  virtual ~Song();
};



#endif /* SONG_HPP_ */
