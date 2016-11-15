/*
 * 09.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream my_file("ninth-exercise.txt");
  ofstream output_file("ninth-output.txt");
  string word;
  bool space = true;

  if (my_file.is_open()) {
    while(my_file >> word) {
      for (unsigned int i = 0; i < word.length(); i += 2) {
        output_file << word[i];
        if (word[i] == '.') {
          output_file << "\n";
          space = false;
        }
      }
      if (space) {
        output_file << " ";
      }
      space = true;
    }
    output_file << "\n";
  }

  my_file.close();
  output_file.close();

  return 0;
}

