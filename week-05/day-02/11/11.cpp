/*
 * 11.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream my_file("eleventh-exercise.txt");
  ofstream output_file("eleventh-output.txt");
  int length = 0;
  string line;

  while(getline(my_file, line)) {
    length++;
  }

  my_file.close();

  for (int j = 0; j < length; j++) {
    my_file.open("eleventh-exercise.txt");
    for (int i = length-j; i > 0; i--) {
      getline(my_file, line);
    }
    output_file << line << "\n";
    my_file.close();
  }



  my_file.close();
  output_file.close();


  return 0;
}
