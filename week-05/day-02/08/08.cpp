/*
 * 08.cpp
 *
 *  Created on: Nov 15, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool copy_file(string file1, string file2) {
  ifstream file_1(file1.c_str());
  ofstream file_2(file2.c_str());

  string temp;

  if (!file_1.is_open()) {
    return false;
  }
  else {
    while (file_1 >> temp) {
      file_2 << temp << "\n";
    }

    file_1.close();
    file_2.close();
    return true;
  }
}

int main() {
  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful

  cout << copy_file("fourth-exercise.txt", "eigth-exercise.txt") << endl;

  return 0;
}
