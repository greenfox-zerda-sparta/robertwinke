//============================================================================
// Name        : jukebox.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Song.h"
#include "Rock.h"
#include "Pop.h"
#include "Reggae.h"
#include "Jukebox.h"
using namespace std;

int main() {
//  Song* new_song = new Rock("sdgs", "3sdg");
//  Song* new_song1 = new Reggae("sdgs", "3sdg");
//
//  new_song->rate(4);
//  cout << new_song->getAverageRating();
//
//  delete new_song;
//  delete new_song1;

  Rock my_rock("sfgs","jagger");
  Rock my_rock2("sfgssdfsd","jagger");

  Jukebox my_jukebox;

  my_jukebox.add_song(my_rock);
  my_jukebox.add_song(my_rock2);

  my_jukebox.rate_song(my_rock2, 5);

  my_jukebox.rate_song(my_rock, 5);
  my_jukebox.rate_song(my_rock, 5);
  my_jukebox.rate_song(my_rock, 3);
  my_jukebox.rate_song(my_rock, 4);

  cout << my_jukebox.get_artist_rating("jagger") << endl;
  cout << my_jukebox.get_genre_rating("Rock") << endl;

	return 0;
}
