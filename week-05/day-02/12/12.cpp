/*
 * 12.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <fstream>

using namespace std;

void encryption (int offset) {
  ifstream my_file("twelfth-exercise.txt");
  ofstream output_file("twelfth-output.txt");
  string line;

  if (my_file.is_open()) {
    while(getline(my_file,line)) {
      for (unsigned int i = 0; i < line.length(); i++) {
        if(line[i] != ' ') {
          line[i] = line[i] - offset;
        }
      }
      output_file << line << "\n";


    }
    output_file << "\n";
  }
  my_file.close();
  output_file.close();


}

int main() {

  encryption(1);
  return 0;
}


