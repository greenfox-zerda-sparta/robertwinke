/*
 * 13.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */

#include <iostream>
#include <fstream>

using namespace std;

int main() {

  ifstream my_file_0("thirtienth0.txt");
  ifstream my_file_1("thirtienth1.txt");
  ifstream my_file_2("thirtienth2.txt");
  ofstream output_file("thirtienth-output.txt");
  string line, line1, line2;


  while(getline(my_file_0,line) && getline(my_file_1,line1) && getline(my_file_2,line2)) {
    output_file << line + '\n';
    output_file << line1 + '\n';
    output_file << line2 + '\n';
  }


  my_file_0.close();
  my_file_1.close();
  my_file_2.close();
  output_file.close();


  return 0;
}

