/*
 * 01.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "first-exercise.txt"
  // Write your name in it as a single line

  ofstream my_file("first-exercise.txt");

  my_file << "Winke Róbert";

  my_file.close();

  return 0;
}

