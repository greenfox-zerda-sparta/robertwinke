/*
 * 10.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream my_file("tenth-exercise.txt");
  ofstream output_file("tenth-output.txt");
  string line;
  char temp;

  if (my_file.is_open()) {
    while(getline(my_file,line)) {
      for (unsigned int i = 0; i < line.length()/2; i++) {
        temp = line[i];
        line[i] = line[line.length() - 1 - i];
        line[line.length() - 1 - i] = temp;
      }
      output_file << line << "\n";


    }
    output_file << "\n";
  }

  my_file.close();
  output_file.close();

  return 0;
}


