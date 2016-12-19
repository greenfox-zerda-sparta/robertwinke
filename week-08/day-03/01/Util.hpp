/*
 * Util.hpp
 *
 *  Created on: Dec 16, 2016
 *      Author: robertwinke
 */
#include <string>
#include <cstdio>
#include <cstdlib>

#ifndef UTIL_HPP_
#define UTIL_HPP_


int hexToInt(std::string hexNum) {
  std::string myhex = hexNum;
  unsigned int x = strtoul(myhex.c_str(), NULL, 16);
  return x;
}


#endif /* UTIL_HPP_ */
