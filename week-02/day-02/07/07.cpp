/*
 * 07.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
  char g1 = 'a';
  double g2 = 12.345;
  // Tell if g1 is stored in more bytes than g2

  if (sizeof(char) > sizeof(double)){
	  cout << "g1 is stored in more bytes than g2" << endl;
  }
  else {
	  cout << "g2 is stored in more bytes than g1" << endl;
  }

  return 0;
}


