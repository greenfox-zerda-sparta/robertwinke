/*
 * 12.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream my_file("twelfth-exercise.txt");
  ofstream output_file("twelfth-output.txt");
  string line;

  int offset = 1;

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


  return 0;
}


