/*
 * 06.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string file_to_string (string file) {
  ifstream my_file;
  my_file.open(file.c_str());

  if (!my_file.is_open()) {
    cerr << "can t open file";
  }
  else {
    string content;
    string temp;

    while(my_file >> temp) {
      content += temp + " ";

    }

    my_file.close();
    return content;
  }
}

int main() {
  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter

  cout << file_to_string("fourth-exercise.txt");

  return 0;
}
