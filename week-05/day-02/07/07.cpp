/*
 * 07.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */




#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void string_to_file(string file, string content) {
  ofstream my_file(file.c_str());


  my_file << content;


  my_file.close();
}

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter

  string_to_file("seventh-exercise.txt","hgfhfjgdjgd");


  return 0;
}
