/*
 * 02.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  // Open a file called "second-exercise.txt"
  // Read the content of the file and print it to the terminal window

  ifstream my_file("second-exercise.txt");

  string content;
  my_file >> content;
  my_file.close();

  cout << content << endl;

  return 0;
}


