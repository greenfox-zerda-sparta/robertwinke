/*
 * Pop.h
 *
 *  Created on: Nov 11, 2016
 *      Author: robertwinke
 */
#include "Song.h"


#ifndef POP_H_
#define POP_H_

class Pop: public Song {

public:
  Pop(std::string title, std::string artist);
  ~Pop();
};




#endif /* POP_H_ */
