/*
 * 05.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error

  ifstream my_file;
  my_file.open("fifth-exercise.txt");
  string line;

  if (!my_file.is_open()) {
    cerr << "Could not opent the file" << endl;
    return 2;
  }
  else {
    while(my_file >> line) {
      cout << line << endl;
    }
    my_file.close();
  }


  return 0;
}

