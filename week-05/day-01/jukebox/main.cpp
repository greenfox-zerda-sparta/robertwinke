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



  Rock my_rock("Paint it black","jagger");
  Pop my_pop("She wolf","guetta");

  Jukebox my_jukebox;

  my_jukebox.add_song(my_rock);
  my_jukebox.add_song(my_pop);


  my_jukebox.rate_song(my_rock, 5);
  my_jukebox.rate_song(my_rock, 4);
  my_jukebox.rate_song(my_rock, 3);


  my_jukebox.rate_song(my_pop, 5);
  my_jukebox.rate_song(my_pop, 5);
  my_jukebox.rate_song(my_pop, 3);
  my_jukebox.rate_song(my_pop, 5);
  my_jukebox.rate_song(my_pop, 1);




  cout << "rock rating: " << my_jukebox.get_genre_rating("Rock") << endl;
  cout << "pop rating: " << my_jukebox.get_genre_rating("Pop") << endl;

  cout << "Top rated title: " << my_jukebox.top_rated_title() << endl;

  cout << "top rated genre: " << my_jukebox.top_rated_genre() << endl;

	return 0;
}
